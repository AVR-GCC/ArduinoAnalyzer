
O0avrtest.elf:     file format elf32-avr


Disassembly of section .text:

00000000 <__vectors>:
   0:	0c 94 34 00 	jmp	0x68	; 0x68 <__ctors_end>
   4:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
   8:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
   c:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  10:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  14:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  18:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  1c:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  20:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  24:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  28:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  2c:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  30:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  34:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  38:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  3c:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  40:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  44:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  48:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  4c:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  50:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  54:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  58:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  5c:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  60:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>
  64:	0c 94 51 00 	jmp	0xa2	; 0xa2 <__bad_interrupt>

00000068 <__ctors_end>:
  68:	11 24       	eor	r1, r1
  6a:	1f be       	out	0x3f, r1	; 63
  6c:	cf ef       	ldi	r28, 0xFF	; 255
  6e:	d8 e0       	ldi	r29, 0x08	; 8
  70:	de bf       	out	0x3e, r29	; 62
  72:	cd bf       	out	0x3d, r28	; 61

00000074 <__do_copy_data>:
  74:	11 e0       	ldi	r17, 0x01	; 1
  76:	a0 e0       	ldi	r26, 0x00	; 0
  78:	b1 e0       	ldi	r27, 0x01	; 1
  7a:	e2 e4       	ldi	r30, 0x42	; 66
  7c:	fa e0       	ldi	r31, 0x0A	; 10
  7e:	02 c0       	rjmp	.+4      	; 0x84 <__do_copy_data+0x10>
  80:	05 90       	lpm	r0, Z+
  82:	0d 92       	st	X+, r0
  84:	a0 3f       	cpi	r26, 0xF0	; 240
  86:	b1 07       	cpc	r27, r17
  88:	d9 f7       	brne	.-10     	; 0x80 <__do_copy_data+0xc>

0000008a <__do_clear_bss>:
  8a:	25 e0       	ldi	r18, 0x05	; 5
  8c:	a0 ef       	ldi	r26, 0xF0	; 240
  8e:	b1 e0       	ldi	r27, 0x01	; 1
  90:	01 c0       	rjmp	.+2      	; 0x94 <.do_clear_bss_start>

00000092 <.do_clear_bss_loop>:
  92:	1d 92       	st	X+, r1

00000094 <.do_clear_bss_start>:
  94:	a4 3f       	cpi	r26, 0xF4	; 244
  96:	b2 07       	cpc	r27, r18
  98:	e1 f7       	brne	.-8      	; 0x92 <.do_clear_bss_loop>
  9a:	0e 94 85 03 	call	0x70a	; 0x70a <main>
  9e:	0c 94 1f 05 	jmp	0xa3e	; 0xa3e <_exit>

000000a2 <__bad_interrupt>:
  a2:	0c 94 00 00 	jmp	0	; 0x0 <__vectors>

000000a6 <debug_puts>:

//#include <stdint.h>

