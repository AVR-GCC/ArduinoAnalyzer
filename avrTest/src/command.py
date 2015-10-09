import subprocess, threading

class Command(object):
    def __init__(self, cmd):
        self.cmd = cmd
        self.process = None

    def run(self, timeout):
        def target():
            self.process = subprocess.Popen(self.cmd, shell=True)
            self.process.communicate()

        thread = threading.Thread(target=target)
        thread.start()

        thread.join(timeout)
        if thread.is_alive():
            print 'process timed out... 5 secs or more... terminating flow'
            self.process.terminate()
            thread.join()
        return self.process.returncode
# command = Command("echo 'Process started'; sleep 2; echo 'Process finished'")
# command.run(timeout=3)
# command.run(timeout=1)