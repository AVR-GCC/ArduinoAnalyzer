
# *****************************************************************
# **                                                             **
# **  ======***=== AVR-GCC bug seeker ===***======               **
# **                                                             **
# **  an interactive tool for testing avr C tools                **
# **                    command.py:                              **
# ** in order to keep the flow running despite the infinite loops**
# ** that generated programs some times produce, using command.py**
# ***************************************************************** 

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
            print 'process timed out... 10 secs or more... terminating'
            self.process.terminate()
            thread.join()
        return self.process.returncode
# command = Command("echo 'Process started'; sleep 2; echo 'Process finished'")
# command.run(timeout=3)
# command.run(timeout=1)