#include <stdlib.h>
/* Poll the specified string out the debug port. */
void debug_puts(const char *str) {
  a6:	cf 93       	push	r28
  a8:	df 93       	push	r29
  aa:	00 d0       	rcall	.+0      	; 0xac <debug_puts+0x6>
  ac:	00 d0       	rcall	.+0      	; 0xae <debug_puts+0x8>
  ae:	cd b7       	in	r28, 0x3d	; 61
  b0:	de b7       	in	r29, 0x3e	; 62
  b2:	9c 83       	std	Y+4, r25	; 0x04
  b4:	8b 83       	std	Y+3, r24	; 0x03
  const char *c;

  for(c = str; *c; c++)
  b6:	8b 81       	ldd	r24, Y+3	; 0x03
  b8:	9c 81       	ldd	r25, Y+4	; 0x04
  ba:	9a 83       	std	Y+2, r25	; 0x02
  bc:	89 83       	std	Y+1, r24	; 0x01
  be:	0d c0       	rjmp	.+26     	; 0xda <debug_puts+0x34>
    special_output_port = *c;
  c0:	80 e2       	ldi	r24, 0x20	; 32
  c2:	90 e0       	ldi	r25, 0x00	; 0
  c4:	29 81       	ldd	r18, Y+1	; 0x01
  c6:	3a 81       	ldd	r19, Y+2	; 0x02
  c8:	f9 01       	movw	r30, r18
  ca:	20 81       	ld	r18, Z
  cc:	fc 01       	movw	r30, r24
  ce:	20 83       	st	Z, r18
#include <stdlib.h>
/* Poll the specified string out the debug port. */
void debug_puts(const char *str) {
  const char *c;

  for(c = str; *c; c++)
  d0:	89 81       	ldd	r24, Y+1	; 0x01
  d2:	9a 81       	ldd	r25, Y+2	; 0x02
  d4:	01 96       	adiw	r24, 0x01	; 1
  d6:	9a 83       	std	Y+2, r25	; 0x02
  d8:	89 83       	std	Y+1, r24	; 0x01
  da:	89 81       	ldd	r24, Y+1	; 0x01
  dc:	9a 81       	ldd	r25, Y+2	; 0x02
  de:	fc 01       	movw	r30, r24
  e0:	80 81       	ld	r24, Z
  e2:	88 23       	and	r24, r24
  e4:	69 f7       	brne	.-38     	; 0xc0 <debug_puts+0x1a>
    special_output_port = *c;
}
  e6:	0f 90       	pop	r0
  e8:	0f 90       	pop	r0
  ea:	0f 90       	pop	r0
  ec:	0f 90       	pop	r0
  ee:	df 91       	pop	r29
  f0:	cf 91       	pop	r28
  f2:	08 95       	ret

000000f4 <platform_main_begin>:

static void platform_main_begin(void);
static void platform_main_begin(void)
{
  f4:	cf 93       	push	r28
  f6:	df 93       	push	r29
  f8:	cd b7       	in	r28, 0x3d	; 61
  fa:	de b7       	in	r29, 0x3e	; 62
  //debug_puts("\nStarting main!\n");

}
  fc:	df 91       	pop	r29
  fe:	cf 91       	pop	r28
 100:	08 95       	ret

00000102 <platform_main_end>:

static void platform_main_end(uint32_t crc, int flag);
static void platform_main_end(uint32_t crc, int flag)
{
 102:	cf 93       	push	r28
 104:	df 93       	push	r29
 106:	cd b7       	in	r28, 0x3d	; 61
 108:	de b7       	in	r29, 0x3e	; 62
 10a:	69 97       	sbiw	r28, 0x19	; 25
 10c:	0f b6       	in	r0, 0x3f	; 63
 10e:	f8 94       	cli
 110:	de bf       	out	0x3e, r29	; 62
 112:	0f be       	out	0x3f, r0	; 63
 114:	cd bf       	out	0x3d, r28	; 61
 116:	6c 8b       	std	Y+20, r22	; 0x14
 118:	7d 8b       	std	Y+21, r23	; 0x15
 11a:	8e 8b       	std	Y+22, r24	; 0x16
 11c:	9f 8b       	std	Y+23, r25	; 0x17
 11e:	59 8f       	std	Y+25, r21	; 0x19
 120:	48 8f       	std	Y+24, r20	; 0x18
	uint16_t crc16 = crc ^ (crc >> 16);
 122:	8c 89       	ldd	r24, Y+20	; 0x14
 124:	9d 89       	ldd	r25, Y+21	; 0x15
 126:	ae 89       	ldd	r26, Y+22	; 0x16
 128:	bf 89       	ldd	r27, Y+23	; 0x17
 12a:	cd 01       	movw	r24, r26
 12c:	aa 27       	eor	r26, r26
 12e:	bb 27       	eor	r27, r27
 130:	9c 01       	movw	r18, r24
 132:	8c 89       	ldd	r24, Y+20	; 0x14
 134:	9d 89       	ldd	r25, Y+21	; 0x15
 136:	82 27       	eor	r24, r18
 138:	93 27       	eor	r25, r19
 13a:	9a 83       	std	Y+2, r25	; 0x02
 13c:	89 83       	std	Y+1, r24	; 0x01
	 char str[17];
	 itoa(crc16, str, 16);
 13e:	89 81       	ldd	r24, Y+1	; 0x01
 140:	9a 81       	ldd	r25, Y+2	; 0x02
 142:	9e 01       	movw	r18, r28
 144:	2d 5f       	subi	r18, 0xFD	; 253
 146:	3f 4f       	sbci	r19, 0xFF	; 255
 148:	40 e1       	ldi	r20, 0x10	; 16
 14a:	50 e0       	ldi	r21, 0x00	; 0
 14c:	b9 01       	movw	r22, r18
 14e:	0e 94 df 04 	call	0x9be	; 0x9be <itoa>
	 debug_puts("checksum = ");
 152:	82 e1       	ldi	r24, 0x12	; 18
 154:	91 e0       	ldi	r25, 0x01	; 1
 156:	0e 94 53 00 	call	0xa6	; 0xa6 <debug_puts>

	 debug_puts(str);
 15a:	ce 01       	movw	r24, r28
 15c:	03 96       	adiw	r24, 0x03	; 3
 15e:	0e 94 53 00 	call	0xa6	; 0xa6 <debug_puts>
	 debug_puts("\n");
 162:	8e e1       	ldi	r24, 0x1E	; 30
 164:	91 e0       	ldi	r25, 0x01	; 1
 166:	0e 94 53 00 	call	0xa6	; 0xa6 <debug_puts>
}
 16a:	69 96       	adiw	r28, 0x19	; 25
 16c:	0f b6       	in	r0, 0x3f	; 63
 16e:	f8 94       	cli
 170:	de bf       	out	0x3e, r29	; 62
 172:	0f be       	out	0x3f, r0	; 63
 174:	cd bf       	out	0x3d, r28	; 61
 176:	df 91       	pop	r29
 178:	cf 91       	pop	r28
 17a:	08 95       	ret

0000017c <crc32_gentab>:
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;

static void 
crc32_gentab (void)
{
 17c:	cf 93       	push	r28
 17e:	df 93       	push	r29
 180:	cd b7       	in	r28, 0x3d	; 61
 182:	de b7       	in	r29, 0x3e	; 62
 184:	2c 97       	sbiw	r28, 0x0c	; 12
 186:	0f b6       	in	r0, 0x3f	; 63
 188:	f8 94       	cli
 18a:	de bf       	out	0x3e, r29	; 62
 18c:	0f be       	out	0x3f, r0	; 63
 18e:	cd bf       	out	0x3d, r28	; 61
	uint32_t crc;
	const uint32_t poly = 0xEDB88320UL;
 190:	80 e2       	ldi	r24, 0x20	; 32
 192:	93 e8       	ldi	r25, 0x83	; 131
 194:	a8 eb       	ldi	r26, 0xB8	; 184
 196:	bd ee       	ldi	r27, 0xED	; 237
 198:	89 87       	std	Y+9, r24	; 0x09
 19a:	9a 87       	std	Y+10, r25	; 0x0a
 19c:	ab 87       	std	Y+11, r26	; 0x0b
 19e:	bc 87       	std	Y+12, r27	; 0x0c
	int i, j;
	
	for (i = 0; i < 256; i++) {
 1a0:	1e 82       	std	Y+6, r1	; 0x06
 1a2:	1d 82       	std	Y+5, r1	; 0x05
 1a4:	5f c0       	rjmp	.+190    	; 0x264 <crc32_gentab+0xe8>
		crc = i;
 1a6:	8d 81       	ldd	r24, Y+5	; 0x05
 1a8:	9e 81       	ldd	r25, Y+6	; 0x06
 1aa:	aa 27       	eor	r26, r26
 1ac:	97 fd       	sbrc	r25, 7
 1ae:	a0 95       	com	r26
 1b0:	ba 2f       	mov	r27, r26
 1b2:	89 83       	std	Y+1, r24	; 0x01
 1b4:	9a 83       	std	Y+2, r25	; 0x02
 1b6:	ab 83       	std	Y+3, r26	; 0x03
 1b8:	bc 83       	std	Y+4, r27	; 0x04
		for (j = 8; j > 0; j--) {
 1ba:	88 e0       	ldi	r24, 0x08	; 8
 1bc:	90 e0       	ldi	r25, 0x00	; 0
 1be:	98 87       	std	Y+8, r25	; 0x08
 1c0:	8f 83       	std	Y+7, r24	; 0x07
 1c2:	34 c0       	rjmp	.+104    	; 0x22c <crc32_gentab+0xb0>
			if (crc & 1) {
 1c4:	89 81       	ldd	r24, Y+1	; 0x01
 1c6:	9a 81       	ldd	r25, Y+2	; 0x02
 1c8:	ab 81       	ldd	r26, Y+3	; 0x03
 1ca:	bc 81       	ldd	r27, Y+4	; 0x04
 1cc:	81 70       	andi	r24, 0x01	; 1
 1ce:	99 27       	eor	r25, r25
 1d0:	aa 27       	eor	r26, r26
 1d2:	bb 27       	eor	r27, r27
 1d4:	00 97       	sbiw	r24, 0x00	; 0
 1d6:	a1 05       	cpc	r26, r1
 1d8:	b1 05       	cpc	r27, r1
 1da:	b9 f0       	breq	.+46     	; 0x20a <crc32_gentab+0x8e>
				crc = (crc >> 1) ^ poly;
 1dc:	89 81       	ldd	r24, Y+1	; 0x01
 1de:	9a 81       	ldd	r25, Y+2	; 0x02
 1e0:	ab 81       	ldd	r26, Y+3	; 0x03
 1e2:	bc 81       	ldd	r27, Y+4	; 0x04
 1e4:	9c 01       	movw	r18, r24
 1e6:	ad 01       	movw	r20, r26
 1e8:	56 95       	lsr	r21
 1ea:	47 95       	ror	r20
 1ec:	37 95       	ror	r19
 1ee:	27 95       	ror	r18
 1f0:	89 85       	ldd	r24, Y+9	; 0x09
 1f2:	9a 85       	ldd	r25, Y+10	; 0x0a
 1f4:	ab 85       	ldd	r26, Y+11	; 0x0b
 1f6:	bc 85       	ldd	r27, Y+12	; 0x0c
 1f8:	82 27       	eor	r24, r18
 1fa:	93 27       	eor	r25, r19
 1fc:	a4 27       	eor	r26, r20
 1fe:	b5 27       	eor	r27, r21
 200:	89 83       	std	Y+1, r24	; 0x01
 202:	9a 83       	std	Y+2, r25	; 0x02
 204:	ab 83       	std	Y+3, r26	; 0x03
 206:	bc 83       	std	Y+4, r27	; 0x04
 208:	0c c0       	rjmp	.+24     	; 0x222 <crc32_gentab+0xa6>
			} else {
				crc >>= 1;
 20a:	89 81       	ldd	r24, Y+1	; 0x01
 20c:	9a 81       	ldd	r25, Y+2	; 0x02
 20e:	ab 81       	ldd	r26, Y+3	; 0x03
 210:	bc 81       	ldd	r27, Y+4	; 0x04
 212:	b6 95       	lsr	r27
 214:	a7 95       	ror	r26
 216:	97 95       	ror	r25
 218:	87 95       	ror	r24
 21a:	89 83       	std	Y+1, r24	; 0x01
 21c:	9a 83       	std	Y+2, r25	; 0x02
 21e:	ab 83       	std	Y+3, r26	; 0x03
 220:	bc 83       	std	Y+4, r27	; 0x04
	const uint32_t poly = 0xEDB88320UL;
	int i, j;
	
	for (i = 0; i < 256; i++) {
		crc = i;
		for (j = 8; j > 0; j--) {
 222:	8f 81       	ldd	r24, Y+7	; 0x07
 224:	98 85       	ldd	r25, Y+8	; 0x08
 226:	01 97       	sbiw	r24, 0x01	; 1
 228:	98 87       	std	Y+8, r25	; 0x08
 22a:	8f 83       	std	Y+7, r24	; 0x07
 22c:	8f 81       	ldd	r24, Y+7	; 0x07
 22e:	98 85       	ldd	r25, Y+8	; 0x08
 230:	18 16       	cp	r1, r24
 232:	19 06       	cpc	r1, r25
 234:	3c f2       	brlt	.-114    	; 0x1c4 <crc32_gentab+0x48>
				crc = (crc >> 1) ^ poly;
			} else {
				crc >>= 1;
			}
		}
		crc32_tab[i] = crc;
 236:	8d 81       	ldd	r24, Y+5	; 0x05
 238:	9e 81       	ldd	r25, Y+6	; 0x06
 23a:	88 0f       	add	r24, r24
 23c:	99 1f       	adc	r25, r25
 23e:	88 0f       	add	r24, r24
 240:	99 1f       	adc	r25, r25
 242:	9c 01       	movw	r18, r24
 244:	20 51       	subi	r18, 0x10	; 16
 246:	3e 4f       	sbci	r19, 0xFE	; 254
 248:	89 81       	ldd	r24, Y+1	; 0x01
 24a:	9a 81       	ldd	r25, Y+2	; 0x02
 24c:	ab 81       	ldd	r26, Y+3	; 0x03
 24e:	bc 81       	ldd	r27, Y+4	; 0x04
 250:	f9 01       	movw	r30, r18
 252:	80 83       	st	Z, r24
 254:	91 83       	std	Z+1, r25	; 0x01
 256:	a2 83       	std	Z+2, r26	; 0x02
 258:	b3 83       	std	Z+3, r27	; 0x03
{
	uint32_t crc;
	const uint32_t poly = 0xEDB88320UL;
	int i, j;
	
	for (i = 0; i < 256; i++) {
 25a:	8d 81       	ldd	r24, Y+5	; 0x05
 25c:	9e 81       	ldd	r25, Y+6	; 0x06
 25e:	01 96       	adiw	r24, 0x01	; 1
 260:	9e 83       	std	Y+6, r25	; 0x06
 262:	8d 83       	std	Y+5, r24	; 0x05
 264:	8d 81       	ldd	r24, Y+5	; 0x05
 266:	9e 81       	ldd	r25, Y+6	; 0x06
 268:	8f 3f       	cpi	r24, 0xFF	; 255
 26a:	91 05       	cpc	r25, r1
 26c:	09 f0       	breq	.+2      	; 0x270 <crc32_gentab+0xf4>
 26e:	0c f4       	brge	.+2      	; 0x272 <crc32_gentab+0xf6>
 270:	9a cf       	rjmp	.-204    	; 0x1a6 <crc32_gentab+0x2a>
				crc >>= 1;
			}
		}
		crc32_tab[i] = crc;
	}
}
 272:	2c 96       	adiw	r28, 0x0c	; 12
 274:	0f b6       	in	r0, 0x3f	; 63
 276:	f8 94       	cli
 278:	de bf       	out	0x3e, r29	; 62
 27a:	0f be       	out	0x3f, r0	; 63
 27c:	cd bf       	out	0x3d, r28	; 61
 27e:	df 91       	pop	r29
 280:	cf 91       	pop	r28
 282:	08 95       	ret

00000284 <crc32_byte>:

static void 
crc32_byte (uint8_t b) {
 284:	ef 92       	push	r14
 286:	ff 92       	push	r15
 288:	0f 93       	push	r16
 28a:	1f 93       	push	r17
 28c:	cf 93       	push	r28
 28e:	df 93       	push	r29
 290:	1f 92       	push	r1
 292:	cd b7       	in	r28, 0x3d	; 61
 294:	de b7       	in	r29, 0x3e	; 62
 296:	89 83       	std	Y+1, r24	; 0x01
	crc32_context = 
		((crc32_context >> 8) & 0x00FFFFFF) ^ 
 298:	80 91 00 01 	lds	r24, 0x0100
 29c:	90 91 01 01 	lds	r25, 0x0101
 2a0:	a0 91 02 01 	lds	r26, 0x0102
 2a4:	b0 91 03 01 	lds	r27, 0x0103
 2a8:	29 2f       	mov	r18, r25
 2aa:	3a 2f       	mov	r19, r26
 2ac:	4b 2f       	mov	r20, r27
 2ae:	55 27       	eor	r21, r21
		crc32_tab[(crc32_context ^ b) & 0xFF];
 2b0:	89 81       	ldd	r24, Y+1	; 0x01
 2b2:	e8 2e       	mov	r14, r24
 2b4:	f1 2c       	mov	r15, r1
 2b6:	00 e0       	ldi	r16, 0x00	; 0
 2b8:	10 e0       	ldi	r17, 0x00	; 0
 2ba:	80 91 00 01 	lds	r24, 0x0100
 2be:	90 91 01 01 	lds	r25, 0x0101
 2c2:	a0 91 02 01 	lds	r26, 0x0102
 2c6:	b0 91 03 01 	lds	r27, 0x0103
 2ca:	8e 25       	eor	r24, r14
 2cc:	9f 25       	eor	r25, r15
 2ce:	a0 27       	eor	r26, r16
 2d0:	b1 27       	eor	r27, r17
 2d2:	99 27       	eor	r25, r25
 2d4:	aa 27       	eor	r26, r26
 2d6:	bb 27       	eor	r27, r27
 2d8:	88 0f       	add	r24, r24
 2da:	99 1f       	adc	r25, r25
 2dc:	88 0f       	add	r24, r24
 2de:	99 1f       	adc	r25, r25
 2e0:	80 51       	subi	r24, 0x10	; 16
 2e2:	9e 4f       	sbci	r25, 0xFE	; 254
 2e4:	fc 01       	movw	r30, r24
 2e6:	80 81       	ld	r24, Z
 2e8:	91 81       	ldd	r25, Z+1	; 0x01
 2ea:	a2 81       	ldd	r26, Z+2	; 0x02
 2ec:	b3 81       	ldd	r27, Z+3	; 0x03
}

static void 
crc32_byte (uint8_t b) {
	crc32_context = 
		((crc32_context >> 8) & 0x00FFFFFF) ^ 
 2ee:	82 27       	eor	r24, r18
 2f0:	93 27       	eor	r25, r19
 2f2:	a4 27       	eor	r26, r20
 2f4:	b5 27       	eor	r27, r21
	}
}

static void 
crc32_byte (uint8_t b) {
	crc32_context = 
 2f6:	80 93 00 01 	sts	0x0100, r24
 2fa:	90 93 01 01 	sts	0x0101, r25
 2fe:	a0 93 02 01 	sts	0x0102, r26
 302:	b0 93 03 01 	sts	0x0103, r27
		((crc32_context >> 8) & 0x00FFFFFF) ^ 
		crc32_tab[(crc32_context ^ b) & 0xFF];
}
 306:	0f 90       	pop	r0
 308:	df 91       	pop	r29
 30a:	cf 91       	pop	r28
 30c:	1f 91       	pop	r17
 30e:	0f 91       	pop	r16
 310:	ff 90       	pop	r15
 312:	ef 90       	pop	r14
 314:	08 95       	ret

00000316 <crc32_8bytes>:
	}
}
#else
static void 
crc32_8bytes (uint64_t val)
{
 316:	af 92       	push	r10
 318:	bf 92       	push	r11
 31a:	cf 92       	push	r12
 31c:	df 92       	push	r13
 31e:	ef 92       	push	r14
 320:	ff 92       	push	r15
 322:	0f 93       	push	r16
 324:	1f 93       	push	r17
 326:	cf 93       	push	r28
 328:	df 93       	push	r29
 32a:	cd b7       	in	r28, 0x3d	; 61
 32c:	de b7       	in	r29, 0x3e	; 62
 32e:	28 97       	sbiw	r28, 0x08	; 8
 330:	0f b6       	in	r0, 0x3f	; 63
 332:	f8 94       	cli
 334:	de bf       	out	0x3e, r29	; 62
 336:	0f be       	out	0x3f, r0	; 63
 338:	cd bf       	out	0x3d, r28	; 61
 33a:	29 83       	std	Y+1, r18	; 0x01
 33c:	3a 83       	std	Y+2, r19	; 0x02
 33e:	4b 83       	std	Y+3, r20	; 0x03
 340:	5c 83       	std	Y+4, r21	; 0x04
 342:	6d 83       	std	Y+5, r22	; 0x05
 344:	7e 83       	std	Y+6, r23	; 0x06
 346:	8f 83       	std	Y+7, r24	; 0x07
 348:	98 87       	std	Y+8, r25	; 0x08
	crc32_byte ((val>>0) & 0xff);
 34a:	89 81       	ldd	r24, Y+1	; 0x01
 34c:	0e 94 42 01 	call	0x284	; 0x284 <crc32_byte>
	crc32_byte ((val>>8) & 0xff);
 350:	29 81       	ldd	r18, Y+1	; 0x01
 352:	3a 81       	ldd	r19, Y+2	; 0x02
 354:	4b 81       	ldd	r20, Y+3	; 0x03
 356:	5c 81       	ldd	r21, Y+4	; 0x04
 358:	6d 81       	ldd	r22, Y+5	; 0x05
 35a:	7e 81       	ldd	r23, Y+6	; 0x06
 35c:	8f 81       	ldd	r24, Y+7	; 0x07
 35e:	98 85       	ldd	r25, Y+8	; 0x08
 360:	08 e0       	ldi	r16, 0x08	; 8
 362:	0e 94 ba 04 	call	0x974	; 0x974 <__lshrdi3>
 366:	a2 2e       	mov	r10, r18
 368:	b3 2e       	mov	r11, r19
 36a:	c4 2e       	mov	r12, r20
 36c:	d5 2e       	mov	r13, r21
 36e:	e6 2e       	mov	r14, r22
 370:	f7 2e       	mov	r15, r23
 372:	08 2f       	mov	r16, r24
 374:	19 2f       	mov	r17, r25
 376:	8a 2d       	mov	r24, r10
 378:	0e 94 42 01 	call	0x284	; 0x284 <crc32_byte>
	crc32_byte ((val>>16) & 0xff);
 37c:	29 81       	ldd	r18, Y+1	; 0x01
 37e:	3a 81       	ldd	r19, Y+2	; 0x02
 380:	4b 81       	ldd	r20, Y+3	; 0x03
 382:	5c 81       	ldd	r21, Y+4	; 0x04
 384:	6d 81       	ldd	r22, Y+5	; 0x05
 386:	7e 81       	ldd	r23, Y+6	; 0x06
 388:	8f 81       	ldd	r24, Y+7	; 0x07
 38a:	98 85       	ldd	r25, Y+8	; 0x08
 38c:	00 e1       	ldi	r16, 0x10	; 16
 38e:	0e 94 ba 04 	call	0x974	; 0x974 <__lshrdi3>
 392:	a2 2e       	mov	r10, r18
 394:	b3 2e       	mov	r11, r19
 396:	c4 2e       	mov	r12, r20
 398:	d5 2e       	mov	r13, r21
 39a:	e6 2e       	mov	r14, r22
 39c:	f7 2e       	mov	r15, r23
 39e:	08 2f       	mov	r16, r24
 3a0:	19 2f       	mov	r17, r25
 3a2:	8a 2d       	mov	r24, r10
 3a4:	0e 94 42 01 	call	0x284	; 0x284 <crc32_byte>
	crc32_byte ((val>>24) & 0xff);
 3a8:	29 81       	ldd	r18, Y+1	; 0x01
 3aa:	3a 81       	ldd	r19, Y+2	; 0x02
 3ac:	4b 81       	ldd	r20, Y+3	; 0x03
 3ae:	5c 81       	ldd	r21, Y+4	; 0x04
 3b0:	6d 81       	ldd	r22, Y+5	; 0x05
 3b2:	7e 81       	ldd	r23, Y+6	; 0x06
 3b4:	8f 81       	ldd	r24, Y+7	; 0x07
 3b6:	98 85       	ldd	r25, Y+8	; 0x08
 3b8:	08 e1       	ldi	r16, 0x18	; 24
 3ba:	0e 94 ba 04 	call	0x974	; 0x974 <__lshrdi3>
 3be:	a2 2e       	mov	r10, r18
 3c0:	b3 2e       	mov	r11, r19
 3c2:	c4 2e       	mov	r12, r20
 3c4:	d5 2e       	mov	r13, r21
 3c6:	e6 2e       	mov	r14, r22
 3c8:	f7 2e       	mov	r15, r23
 3ca:	08 2f       	mov	r16, r24
 3cc:	19 2f       	mov	r17, r25
 3ce:	8a 2d       	mov	r24, r10
 3d0:	0e 94 42 01 	call	0x284	; 0x284 <crc32_byte>
	crc32_byte ((val>>32) & 0xff);
 3d4:	29 81       	ldd	r18, Y+1	; 0x01
 3d6:	3a 81       	ldd	r19, Y+2	; 0x02
 3d8:	4b 81       	ldd	r20, Y+3	; 0x03
 3da:	5c 81       	ldd	r21, Y+4	; 0x04
 3dc:	6d 81       	ldd	r22, Y+5	; 0x05
 3de:	7e 81       	ldd	r23, Y+6	; 0x06
 3e0:	8f 81       	ldd	r24, Y+7	; 0x07
 3e2:	98 85       	ldd	r25, Y+8	; 0x08
 3e4:	00 e2       	ldi	r16, 0x20	; 32
 3e6:	0e 94 ba 04 	call	0x974	; 0x974 <__lshrdi3>
 3ea:	a2 2e       	mov	r10, r18
 3ec:	b3 2e       	mov	r11, r19
 3ee:	c4 2e       	mov	r12, r20
 3f0:	d5 2e       	mov	r13, r21
 3f2:	e6 2e       	mov	r14, r22
 3f4:	f7 2e       	mov	r15, r23
 3f6:	08 2f       	mov	r16, r24
 3f8:	19 2f       	mov	r17, r25
 3fa:	8a 2d       	mov	r24, r10
 3fc:	0e 94 42 01 	call	0x284	; 0x284 <crc32_byte>
	crc32_byte ((val>>40) & 0xff);
 400:	29 81       	ldd	r18, Y+1	; 0x01
 402:	3a 81       	ldd	r19, Y+2	; 0x02
 404:	4b 81       	ldd	r20, Y+3	; 0x03
 406:	5c 81       	ldd	r21, Y+4	; 0x04
 408:	6d 81       	ldd	r22, Y+5	; 0x05
 40a:	7e 81       	ldd	r23, Y+6	; 0x06
 40c:	8f 81       	ldd	r24, Y+7	; 0x07
 40e:	98 85       	ldd	r25, Y+8	; 0x08
 410:	08 e2       	ldi	r16, 0x28	; 40
 412:	0e 94 ba 04 	call	0x974	; 0x974 <__lshrdi3>
 416:	a2 2e       	mov	r10, r18
 418:	b3 2e       	mov	r11, r19
 41a:	c4 2e       	mov	r12, r20
 41c:	d5 2e       	mov	r13, r21
 41e:	e6 2e       	mov	r14, r22
 420:	f7 2e       	mov	r15, r23
 422:	08 2f       	mov	r16, r24
 424:	19 2f       	mov	r17, r25
 426:	8a 2d       	mov	r24, r10
 428:	0e 94 42 01 	call	0x284	; 0x284 <crc32_byte>
	crc32_byte ((val>>48) & 0xff);
 42c:	29 81       	ldd	r18, Y+1	; 0x01
 42e:	3a 81       	ldd	r19, Y+2	; 0x02
 430:	4b 81       	ldd	r20, Y+3	; 0x03
 432:	5c 81       	ldd	r21, Y+4	; 0x04
 434:	6d 81       	ldd	r22, Y+5	; 0x05
 436:	7e 81       	ldd	r23, Y+6	; 0x06
 438:	8f 81       	ldd	r24, Y+7	; 0x07
 43a:	98 85       	ldd	r25, Y+8	; 0x08
 43c:	00 e3       	ldi	r16, 0x30	; 48
 43e:	0e 94 ba 04 	call	0x974	; 0x974 <__lshrdi3>
 442:	a2 2e       	mov	r10, r18
 444:	b3 2e       	mov	r11, r19
 446:	c4 2e       	mov	r12, r20
 448:	d5 2e       	mov	r13, r21
 44a:	e6 2e       	mov	r14, r22
 44c:	f7 2e       	mov	r15, r23
 44e:	08 2f       	mov	r16, r24
 450:	19 2f       	mov	r17, r25
 452:	8a 2d       	mov	r24, r10
 454:	0e 94 42 01 	call	0x284	; 0x284 <crc32_byte>
	crc32_byte ((val>>56) & 0xff);
 458:	29 81       	ldd	r18, Y+1	; 0x01
 45a:	3a 81       	ldd	r19, Y+2	; 0x02
 45c:	4b 81       	ldd	r20, Y+3	; 0x03
 45e:	5c 81       	ldd	r21, Y+4	; 0x04
 460:	6d 81       	ldd	r22, Y+5	; 0x05
 462:	7e 81       	ldd	r23, Y+6	; 0x06
 464:	8f 81       	ldd	r24, Y+7	; 0x07
 466:	98 85       	ldd	r25, Y+8	; 0x08
 468:	08 e3       	ldi	r16, 0x38	; 56
 46a:	0e 94 ba 04 	call	0x974	; 0x974 <__lshrdi3>
 46e:	a2 2e       	mov	r10, r18
 470:	b3 2e       	mov	r11, r19
 472:	c4 2e       	mov	r12, r20
 474:	d5 2e       	mov	r13, r21
 476:	e6 2e       	mov	r14, r22
 478:	f7 2e       	mov	r15, r23
 47a:	08 2f       	mov	r16, r24
 47c:	19 2f       	mov	r17, r25
 47e:	8a 2d       	mov	r24, r10
 480:	0e 94 42 01 	call	0x284	; 0x284 <crc32_byte>
}
 484:	28 96       	adiw	r28, 0x08	; 8
 486:	0f b6       	in	r0, 0x3f	; 63
 488:	f8 94       	cli
 48a:	de bf       	out	0x3e, r29	; 62
 48c:	0f be       	out	0x3f, r0	; 63
 48e:	cd bf       	out	0x3d, r28	; 61
 490:	df 91       	pop	r29
 492:	cf 91       	pop	r28
 494:	1f 91       	pop	r17
 496:	0f 91       	pop	r16
 498:	ff 90       	pop	r15
 49a:	ef 90       	pop	r14
 49c:	df 90       	pop	r13
 49e:	cf 90       	pop	r12
 4a0:	bf 90       	pop	r11
 4a2:	af 90       	pop	r10
 4a4:	08 95       	ret

000004a6 <transparent_crc>:

static void 
transparent_crc (uint64_t val, char* vname, int flag)
{
 4a6:	af 92       	push	r10
 4a8:	bf 92       	push	r11
 4aa:	cf 92       	push	r12
 4ac:	df 92       	push	r13
 4ae:	ef 92       	push	r14
 4b0:	ff 92       	push	r15
 4b2:	0f 93       	push	r16
 4b4:	1f 93       	push	r17
 4b6:	cf 93       	push	r28
 4b8:	df 93       	push	r29
 4ba:	cd b7       	in	r28, 0x3d	; 61
 4bc:	de b7       	in	r29, 0x3e	; 62
 4be:	2c 97       	sbiw	r28, 0x0c	; 12
 4c0:	0f b6       	in	r0, 0x3f	; 63
 4c2:	f8 94       	cli
 4c4:	de bf       	out	0x3e, r29	; 62
 4c6:	0f be       	out	0x3f, r0	; 63
 4c8:	cd bf       	out	0x3d, r28	; 61
 4ca:	29 83       	std	Y+1, r18	; 0x01
 4cc:	3a 83       	std	Y+2, r19	; 0x02
 4ce:	4b 83       	std	Y+3, r20	; 0x03
 4d0:	5c 83       	std	Y+4, r21	; 0x04
 4d2:	6d 83       	std	Y+5, r22	; 0x05
 4d4:	7e 83       	std	Y+6, r23	; 0x06
 4d6:	8f 83       	std	Y+7, r24	; 0x07
 4d8:	98 87       	std	Y+8, r25	; 0x08
 4da:	1a 87       	std	Y+10, r17	; 0x0a
 4dc:	09 87       	std	Y+9, r16	; 0x09
 4de:	fc 86       	std	Y+12, r15	; 0x0c
 4e0:	eb 86       	std	Y+11, r14	; 0x0b
	crc32_8bytes(val);
 4e2:	a9 80       	ldd	r10, Y+1	; 0x01
 4e4:	ba 80       	ldd	r11, Y+2	; 0x02
 4e6:	cb 80       	ldd	r12, Y+3	; 0x03
 4e8:	dc 80       	ldd	r13, Y+4	; 0x04
 4ea:	ed 80       	ldd	r14, Y+5	; 0x05
 4ec:	fe 80       	ldd	r15, Y+6	; 0x06
 4ee:	0f 81       	ldd	r16, Y+7	; 0x07
 4f0:	18 85       	ldd	r17, Y+8	; 0x08
 4f2:	2a 2d       	mov	r18, r10
 4f4:	3b 2d       	mov	r19, r11
 4f6:	4c 2d       	mov	r20, r12
 4f8:	5d 2d       	mov	r21, r13
 4fa:	6e 2d       	mov	r22, r14
 4fc:	7f 2d       	mov	r23, r15
 4fe:	80 2f       	mov	r24, r16
 500:	91 2f       	mov	r25, r17
 502:	0e 94 8b 01 	call	0x316	; 0x316 <crc32_8bytes>
	if (flag) {
  		printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
	}
}
 506:	2c 96       	adiw	r28, 0x0c	; 12
 508:	0f b6       	in	r0, 0x3f	; 63
 50a:	f8 94       	cli
 50c:	de bf       	out	0x3e, r29	; 62
 50e:	0f be       	out	0x3f, r0	; 63
 510:	cd bf       	out	0x3d, r28	; 61
 512:	df 91       	pop	r29
 514:	cf 91       	pop	r28
 516:	1f 91       	pop	r17
 518:	0f 91       	pop	r16
 51a:	ff 90       	pop	r15
 51c:	ef 90       	pop	r14
 51e:	df 90       	pop	r13
 520:	cf 90       	pop	r12
 522:	bf 90       	pop	r11
 524:	af 90       	pop	r10
 526:	08 95       	ret

00000528 <transparent_crc_bytes>:

#endif

static void 
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
 528:	cf 93       	push	r28
 52a:	df 93       	push	r29
 52c:	cd b7       	in	r28, 0x3d	; 61
 52e:	de b7       	in	r29, 0x3e	; 62
 530:	2a 97       	sbiw	r28, 0x0a	; 10
 532:	0f b6       	in	r0, 0x3f	; 63
 534:	f8 94       	cli
 536:	de bf       	out	0x3e, r29	; 62
 538:	0f be       	out	0x3f, r0	; 63
 53a:	cd bf       	out	0x3d, r28	; 61
 53c:	9c 83       	std	Y+4, r25	; 0x04
 53e:	8b 83       	std	Y+3, r24	; 0x03
 540:	7e 83       	std	Y+6, r23	; 0x06
 542:	6d 83       	std	Y+5, r22	; 0x05
 544:	58 87       	std	Y+8, r21	; 0x08
 546:	4f 83       	std	Y+7, r20	; 0x07
 548:	3a 87       	std	Y+10, r19	; 0x0a
 54a:	29 87       	std	Y+9, r18	; 0x09
    int i;
    for (i=0; i<nbytes; i++) {
 54c:	1a 82       	std	Y+2, r1	; 0x02
 54e:	19 82       	std	Y+1, r1	; 0x01
 550:	0f c0       	rjmp	.+30     	; 0x570 <transparent_crc_bytes+0x48>
        crc32_byte(ptr[i]);
 552:	89 81       	ldd	r24, Y+1	; 0x01
 554:	9a 81       	ldd	r25, Y+2	; 0x02
 556:	2b 81       	ldd	r18, Y+3	; 0x03
 558:	3c 81       	ldd	r19, Y+4	; 0x04
 55a:	82 0f       	add	r24, r18
 55c:	93 1f       	adc	r25, r19
 55e:	fc 01       	movw	r30, r24
 560:	80 81       	ld	r24, Z
 562:	0e 94 42 01 	call	0x284	; 0x284 <crc32_byte>

static void 
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
 566:	89 81       	ldd	r24, Y+1	; 0x01
 568:	9a 81       	ldd	r25, Y+2	; 0x02
 56a:	01 96       	adiw	r24, 0x01	; 1
 56c:	9a 83       	std	Y+2, r25	; 0x02
 56e:	89 83       	std	Y+1, r24	; 0x01
 570:	29 81       	ldd	r18, Y+1	; 0x01
 572:	3a 81       	ldd	r19, Y+2	; 0x02
 574:	8d 81       	ldd	r24, Y+5	; 0x05
 576:	9e 81       	ldd	r25, Y+6	; 0x06
 578:	28 17       	cp	r18, r24
 57a:	39 07       	cpc	r19, r25
 57c:	54 f3       	brlt	.-44     	; 0x552 <transparent_crc_bytes+0x2a>
        crc32_byte(ptr[i]);
    }
	if (flag) {
  		printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
	}
}
 57e:	2a 96       	adiw	r28, 0x0a	; 10
 580:	0f b6       	in	r0, 0x3f	; 63
 582:	f8 94       	cli
 584:	de bf       	out	0x3e, r29	; 62
 586:	0f be       	out	0x3f, r0	; 63
 588:	cd bf       	out	0x3d, r28	; 61
 58a:	df 91       	pop	r29
 58c:	cf 91       	pop	r28
 58e:	08 95       	ret

00000590 <func_1>:
 * writes: g_4 g_12 g_8
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_2[2];
    int32_t *l_29 = &g_8;
 590:	cf 93       	push	r28
 592:	df 93       	push	r29
 594:	cd b7       	in	r28, 0x3d	; 61
 596:	de b7       	in	r29, 0x3e	; 62
 598:	c0 5c       	subi	r28, 0xC0	; 192
 59a:	d1 09       	sbc	r29, r1
 59c:	0f b6       	in	r0, 0x3f	; 63
 59e:	f8 94       	cli
 5a0:	de bf       	out	0x3e, r29	; 62
 5a2:	0f be       	out	0x3f, r0	; 63
 5a4:	cd bf       	out	0x3d, r28	; 61
    int i;
    for (i = 0; i < 2; i++)
 5a6:	83 ec       	ldi	r24, 0xC3	; 195
 5a8:	92 ef       	ldi	r25, 0xF2	; 242
 5aa:	ae e5       	ldi	r26, 0x5E	; 94
 5ac:	b2 e9       	ldi	r27, 0x92	; 146
 5ae:	8b 83       	std	Y+3, r24	; 0x03
 5b0:	9c 83       	std	Y+4, r25	; 0x04
 5b2:	ad 83       	std	Y+5, r26	; 0x05
 5b4:	be 83       	std	Y+6, r27	; 0x06
        l_2[i] = 9UL;
 5b6:	88 ea       	ldi	r24, 0xA8	; 168
 5b8:	e0 e2       	ldi	r30, 0x20	; 32
 5ba:	f1 e0       	ldi	r31, 0x01	; 1
 5bc:	de 01       	movw	r26, r28
 5be:	59 96       	adiw	r26, 0x19	; 25
 5c0:	01 90       	ld	r0, Z+
 5c2:	0d 92       	st	X+, r0
 5c4:	8a 95       	dec	r24
 5c6:	e1 f7       	brne	.-8      	; 0x5c0 <func_1+0x30>
    for (g_4[5][0] = 1; (g_4[5][0] >= 0); g_4[5][0] -= 1)
 5c8:	87 e0       	ldi	r24, 0x07	; 7
 5ca:	91 e0       	ldi	r25, 0x01	; 1
 5cc:	98 87       	std	Y+8, r25	; 0x08
 5ce:	8f 83       	std	Y+7, r24	; 0x07
    { /* block id: 3 */
 5d0:	89 e0       	ldi	r24, 0x09	; 9
 5d2:	91 e0       	ldi	r25, 0x01	; 1
 5d4:	9a 87       	std	Y+10, r25	; 0x0a
 5d6:	89 87       	std	Y+9, r24	; 0x09
        int32_t *l_5 = (void*)0;
 5d8:	8a e0       	ldi	r24, 0x0A	; 10
 5da:	91 e0       	ldi	r25, 0x01	; 1
 5dc:	9c 87       	std	Y+12, r25	; 0x0c
 5de:	8b 87       	std	Y+11, r24	; 0x0b
        int32_t *l_6 = (void*)0;
        int32_t *l_7 = &g_8;
 5e0:	1a 82       	std	Y+2, r1	; 0x02
 5e2:	19 82       	std	Y+1, r1	; 0x01
 5e4:	15 c0       	rjmp	.+42     	; 0x610 <func_1+0x80>
        int32_t *l_9 = &g_8;
 5e6:	89 81       	ldd	r24, Y+1	; 0x01
 5e8:	9a 81       	ldd	r25, Y+2	; 0x02
 5ea:	88 0f       	add	r24, r24
 5ec:	99 1f       	adc	r25, r25
 5ee:	9e 01       	movw	r18, r28
 5f0:	2f 5f       	subi	r18, 0xFF	; 255
 5f2:	3f 4f       	sbci	r19, 0xFF	; 255
 5f4:	82 0f       	add	r24, r18
 5f6:	93 1f       	adc	r25, r19
 5f8:	0c 96       	adiw	r24, 0x0c	; 12
 5fa:	26 e0       	ldi	r18, 0x06	; 6
 5fc:	31 e0       	ldi	r19, 0x01	; 1
 5fe:	dc 01       	movw	r26, r24
 600:	11 96       	adiw	r26, 0x01	; 1
 602:	3c 93       	st	X, r19
 604:	2e 93       	st	-X, r18
        l_2[i] = 9UL;
    for (g_4[5][0] = 1; (g_4[5][0] >= 0); g_4[5][0] -= 1)
    { /* block id: 3 */
        int32_t *l_5 = (void*)0;
        int32_t *l_6 = (void*)0;
        int32_t *l_7 = &g_8;
 606:	89 81       	ldd	r24, Y+1	; 0x01
 608:	9a 81       	ldd	r25, Y+2	; 0x02
 60a:	01 96       	adiw	r24, 0x01	; 1
 60c:	9a 83       	std	Y+2, r25	; 0x02
 60e:	89 83       	std	Y+1, r24	; 0x01
 610:	89 81       	ldd	r24, Y+1	; 0x01
 612:	9a 81       	ldd	r25, Y+2	; 0x02
 614:	86 30       	cpi	r24, 0x06	; 6
 616:	91 05       	cpc	r25, r1
 618:	34 f3       	brlt	.-52     	; 0x5e6 <func_1+0x56>
        int32_t *l_9 = &g_8;
        int32_t *l_10[8][1];
 61a:	89 85       	ldd	r24, Y+9	; 0x09
 61c:	9a 85       	ldd	r25, Y+10	; 0x0a
 61e:	fc 01       	movw	r30, r24
 620:	70 81       	ld	r23, Z
 622:	8f 81       	ldd	r24, Y+7	; 0x07
 624:	98 85       	ldd	r25, Y+8	; 0x08
 626:	dc 01       	movw	r26, r24
 628:	ec 91       	ld	r30, X
 62a:	80 91 04 01 	lds	r24, 0x0104
 62e:	90 91 05 01 	lds	r25, 0x0105
 632:	cc 01       	movw	r24, r24
 634:	a0 e0       	ldi	r26, 0x00	; 0
 636:	b0 e0       	ldi	r27, 0x00	; 0
 638:	8b 83       	std	Y+3, r24	; 0x03
 63a:	9c 83       	std	Y+4, r25	; 0x04
 63c:	ad 83       	std	Y+5, r26	; 0x05
 63e:	be 83       	std	Y+6, r27	; 0x06
 640:	80 91 04 01 	lds	r24, 0x0104
 644:	90 91 05 01 	lds	r25, 0x0105
 648:	cc 01       	movw	r24, r24
 64a:	a0 e0       	ldi	r26, 0x00	; 0
 64c:	b0 e0       	ldi	r27, 0x00	; 0
 64e:	61 e0       	ldi	r22, 0x01	; 1
 650:	2b 81       	ldd	r18, Y+3	; 0x03
 652:	3c 81       	ldd	r19, Y+4	; 0x04
 654:	4d 81       	ldd	r20, Y+5	; 0x05
 656:	5e 81       	ldd	r21, Y+6	; 0x06
 658:	28 17       	cp	r18, r24
 65a:	39 07       	cpc	r19, r25
 65c:	4a 07       	cpc	r20, r26
 65e:	5b 07       	cpc	r21, r27
 660:	09 f4       	brne	.+2      	; 0x664 <func_1+0xd4>
 662:	60 e0       	ldi	r22, 0x00	; 0
 664:	86 2f       	mov	r24, r22
 666:	90 e0       	ldi	r25, 0x00	; 0
 668:	a0 e0       	ldi	r26, 0x00	; 0
 66a:	b0 e0       	ldi	r27, 0x00	; 0
 66c:	89 8f       	std	Y+25, r24	; 0x19
 66e:	9a 8f       	std	Y+26, r25	; 0x1a
 670:	ab 8f       	std	Y+27, r26	; 0x1b
 672:	bc 8f       	std	Y+28, r27	; 0x1c
 674:	89 8d       	ldd	r24, Y+25	; 0x19
 676:	9a 8d       	ldd	r25, Y+26	; 0x1a
 678:	ab 8d       	ldd	r26, Y+27	; 0x1b
 67a:	bc 8d       	ldd	r27, Y+28	; 0x1c
 67c:	21 e0       	ldi	r18, 0x01	; 1
 67e:	00 97       	sbiw	r24, 0x00	; 0
 680:	a1 05       	cpc	r26, r1
 682:	b1 05       	cpc	r27, r1
 684:	09 f0       	breq	.+2      	; 0x688 <func_1+0xf8>
 686:	20 e0       	ldi	r18, 0x00	; 0
 688:	82 2f       	mov	r24, r18
 68a:	2e 2f       	mov	r18, r30
 68c:	28 23       	and	r18, r24
 68e:	8f 81       	ldd	r24, Y+7	; 0x07
 690:	98 85       	ldd	r25, Y+8	; 0x08
 692:	fc 01       	movw	r30, r24
 694:	20 83       	st	Z, r18
 696:	8f 81       	ldd	r24, Y+7	; 0x07
 698:	98 85       	ldd	r25, Y+8	; 0x08
 69a:	dc 01       	movw	r26, r24
 69c:	8c 91       	ld	r24, X
 69e:	27 2f       	mov	r18, r23
 6a0:	28 2b       	or	r18, r24
 6a2:	89 85       	ldd	r24, Y+9	; 0x09
 6a4:	9a 85       	ldd	r25, Y+10	; 0x0a
 6a6:	fc 01       	movw	r30, r24
 6a8:	20 83       	st	Z, r18
 6aa:	89 85       	ldd	r24, Y+9	; 0x09
 6ac:	9a 85       	ldd	r25, Y+10	; 0x0a
 6ae:	dc 01       	movw	r26, r24
 6b0:	8c 91       	ld	r24, X
 6b2:	99 27       	eor	r25, r25
 6b4:	87 fd       	sbrc	r24, 7
 6b6:	90 95       	com	r25
 6b8:	20 91 06 01 	lds	r18, 0x0106
 6bc:	33 27       	eor	r19, r19
 6be:	27 fd       	sbrc	r18, 7
 6c0:	30 95       	com	r19
 6c2:	02 c0       	rjmp	.+4      	; 0x6c8 <func_1+0x138>
 6c4:	95 95       	asr	r25
 6c6:	87 95       	ror	r24
 6c8:	2a 95       	dec	r18
 6ca:	e2 f7       	brpl	.-8      	; 0x6c4 <func_1+0x134>
 6cc:	aa 27       	eor	r26, r26
 6ce:	97 fd       	sbrc	r25, 7
 6d0:	a0 95       	com	r26
 6d2:	ba 2f       	mov	r27, r26
 6d4:	2b 85       	ldd	r18, Y+11	; 0x0b
 6d6:	3c 85       	ldd	r19, Y+12	; 0x0c
 6d8:	f9 01       	movw	r30, r18
 6da:	80 83       	st	Z, r24
 6dc:	91 83       	std	Z+1, r25	; 0x01
 6de:	a2 83       	std	Z+2, r26	; 0x02
 6e0:	b3 83       	std	Z+3, r27	; 0x03
        int i, j;
 6e2:	80 91 0e 01 	lds	r24, 0x010E
 6e6:	90 91 0f 01 	lds	r25, 0x010F
 6ea:	a0 91 10 01 	lds	r26, 0x0110
 6ee:	b0 91 11 01 	lds	r27, 0x0111
        for (i = 0; i < 8; i++)
 6f2:	bc 01       	movw	r22, r24
 6f4:	cd 01       	movw	r24, r26
 6f6:	c0 54       	subi	r28, 0x40	; 64
 6f8:	df 4f       	sbci	r29, 0xFF	; 255
 6fa:	0f b6       	in	r0, 0x3f	; 63
 6fc:	f8 94       	cli
 6fe:	de bf       	out	0x3e, r29	; 62
 700:	0f be       	out	0x3f, r0	; 63
 702:	cd bf       	out	0x3d, r28	; 61
 704:	df 91       	pop	r29
 706:	cf 91       	pop	r28
 708:	08 95       	ret

0000070a <main>:
            for (j = 0; j < 1; j++)
                l_10[i][j] = &g_8;
        }
        g_12++;
        l_29 = func_15(l_2[g_4[5][0]], g_4[0][0], l_6, g_4[5][0]);
    }
 70a:	6f 92       	push	r6
 70c:	7f 92       	push	r7
 70e:	8f 92       	push	r8
 710:	9f 92       	push	r9
 712:	af 92       	push	r10
 714:	bf 92       	push	r11
 716:	cf 92       	push	r12
 718:	df 92       	push	r13
 71a:	ef 92       	push	r14
 71c:	ff 92       	push	r15
 71e:	0f 93       	push	r16
 720:	1f 93       	push	r17
 722:	cf 93       	push	r28
 724:	df 93       	push	r29
 726:	cd b7       	in	r28, 0x3d	; 61
 728:	de b7       	in	r29, 0x3e	; 62
 72a:	aa 97       	sbiw	r28, 0x2a	; 42
 72c:	0f b6       	in	r0, 0x3f	; 63
 72e:	f8 94       	cli
 730:	de bf       	out	0x3e, r29	; 62
 732:	0f be       	out	0x3f, r0	; 63
 734:	cd bf       	out	0x3d, r28	; 61
 736:	98 87       	std	Y+8, r25	; 0x08
 738:	8f 83       	std	Y+7, r24	; 0x07
 73a:	7a 87       	std	Y+10, r23	; 0x0a
 73c:	69 87       	std	Y+9, r22	; 0x09
    return (*l_29);
}
 73e:	1e 82       	std	Y+6, r1	; 0x06
 740:	1d 82       	std	Y+5, r1	; 0x05

 742:	8f 81       	ldd	r24, Y+7	; 0x07
 744:	98 85       	ldd	r25, Y+8	; 0x08
 746:	82 30       	cpi	r24, 0x02	; 2
 748:	91 05       	cpc	r25, r1
 74a:	81 f4       	brne	.+32     	; 0x76c <main+0x62>
 74c:	89 85       	ldd	r24, Y+9	; 0x09
 74e:	9a 85       	ldd	r25, Y+10	; 0x0a
 750:	02 96       	adiw	r24, 0x02	; 2
 752:	fc 01       	movw	r30, r24
 754:	80 81       	ld	r24, Z
 756:	91 81       	ldd	r25, Z+1	; 0x01
 758:	68 ec       	ldi	r22, 0xC8	; 200
 75a:	71 e0       	ldi	r23, 0x01	; 1
 75c:	0e 94 d6 04 	call	0x9ac	; 0x9ac <strcmp>
 760:	00 97       	sbiw	r24, 0x00	; 0
 762:	21 f4       	brne	.+8      	; 0x76c <main+0x62>
 764:	81 e0       	ldi	r24, 0x01	; 1
 766:	90 e0       	ldi	r25, 0x00	; 0
 768:	9e 83       	std	Y+6, r25	; 0x06
 76a:	8d 83       	std	Y+5, r24	; 0x05

 76c:	0e 94 7a 00 	call	0xf4	; 0xf4 <platform_main_begin>
/* ------------------------------------------ */
 770:	0e 94 be 00 	call	0x17c	; 0x17c <crc32_gentab>
/* 
 774:	0e 94 c8 02 	call	0x590	; 0x590 <func_1>
 * reads :
 778:	80 91 04 01 	lds	r24, 0x0104
 77c:	90 91 05 01 	lds	r25, 0x0105
 780:	3c 01       	movw	r6, r24
 782:	81 2c       	mov	r8, r1
 784:	91 2c       	mov	r9, r1
 786:	a1 2c       	mov	r10, r1
 788:	b1 2c       	mov	r11, r1
 78a:	65 01       	movw	r12, r10
 78c:	8d 81       	ldd	r24, Y+5	; 0x05
 78e:	9e 81       	ldd	r25, Y+6	; 0x06
 790:	7c 01       	movw	r14, r24
 792:	0a ec       	ldi	r16, 0xCA	; 202
 794:	11 e0       	ldi	r17, 0x01	; 1
 796:	26 2d       	mov	r18, r6
 798:	37 2d       	mov	r19, r7
 79a:	48 2d       	mov	r20, r8
 79c:	59 2d       	mov	r21, r9
 79e:	6a 2d       	mov	r22, r10
 7a0:	7b 2d       	mov	r23, r11
 7a2:	8c 2d       	mov	r24, r12
 7a4:	9d 2d       	mov	r25, r13
 7a6:	0e 94 53 02 	call	0x4a6	; 0x4a6 <transparent_crc>
 * writes: g_8
 7aa:	80 91 06 01 	lds	r24, 0x0106
 7ae:	68 2e       	mov	r6, r24
 7b0:	71 2c       	mov	r7, r1
 7b2:	81 2c       	mov	r8, r1
 7b4:	91 2c       	mov	r9, r1
 7b6:	a1 2c       	mov	r10, r1
 7b8:	b1 2c       	mov	r11, r1
 7ba:	65 01       	movw	r12, r10
 7bc:	8d 81       	ldd	r24, Y+5	; 0x05
 7be:	9e 81       	ldd	r25, Y+6	; 0x06
 7c0:	7c 01       	movw	r14, r24
 7c2:	0e ec       	ldi	r16, 0xCE	; 206
 7c4:	11 e0       	ldi	r17, 0x01	; 1
 7c6:	26 2d       	mov	r18, r6
 7c8:	37 2d       	mov	r19, r7
 7ca:	48 2d       	mov	r20, r8
 7cc:	59 2d       	mov	r21, r9
 7ce:	6a 2d       	mov	r22, r10
 7d0:	7b 2d       	mov	r23, r11
 7d2:	8c 2d       	mov	r24, r12
 7d4:	9d 2d       	mov	r25, r13
 7d6:	0e 94 53 02 	call	0x4a6	; 0x4a6 <transparent_crc>
 */
 7da:	80 91 07 01 	lds	r24, 0x0107
 7de:	8b 87       	std	Y+11, r24	; 0x0b
 7e0:	88 0f       	add	r24, r24
 7e2:	88 0b       	sbc	r24, r24
 7e4:	8c 87       	std	Y+12, r24	; 0x0c
 7e6:	8d 87       	std	Y+13, r24	; 0x0d
 7e8:	8e 87       	std	Y+14, r24	; 0x0e
 7ea:	8f 87       	std	Y+15, r24	; 0x0f
 7ec:	88 8b       	std	Y+16, r24	; 0x10
 7ee:	89 8b       	std	Y+17, r24	; 0x11
 7f0:	8a 8b       	std	Y+18, r24	; 0x12
 7f2:	8d 81       	ldd	r24, Y+5	; 0x05
 7f4:	9e 81       	ldd	r25, Y+6	; 0x06
 7f6:	7c 01       	movw	r14, r24
 7f8:	02 ed       	ldi	r16, 0xD2	; 210
 7fa:	11 e0       	ldi	r17, 0x01	; 1
 7fc:	2b 85       	ldd	r18, Y+11	; 0x0b
 7fe:	3c 85       	ldd	r19, Y+12	; 0x0c
 800:	4d 85       	ldd	r20, Y+13	; 0x0d
 802:	5e 85       	ldd	r21, Y+14	; 0x0e
 804:	6f 85       	ldd	r22, Y+15	; 0x0f
 806:	78 89       	ldd	r23, Y+16	; 0x10
 808:	89 89       	ldd	r24, Y+17	; 0x11
 80a:	9a 89       	ldd	r25, Y+18	; 0x12
 80c:	0e 94 53 02 	call	0x4a6	; 0x4a6 <transparent_crc>
static int32_t * func_15(int8_t  p_16, int8_t  p_17, int32_t * p_18, int32_t  p_19)
 810:	1a 82       	std	Y+2, r1	; 0x02
 812:	19 82       	std	Y+1, r1	; 0x01
 814:	38 c0       	rjmp	.+112    	; 0x886 <main+0x17c>
{ /* block id: 5 */
    uint8_t l_24[7] = {0UL,0x8CL,0UL,0UL,0x8CL,0UL,0UL};
 816:	1c 82       	std	Y+4, r1	; 0x04
 818:	1b 82       	std	Y+3, r1	; 0x03
 81a:	2b c0       	rjmp	.+86     	; 0x872 <main+0x168>
    int32_t *l_26 = (void*)0;
    int32_t *l_27 = &g_8;
 81c:	89 81       	ldd	r24, Y+1	; 0x01
 81e:	9a 81       	ldd	r25, Y+2	; 0x02
 820:	9c 01       	movw	r18, r24
 822:	22 0f       	add	r18, r18
 824:	33 1f       	adc	r19, r19
 826:	8b 81       	ldd	r24, Y+3	; 0x03
 828:	9c 81       	ldd	r25, Y+4	; 0x04
 82a:	82 0f       	add	r24, r18
 82c:	93 1f       	adc	r25, r19
 82e:	88 5f       	subi	r24, 0xF8	; 248
 830:	9e 4f       	sbci	r25, 0xFE	; 254
 832:	fc 01       	movw	r30, r24
 834:	80 81       	ld	r24, Z
 836:	8b 8b       	std	Y+19, r24	; 0x13
 838:	88 0f       	add	r24, r24
 83a:	88 0b       	sbc	r24, r24
 83c:	8c 8b       	std	Y+20, r24	; 0x14
 83e:	8d 8b       	std	Y+21, r24	; 0x15
 840:	8e 8b       	std	Y+22, r24	; 0x16
 842:	8f 8b       	std	Y+23, r24	; 0x17
 844:	88 8f       	std	Y+24, r24	; 0x18
 846:	89 8f       	std	Y+25, r24	; 0x19
 848:	8a 8f       	std	Y+26, r24	; 0x1a
 84a:	8d 81       	ldd	r24, Y+5	; 0x05
 84c:	9e 81       	ldd	r25, Y+6	; 0x06
 84e:	7c 01       	movw	r14, r24
 850:	07 ed       	ldi	r16, 0xD7	; 215
 852:	11 e0       	ldi	r17, 0x01	; 1
 854:	2b 89       	ldd	r18, Y+19	; 0x13
 856:	3c 89       	ldd	r19, Y+20	; 0x14
 858:	4d 89       	ldd	r20, Y+21	; 0x15
 85a:	5e 89       	ldd	r21, Y+22	; 0x16
 85c:	6f 89       	ldd	r22, Y+23	; 0x17
 85e:	78 8d       	ldd	r23, Y+24	; 0x18
 860:	89 8d       	ldd	r24, Y+25	; 0x19
 862:	9a 8d       	ldd	r25, Y+26	; 0x1a
 864:	0e 94 53 02 	call	0x4a6	; 0x4a6 <transparent_crc>
 * reads :
 * writes: g_8
 */
static int32_t * func_15(int8_t  p_16, int8_t  p_17, int32_t * p_18, int32_t  p_19)
{ /* block id: 5 */
    uint8_t l_24[7] = {0UL,0x8CL,0UL,0UL,0x8CL,0UL,0UL};
 868:	8b 81       	ldd	r24, Y+3	; 0x03
 86a:	9c 81       	ldd	r25, Y+4	; 0x04
 86c:	01 96       	adiw	r24, 0x01	; 1
 86e:	9c 83       	std	Y+4, r25	; 0x04
 870:	8b 83       	std	Y+3, r24	; 0x03
 872:	8b 81       	ldd	r24, Y+3	; 0x03
 874:	9c 81       	ldd	r25, Y+4	; 0x04
 876:	82 30       	cpi	r24, 0x02	; 2
 878:	91 05       	cpc	r25, r1
 87a:	84 f2       	brlt	.-96     	; 0x81c <main+0x112>
/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_8
 */
static int32_t * func_15(int8_t  p_16, int8_t  p_17, int32_t * p_18, int32_t  p_19)
 87c:	89 81       	ldd	r24, Y+1	; 0x01
 87e:	9a 81       	ldd	r25, Y+2	; 0x02
 880:	01 96       	adiw	r24, 0x01	; 1
 882:	9a 83       	std	Y+2, r25	; 0x02
 884:	89 83       	std	Y+1, r24	; 0x01
 886:	89 81       	ldd	r24, Y+1	; 0x01
 888:	9a 81       	ldd	r25, Y+2	; 0x02
 88a:	18 16       	cp	r1, r24
 88c:	19 06       	cpc	r1, r25
 88e:	1c f6       	brge	.-122    	; 0x816 <main+0x10c>
    int32_t *l_27 = &g_8;
    int i;
    (*l_27) = (((int8_t)p_17 - (int8_t)l_24[0]) || 0L);
    return &g_4[4][0];
}

 890:	80 91 0a 01 	lds	r24, 0x010A
 894:	90 91 0b 01 	lds	r25, 0x010B
 898:	a0 91 0c 01 	lds	r26, 0x010C
 89c:	b0 91 0d 01 	lds	r27, 0x010D
 8a0:	8b 8f       	std	Y+27, r24	; 0x1b
 8a2:	9c 8f       	std	Y+28, r25	; 0x1c
 8a4:	ad 8f       	std	Y+29, r26	; 0x1d
 8a6:	be 8f       	std	Y+30, r27	; 0x1e
 8a8:	bb 0f       	add	r27, r27
 8aa:	88 0b       	sbc	r24, r24
 8ac:	98 2f       	mov	r25, r24
 8ae:	dc 01       	movw	r26, r24
 8b0:	8f 8f       	std	Y+31, r24	; 0x1f
 8b2:	88 a3       	std	Y+32, r24	; 0x20
 8b4:	89 a3       	std	Y+33, r24	; 0x21
 8b6:	8a a3       	std	Y+34, r24	; 0x22
 8b8:	8d 81       	ldd	r24, Y+5	; 0x05
 8ba:	9e 81       	ldd	r25, Y+6	; 0x06
 8bc:	7c 01       	movw	r14, r24
 8be:	02 ee       	ldi	r16, 0xE2	; 226
 8c0:	11 e0       	ldi	r17, 0x01	; 1
 8c2:	2b 8d       	ldd	r18, Y+27	; 0x1b
 8c4:	3c 8d       	ldd	r19, Y+28	; 0x1c
 8c6:	4d 8d       	ldd	r20, Y+29	; 0x1d
 8c8:	5e 8d       	ldd	r21, Y+30	; 0x1e
 8ca:	6f 8d       	ldd	r22, Y+31	; 0x1f
 8cc:	78 a1       	ldd	r23, Y+32	; 0x20
 8ce:	89 a1       	ldd	r24, Y+33	; 0x21
 8d0:	9a a1       	ldd	r25, Y+34	; 0x22
 8d2:	0e 94 53 02 	call	0x4a6	; 0x4a6 <transparent_crc>

 8d6:	80 91 0e 01 	lds	r24, 0x010E
 8da:	90 91 0f 01 	lds	r25, 0x010F
 8de:	a0 91 10 01 	lds	r26, 0x0110
 8e2:	b0 91 11 01 	lds	r27, 0x0111
 8e6:	8b a3       	std	Y+35, r24	; 0x23
 8e8:	9c a3       	std	Y+36, r25	; 0x24
 8ea:	ad a3       	std	Y+37, r26	; 0x25
 8ec:	be a3       	std	Y+38, r27	; 0x26
 8ee:	bb 0f       	add	r27, r27
 8f0:	88 0b       	sbc	r24, r24
 8f2:	98 2f       	mov	r25, r24
 8f4:	dc 01       	movw	r26, r24
 8f6:	8f a3       	std	Y+39, r24	; 0x27
 8f8:	88 a7       	std	Y+40, r24	; 0x28
 8fa:	89 a7       	std	Y+41, r24	; 0x29
 8fc:	8a a7       	std	Y+42, r24	; 0x2a
 8fe:	8d 81       	ldd	r24, Y+5	; 0x05
 900:	9e 81       	ldd	r25, Y+6	; 0x06
 902:	7c 01       	movw	r14, r24
 904:	07 ee       	ldi	r16, 0xE7	; 231
 906:	11 e0       	ldi	r17, 0x01	; 1
 908:	2b a1       	ldd	r18, Y+35	; 0x23
 90a:	3c a1       	ldd	r19, Y+36	; 0x24
 90c:	4d a1       	ldd	r20, Y+37	; 0x25
 90e:	5e a1       	ldd	r21, Y+38	; 0x26
 910:	6f a1       	ldd	r22, Y+39	; 0x27
 912:	78 a5       	ldd	r23, Y+40	; 0x28
 914:	89 a5       	ldd	r24, Y+41	; 0x29
 916:	9a a5       	ldd	r25, Y+42	; 0x2a
 918:	0e 94 53 02 	call	0x4a6	; 0x4a6 <transparent_crc>

 91c:	80 91 00 01 	lds	r24, 0x0100
 920:	90 91 01 01 	lds	r25, 0x0101
 924:	a0 91 02 01 	lds	r26, 0x0102
 928:	b0 91 03 01 	lds	r27, 0x0103
 92c:	80 95       	com	r24
 92e:	90 95       	com	r25
 930:	a0 95       	com	r26
 932:	b0 95       	com	r27
 934:	2d 81       	ldd	r18, Y+5	; 0x05
 936:	3e 81       	ldd	r19, Y+6	; 0x06
 938:	a9 01       	movw	r20, r18
 93a:	bc 01       	movw	r22, r24
 93c:	cd 01       	movw	r24, r26
 93e:	0e 94 81 00 	call	0x102	; 0x102 <platform_main_end>

 942:	80 e0       	ldi	r24, 0x00	; 0
 944:	90 e0       	ldi	r25, 0x00	; 0
/* ---------------------------------------- */
 946:	aa 96       	adiw	r28, 0x2a	; 42
 948:	0f b6       	in	r0, 0x3f	; 63
 94a:	f8 94       	cli
 94c:	de bf       	out	0x3e, r29	; 62
 94e:	0f be       	out	0x3f, r0	; 63
 950:	cd bf       	out	0x3d, r28	; 61
 952:	df 91       	pop	r29
 954:	cf 91       	pop	r28
 956:	1f 91       	pop	r17
 958:	0f 91       	pop	r16
 95a:	ff 90       	pop	r15
 95c:	ef 90       	pop	r14
 95e:	df 90       	pop	r13
 960:	cf 90       	pop	r12
 962:	bf 90       	pop	r11
 964:	af 90       	pop	r10
 966:	9f 90       	pop	r9
 968:	8f 90       	pop	r8
 96a:	7f 90       	pop	r7
 96c:	6f 90       	pop	r6
 96e:	08 95       	ret

00000970 <__ashrdi3>:
 970:	97 fb       	bst	r25, 7
 972:	10 f8       	bld	r1, 0

00000974 <__lshrdi3>:
 974:	16 94       	lsr	r1
 976:	00 08       	sbc	r0, r0
 978:	0f 93       	push	r16
 97a:	08 30       	cpi	r16, 0x08	; 8
 97c:	98 f0       	brcs	.+38     	; 0x9a4 <__lshrdi3+0x30>
 97e:	08 50       	subi	r16, 0x08	; 8
 980:	23 2f       	mov	r18, r19
 982:	34 2f       	mov	r19, r20
 984:	45 2f       	mov	r20, r21
 986:	56 2f       	mov	r21, r22
 988:	67 2f       	mov	r22, r23
 98a:	78 2f       	mov	r23, r24
 98c:	89 2f       	mov	r24, r25
 98e:	90 2d       	mov	r25, r0
 990:	f4 cf       	rjmp	.-24     	; 0x97a <__lshrdi3+0x6>
 992:	05 94       	asr	r0
 994:	97 95       	ror	r25
 996:	87 95       	ror	r24
 998:	77 95       	ror	r23
 99a:	67 95       	ror	r22
 99c:	57 95       	ror	r21
 99e:	47 95       	ror	r20
 9a0:	37 95       	ror	r19
 9a2:	27 95       	ror	r18
 9a4:	0a 95       	dec	r16
 9a6:	aa f7       	brpl	.-22     	; 0x992 <__lshrdi3+0x1e>
 9a8:	0f 91       	pop	r16
 9aa:	08 95       	ret

000009ac <strcmp>:
 9ac:	fb 01       	movw	r30, r22
 9ae:	dc 01       	movw	r26, r24
 9b0:	8d 91       	ld	r24, X+
 9b2:	01 90       	ld	r0, Z+
 9b4:	80 19       	sub	r24, r0
 9b6:	01 10       	cpse	r0, r1
 9b8:	d9 f3       	breq	.-10     	; 0x9b0 <strcmp+0x4>
 9ba:	99 0b       	sbc	r25, r25
 9bc:	08 95       	ret

000009be <itoa>:
 9be:	45 32       	cpi	r20, 0x25	; 37
 9c0:	51 05       	cpc	r21, r1
 9c2:	20 f4       	brcc	.+8      	; 0x9cc <itoa+0xe>
 9c4:	42 30       	cpi	r20, 0x02	; 2
 9c6:	10 f0       	brcs	.+4      	; 0x9cc <itoa+0xe>
 9c8:	0c 94 ea 04 	jmp	0x9d4	; 0x9d4 <__itoa_ncheck>
 9cc:	fb 01       	movw	r30, r22
 9ce:	10 82       	st	Z, r1
 9d0:	cb 01       	movw	r24, r22
 9d2:	08 95       	ret

000009d4 <__itoa_ncheck>:
 9d4:	bb 27       	eor	r27, r27
 9d6:	4a 30       	cpi	r20, 0x0A	; 10
 9d8:	31 f4       	brne	.+12     	; 0x9e6 <__itoa_ncheck+0x12>
 9da:	99 23       	and	r25, r25
 9dc:	22 f4       	brpl	.+8      	; 0x9e6 <__itoa_ncheck+0x12>
 9de:	bd e2       	ldi	r27, 0x2D	; 45
 9e0:	90 95       	com	r25
 9e2:	81 95       	neg	r24
 9e4:	9f 4f       	sbci	r25, 0xFF	; 255
 9e6:	0c 94 f6 04 	jmp	0x9ec	; 0x9ec <__utoa_common>

000009ea <__utoa_ncheck>:
 9ea:	bb 27       	eor	r27, r27

000009ec <__utoa_common>:
 9ec:	fb 01       	movw	r30, r22
 9ee:	55 27       	eor	r21, r21
 9f0:	aa 27       	eor	r26, r26
 9f2:	88 0f       	add	r24, r24
 9f4:	99 1f       	adc	r25, r25
 9f6:	aa 1f       	adc	r26, r26
 9f8:	a4 17       	cp	r26, r20
 9fa:	10 f0       	brcs	.+4      	; 0xa00 <__utoa_common+0x14>
 9fc:	a4 1b       	sub	r26, r20
 9fe:	83 95       	inc	r24
 a00:	50 51       	subi	r21, 0x10	; 16
 a02:	b9 f7       	brne	.-18     	; 0x9f2 <__utoa_common+0x6>
 a04:	a0 5d       	subi	r26, 0xD0	; 208
 a06:	aa 33       	cpi	r26, 0x3A	; 58
 a08:	08 f0       	brcs	.+2      	; 0xa0c <__utoa_common+0x20>
 a0a:	a9 5d       	subi	r26, 0xD9	; 217
 a0c:	a1 93       	st	Z+, r26
 a0e:	00 97       	sbiw	r24, 0x00	; 0
 a10:	79 f7       	brne	.-34     	; 0x9f0 <__utoa_common+0x4>
 a12:	b1 11       	cpse	r27, r1
 a14:	b1 93       	st	Z+, r27
 a16:	11 92       	st	Z+, r1
 a18:	cb 01       	movw	r24, r22
 a1a:	0c 94 0f 05 	jmp	0xa1e	; 0xa1e <strrev>

00000a1e <strrev>:
 a1e:	dc 01       	movw	r26, r24
 a20:	fc 01       	movw	r30, r24
 a22:	67 2f       	mov	r22, r23
 a24:	71 91       	ld	r23, Z+
 a26:	77 23       	and	r23, r23
 a28:	e1 f7       	brne	.-8      	; 0xa22 <strrev+0x4>
 a2a:	32 97       	sbiw	r30, 0x02	; 2
 a2c:	04 c0       	rjmp	.+8      	; 0xa36 <strrev+0x18>
 a2e:	7c 91       	ld	r23, X
 a30:	6d 93       	st	X+, r22
 a32:	70 83       	st	Z, r23
 a34:	62 91       	ld	r22, -Z
 a36:	ae 17       	cp	r26, r30
 a38:	bf 07       	cpc	r27, r31
 a3a:	c8 f3       	brcs	.-14     	; 0xa2e <strrev+0x10>
 a3c:	08 95       	ret

00000a3e <_exit>:
 a3e:	f8 94       	cli

00000a40 <__stop_program>:
 a40:	ff cf       	rjmp	.-2      	; 0xa40 <__stop_program>
