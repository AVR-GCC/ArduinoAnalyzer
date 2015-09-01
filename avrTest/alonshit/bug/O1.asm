
O1avrtest.elf:     file format elf32-avr


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
  7a:	e2 e7       	ldi	r30, 0x72	; 114
  7c:	f4 e0       	ldi	r31, 0x04	; 4
  7e:	02 c0       	rjmp	.+4      	; 0x84 <__do_copy_data+0x10>
  80:	05 90       	lpm	r0, Z+
  82:	0d 92       	st	X+, r0
  84:	aa 31       	cpi	r26, 0x1A	; 26
  86:	b1 07       	cpc	r27, r17
  88:	d9 f7       	brne	.-10     	; 0x80 <__do_copy_data+0xc>

0000008a <__do_clear_bss>:
  8a:	25 e0       	ldi	r18, 0x05	; 5
  8c:	aa e1       	ldi	r26, 0x1A	; 26
  8e:	b1 e0       	ldi	r27, 0x01	; 1
  90:	01 c0       	rjmp	.+2      	; 0x94 <.do_clear_bss_start>

00000092 <.do_clear_bss_loop>:
  92:	1d 92       	st	X+, r1

00000094 <.do_clear_bss_start>:
  94:	aa 31       	cpi	r26, 0x1A	; 26
  96:	b2 07       	cpc	r27, r18
  98:	e1 f7       	brne	.-8      	; 0x92 <.do_clear_bss_loop>
  9a:	0e 94 0d 01 	call	0x21a	; 0x21a <main>
  9e:	0c 94 37 02 	jmp	0x46e	; 0x46e <_exit>

000000a2 <__bad_interrupt>:
  a2:	0c 94 00 00 	jmp	0	; 0x0 <__vectors>

000000a6 <crc32_byte>:
		crc32_tab[i] = crc;
	}
}

static void 
crc32_byte (uint8_t b) {
  a6:	0f 93       	push	r16
  a8:	1f 93       	push	r17
	crc32_context = 
		((crc32_context >> 8) & 0x00FFFFFF) ^ 
  aa:	40 91 07 01 	lds	r20, 0x0107
  ae:	50 91 08 01 	lds	r21, 0x0108
  b2:	60 91 09 01 	lds	r22, 0x0109
  b6:	70 91 0a 01 	lds	r23, 0x010A
		crc32_tab[(crc32_context ^ b) & 0xFF];
  ba:	8a 01       	movw	r16, r20
  bc:	9b 01       	movw	r18, r22
  be:	08 27       	eor	r16, r24
  c0:	d9 01       	movw	r26, r18
  c2:	c8 01       	movw	r24, r16
  c4:	99 27       	eor	r25, r25
  c6:	aa 27       	eor	r26, r26
  c8:	bb 27       	eor	r27, r27
  ca:	88 0f       	add	r24, r24
  cc:	99 1f       	adc	r25, r25
  ce:	88 0f       	add	r24, r24
  d0:	99 1f       	adc	r25, r25
  d2:	fc 01       	movw	r30, r24
  d4:	e6 5e       	subi	r30, 0xE6	; 230
  d6:	fe 4f       	sbci	r31, 0xFE	; 254
}

static void 
crc32_byte (uint8_t b) {
	crc32_context = 
		((crc32_context >> 8) & 0x00FFFFFF) ^ 
  d8:	45 2f       	mov	r20, r21
  da:	56 2f       	mov	r21, r22
  dc:	67 2f       	mov	r22, r23
  de:	77 27       	eor	r23, r23
  e0:	80 81       	ld	r24, Z
  e2:	91 81       	ldd	r25, Z+1	; 0x01
  e4:	a2 81       	ldd	r26, Z+2	; 0x02
  e6:	b3 81       	ldd	r27, Z+3	; 0x03
  e8:	48 27       	eor	r20, r24
  ea:	59 27       	eor	r21, r25
  ec:	6a 27       	eor	r22, r26
  ee:	7b 27       	eor	r23, r27
	}
}

static void 
crc32_byte (uint8_t b) {
	crc32_context = 
  f0:	40 93 07 01 	sts	0x0107, r20
  f4:	50 93 08 01 	sts	0x0108, r21
  f8:	60 93 09 01 	sts	0x0109, r22
  fc:	70 93 0a 01 	sts	0x010A, r23
		((crc32_context >> 8) & 0x00FFFFFF) ^ 
		crc32_tab[(crc32_context ^ b) & 0xFF];
}
 100:	1f 91       	pop	r17
 102:	0f 91       	pop	r16
 104:	08 95       	ret

00000106 <crc32_8bytes>:
	}
}
#else
static void 
crc32_8bytes (uint64_t val)
{
 106:	bf 92       	push	r11
 108:	cf 92       	push	r12
 10a:	df 92       	push	r13
 10c:	ef 92       	push	r14
 10e:	ff 92       	push	r15
 110:	0f 93       	push	r16
 112:	1f 93       	push	r17
 114:	cf 93       	push	r28
 116:	df 93       	push	r29
 118:	c2 2f       	mov	r28, r18
 11a:	b3 2e       	mov	r11, r19
 11c:	c4 2e       	mov	r12, r20
 11e:	d5 2e       	mov	r13, r21
 120:	e6 2e       	mov	r14, r22
 122:	f7 2e       	mov	r15, r23
 124:	18 2f       	mov	r17, r24
 126:	d9 2f       	mov	r29, r25
	crc32_byte ((val>>0) & 0xff);
 128:	82 2f       	mov	r24, r18
 12a:	0e 94 53 00 	call	0xa6	; 0xa6 <crc32_byte>
	crc32_byte ((val>>8) & 0xff);
 12e:	2c 2f       	mov	r18, r28
 130:	3b 2d       	mov	r19, r11
 132:	4c 2d       	mov	r20, r12
 134:	5d 2d       	mov	r21, r13
 136:	6e 2d       	mov	r22, r14
 138:	7f 2d       	mov	r23, r15
 13a:	81 2f       	mov	r24, r17
 13c:	9d 2f       	mov	r25, r29
 13e:	08 e0       	ldi	r16, 0x08	; 8
 140:	0e 94 e6 01 	call	0x3cc	; 0x3cc <__lshrdi3>
 144:	82 2f       	mov	r24, r18
 146:	0e 94 53 00 	call	0xa6	; 0xa6 <crc32_byte>
	crc32_byte ((val>>16) & 0xff);
 14a:	2c 2f       	mov	r18, r28
 14c:	3b 2d       	mov	r19, r11
 14e:	4c 2d       	mov	r20, r12
 150:	5d 2d       	mov	r21, r13
 152:	6e 2d       	mov	r22, r14
 154:	7f 2d       	mov	r23, r15
 156:	81 2f       	mov	r24, r17
 158:	9d 2f       	mov	r25, r29
 15a:	00 e1       	ldi	r16, 0x10	; 16
 15c:	0e 94 e6 01 	call	0x3cc	; 0x3cc <__lshrdi3>
 160:	82 2f       	mov	r24, r18
 162:	0e 94 53 00 	call	0xa6	; 0xa6 <crc32_byte>
	crc32_byte ((val>>24) & 0xff);
 166:	2c 2f       	mov	r18, r28
 168:	3b 2d       	mov	r19, r11
 16a:	4c 2d       	mov	r20, r12
 16c:	5d 2d       	mov	r21, r13
 16e:	6e 2d       	mov	r22, r14
 170:	7f 2d       	mov	r23, r15
 172:	81 2f       	mov	r24, r17
 174:	9d 2f       	mov	r25, r29
 176:	08 e1       	ldi	r16, 0x18	; 24
 178:	0e 94 e6 01 	call	0x3cc	; 0x3cc <__lshrdi3>
 17c:	82 2f       	mov	r24, r18
 17e:	0e 94 53 00 	call	0xa6	; 0xa6 <crc32_byte>
	crc32_byte ((val>>32) & 0xff);
 182:	2c 2f       	mov	r18, r28
 184:	3b 2d       	mov	r19, r11
 186:	4c 2d       	mov	r20, r12
 188:	5d 2d       	mov	r21, r13
 18a:	6e 2d       	mov	r22, r14
 18c:	7f 2d       	mov	r23, r15
 18e:	81 2f       	mov	r24, r17
 190:	9d 2f       	mov	r25, r29
 192:	00 e2       	ldi	r16, 0x20	; 32
 194:	0e 94 e6 01 	call	0x3cc	; 0x3cc <__lshrdi3>
 198:	82 2f       	mov	r24, r18
 19a:	0e 94 53 00 	call	0xa6	; 0xa6 <crc32_byte>
	crc32_byte ((val>>40) & 0xff);
 19e:	2c 2f       	mov	r18, r28
 1a0:	3b 2d       	mov	r19, r11
 1a2:	4c 2d       	mov	r20, r12
 1a4:	5d 2d       	mov	r21, r13
 1a6:	6e 2d       	mov	r22, r14
 1a8:	7f 2d       	mov	r23, r15
 1aa:	81 2f       	mov	r24, r17
 1ac:	9d 2f       	mov	r25, r29
 1ae:	08 e2       	ldi	r16, 0x28	; 40
 1b0:	0e 94 e6 01 	call	0x3cc	; 0x3cc <__lshrdi3>
 1b4:	82 2f       	mov	r24, r18
 1b6:	0e 94 53 00 	call	0xa6	; 0xa6 <crc32_byte>
	crc32_byte ((val>>48) & 0xff);
 1ba:	2c 2f       	mov	r18, r28
 1bc:	3b 2d       	mov	r19, r11
 1be:	4c 2d       	mov	r20, r12
 1c0:	5d 2d       	mov	r21, r13
 1c2:	6e 2d       	mov	r22, r14
 1c4:	7f 2d       	mov	r23, r15
 1c6:	81 2f       	mov	r24, r17
 1c8:	9d 2f       	mov	r25, r29
 1ca:	00 e3       	ldi	r16, 0x30	; 48
 1cc:	0e 94 e6 01 	call	0x3cc	; 0x3cc <__lshrdi3>
 1d0:	82 2f       	mov	r24, r18
 1d2:	0e 94 53 00 	call	0xa6	; 0xa6 <crc32_byte>
	crc32_byte ((val>>56) & 0xff);
 1d6:	2c 2f       	mov	r18, r28
 1d8:	3b 2d       	mov	r19, r11
 1da:	4c 2d       	mov	r20, r12
 1dc:	5d 2d       	mov	r21, r13
 1de:	6e 2d       	mov	r22, r14
 1e0:	7f 2d       	mov	r23, r15
 1e2:	81 2f       	mov	r24, r17
 1e4:	9d 2f       	mov	r25, r29
 1e6:	08 e3       	ldi	r16, 0x38	; 56
 1e8:	0e 94 e6 01 	call	0x3cc	; 0x3cc <__lshrdi3>
 1ec:	82 2f       	mov	r24, r18
 1ee:	0e 94 53 00 	call	0xa6	; 0xa6 <crc32_byte>
}
 1f2:	df 91       	pop	r29
 1f4:	cf 91       	pop	r28
 1f6:	1f 91       	pop	r17
 1f8:	0f 91       	pop	r16
 1fa:	ff 90       	pop	r15
 1fc:	ef 90       	pop	r14
 1fe:	df 90       	pop	r13
 200:	cf 90       	pop	r12
 202:	bf 90       	pop	r11
 204:	08 95       	ret

00000206 <debug_puts>:
#include <stdlib.h>
/* Poll the specified string out the debug port. */
void debug_puts(const char *str) {
  const char *c;

  for(c = str; *c; c++)
 206:	fc 01       	movw	r30, r24
 208:	20 81       	ld	r18, Z
 20a:	22 23       	and	r18, r18
 20c:	29 f0       	breq	.+10     	; 0x218 <debug_puts+0x12>
 20e:	31 96       	adiw	r30, 0x01	; 1
    special_output_port = *c;
 210:	20 b9       	out	0x00, r18	; 0
#include <stdlib.h>
/* Poll the specified string out the debug port. */
void debug_puts(const char *str) {
  const char *c;

  for(c = str; *c; c++)
 212:	21 91       	ld	r18, Z+
 214:	21 11       	cpse	r18, r1
 216:	fc cf       	rjmp	.-8      	; 0x210 <debug_puts+0xa>
 218:	08 95       	ret

0000021a <main>:
            for (j = 0; j < 1; j++)
                l_10[i][j] = &g_8;
        }
        g_12++;
        l_29 = func_15(l_2[g_4[5][0]], g_4[0][0], l_6, g_4[5][0]);
    }
 21a:	cf 92       	push	r12
 21c:	df 92       	push	r13
 21e:	ef 92       	push	r14
 220:	ff 92       	push	r15
 222:	0f 93       	push	r16
 224:	1f 93       	push	r17
 226:	cf 93       	push	r28
 228:	df 93       	push	r29
 22a:	cd b7       	in	r28, 0x3d	; 61
 22c:	de b7       	in	r29, 0x3e	; 62
 22e:	61 97       	sbiw	r28, 0x11	; 17
 230:	0f b6       	in	r0, 0x3f	; 63
 232:	f8 94       	cli
 234:	de bf       	out	0x3e, r29	; 62
 236:	0f be       	out	0x3f, r0	; 63
 238:	cd bf       	out	0x3d, r28	; 61
 23a:	ea e1       	ldi	r30, 0x1A	; 26
 23c:	f1 e0       	ldi	r31, 0x01	; 1
 23e:	4a e1       	ldi	r20, 0x1A	; 26
 240:	55 e0       	ldi	r21, 0x05	; 5
 242:	c1 2c       	mov	r12, r1
 244:	d1 2c       	mov	r13, r1
 246:	76 01       	movw	r14, r12
	uint32_t crc;
	const uint32_t poly = 0xEDB88320UL;
	int i, j;
	
	for (i = 0; i < 256; i++) {
		crc = i;
 248:	78 e0       	ldi	r23, 0x08	; 8
 24a:	60 e0       	ldi	r22, 0x00	; 0
 24c:	d7 01       	movw	r26, r14
 24e:	c6 01       	movw	r24, r12
 250:	27 2f       	mov	r18, r23
 252:	36 2f       	mov	r19, r22
		for (j = 8; j > 0; j--) {
			if (crc & 1) {
 254:	80 ff       	sbrs	r24, 0
 256:	0d c0       	rjmp	.+26     	; 0x272 <main+0x58>
				crc = (crc >> 1) ^ poly;
 258:	b6 95       	lsr	r27
 25a:	a7 95       	ror	r26
 25c:	97 95       	ror	r25
 25e:	87 95       	ror	r24
 260:	10 e2       	ldi	r17, 0x20	; 32
 262:	81 27       	eor	r24, r17
 264:	13 e8       	ldi	r17, 0x83	; 131
 266:	91 27       	eor	r25, r17
 268:	18 eb       	ldi	r17, 0xB8	; 184
 26a:	a1 27       	eor	r26, r17
 26c:	1d ee       	ldi	r17, 0xED	; 237
 26e:	b1 27       	eor	r27, r17
 270:	04 c0       	rjmp	.+8      	; 0x27a <main+0x60>
			} else {
				crc >>= 1;
 272:	b6 95       	lsr	r27
 274:	a7 95       	ror	r26
 276:	97 95       	ror	r25
 278:	87 95       	ror	r24
 27a:	21 50       	subi	r18, 0x01	; 1
 27c:	31 09       	sbc	r19, r1
	const uint32_t poly = 0xEDB88320UL;
	int i, j;
	
	for (i = 0; i < 256; i++) {
		crc = i;
		for (j = 8; j > 0; j--) {
 27e:	21 15       	cp	r18, r1
 280:	31 05       	cpc	r19, r1
 282:	41 f7       	brne	.-48     	; 0x254 <main+0x3a>
				crc = (crc >> 1) ^ poly;
			} else {
				crc >>= 1;
			}
		}
		crc32_tab[i] = crc;
 284:	81 93       	st	Z+, r24
 286:	91 93       	st	Z+, r25
 288:	a1 93       	st	Z+, r26
 28a:	b1 93       	st	Z+, r27
 28c:	8f ef       	ldi	r24, 0xFF	; 255
 28e:	c8 1a       	sub	r12, r24
 290:	d8 0a       	sbc	r13, r24
 292:	e8 0a       	sbc	r14, r24
 294:	f8 0a       	sbc	r15, r24
{
	uint32_t crc;
	const uint32_t poly = 0xEDB88320UL;
	int i, j;
	
	for (i = 0; i < 256; i++) {
 296:	e4 17       	cp	r30, r20
 298:	f5 07       	cpc	r31, r21
 29a:	c1 f6       	brne	.-80     	; 0x24c <main+0x32>
    { /* block id: 3 */
        int32_t *l_5 = (void*)0;
        int32_t *l_6 = (void*)0;
        int32_t *l_7 = &g_8;
        int32_t *l_9 = &g_8;
        int32_t *l_10[8][1];
 29c:	04 e0       	ldi	r16, 0x04	; 4
 29e:	11 e0       	ldi	r17, 0x01	; 1
 2a0:	f8 01       	movw	r30, r16
 2a2:	81 81       	ldd	r24, Z+1	; 0x01
 2a4:	90 91 06 01 	lds	r25, 0x0106
 2a8:	91 70       	andi	r25, 0x01	; 1
 2aa:	d9 2e       	mov	r13, r25
 2ac:	90 93 06 01 	sts	0x0106, r25
 2b0:	89 2b       	or	r24, r25
 2b2:	81 83       	std	Z+1, r24	; 0x01
 2b4:	10 92 00 01 	sts	0x0100, r1
 2b8:	10 92 01 01 	sts	0x0101, r1
 2bc:	10 92 02 01 	sts	0x0102, r1
 2c0:	10 92 03 01 	sts	0x0103, r1
}

static void 
transparent_crc (uint64_t val, char* vname, int flag)
{
	crc32_8bytes(val);
 2c4:	29 e0       	ldi	r18, 0x09	; 9
 2c6:	30 e0       	ldi	r19, 0x00	; 0
 2c8:	40 e0       	ldi	r20, 0x00	; 0
 2ca:	50 e0       	ldi	r21, 0x00	; 0
 2cc:	60 e0       	ldi	r22, 0x00	; 0
 2ce:	70 e0       	ldi	r23, 0x00	; 0
 2d0:	80 e0       	ldi	r24, 0x00	; 0
 2d2:	90 e0       	ldi	r25, 0x00	; 0
 2d4:	0e 94 83 00 	call	0x106	; 0x106 <crc32_8bytes>
 2d8:	24 e9       	ldi	r18, 0x94	; 148
 2da:	30 e0       	ldi	r19, 0x00	; 0
 2dc:	40 e0       	ldi	r20, 0x00	; 0
 2de:	50 e0       	ldi	r21, 0x00	; 0
 2e0:	60 e0       	ldi	r22, 0x00	; 0
 2e2:	70 e0       	ldi	r23, 0x00	; 0
 2e4:	80 e0       	ldi	r24, 0x00	; 0
 2e6:	90 e0       	ldi	r25, 0x00	; 0
 2e8:	0e 94 83 00 	call	0x106	; 0x106 <crc32_8bytes>

/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_8
 */
 2ec:	9d 2d       	mov	r25, r13
 2ee:	99 0f       	add	r25, r25
 2f0:	99 0b       	sbc	r25, r25
 2f2:	2d 2d       	mov	r18, r13
 2f4:	39 2f       	mov	r19, r25
 2f6:	49 2f       	mov	r20, r25
 2f8:	59 2f       	mov	r21, r25
 2fa:	69 2f       	mov	r22, r25
 2fc:	79 2f       	mov	r23, r25
 2fe:	89 2f       	mov	r24, r25
 300:	0e 94 83 00 	call	0x106	; 0x106 <crc32_8bytes>
static int32_t * func_15(int8_t  p_16, int8_t  p_17, int32_t * p_18, int32_t  p_19)
{ /* block id: 5 */
    uint8_t l_24[7] = {0UL,0x8CL,0UL,0UL,0x8CL,0UL,0UL};
    int32_t *l_26 = (void*)0;
    int32_t *l_27 = &g_8;
 304:	f8 01       	movw	r30, r16
 306:	20 81       	ld	r18, Z
 308:	92 2f       	mov	r25, r18
 30a:	99 0f       	add	r25, r25
 30c:	99 0b       	sbc	r25, r25
 30e:	39 2f       	mov	r19, r25
 310:	49 2f       	mov	r20, r25
 312:	59 2f       	mov	r21, r25
 314:	69 2f       	mov	r22, r25
 316:	79 2f       	mov	r23, r25
 318:	89 2f       	mov	r24, r25
 31a:	0e 94 83 00 	call	0x106	; 0x106 <crc32_8bytes>
 31e:	20 91 05 01 	lds	r18, 0x0105
 322:	92 2f       	mov	r25, r18
 324:	99 0f       	add	r25, r25
 326:	99 0b       	sbc	r25, r25
 328:	39 2f       	mov	r19, r25
 32a:	49 2f       	mov	r20, r25
 32c:	59 2f       	mov	r21, r25
 32e:	69 2f       	mov	r22, r25
 330:	79 2f       	mov	r23, r25
 332:	89 2f       	mov	r24, r25
 334:	0e 94 83 00 	call	0x106	; 0x106 <crc32_8bytes>
 338:	20 e0       	ldi	r18, 0x00	; 0
 33a:	30 e0       	ldi	r19, 0x00	; 0
 33c:	40 e0       	ldi	r20, 0x00	; 0
 33e:	50 e0       	ldi	r21, 0x00	; 0
 340:	60 e0       	ldi	r22, 0x00	; 0
 342:	70 e0       	ldi	r23, 0x00	; 0
 344:	80 e0       	ldi	r24, 0x00	; 0
 346:	90 e0       	ldi	r25, 0x00	; 0
 348:	0e 94 83 00 	call	0x106	; 0x106 <crc32_8bytes>
 34c:	2f ef       	ldi	r18, 0xFF	; 255
 34e:	3f ef       	ldi	r19, 0xFF	; 255
 350:	4f ef       	ldi	r20, 0xFF	; 255
 352:	5f ef       	ldi	r21, 0xFF	; 255
 354:	6f ef       	ldi	r22, 0xFF	; 255
 356:	7f ef       	ldi	r23, 0xFF	; 255
 358:	8f ef       	ldi	r24, 0xFF	; 255
 35a:	9f ef       	ldi	r25, 0xFF	; 255
 35c:	0e 94 83 00 	call	0x106	; 0x106 <crc32_8bytes>
    (*l_27) = (((int8_t)p_17 - (int8_t)l_24[0]) || 0L);
    return &g_4[4][0];
}



 360:	80 91 07 01 	lds	r24, 0x0107
 364:	90 91 08 01 	lds	r25, 0x0108
 368:	a0 91 09 01 	lds	r26, 0x0109
 36c:	b0 91 0a 01 	lds	r27, 0x010A
 370:	80 95       	com	r24
 372:	90 95       	com	r25
 374:	a0 95       	com	r26
 376:	b0 95       	com	r27
}

static void platform_main_end(uint32_t crc, int flag);
static void platform_main_end(uint32_t crc, int flag)
{
	uint16_t crc16 = crc ^ (crc >> 16);
 378:	ad 01       	movw	r20, r26
 37a:	66 27       	eor	r22, r22
 37c:	77 27       	eor	r23, r23
 37e:	84 27       	eor	r24, r20
 380:	95 27       	eor	r25, r21
    } else if (__radix < 2 || __radix > 36) {
	*__s = 0;
	return __s;
    } else {
	extern char *__itoa_ncheck (int, char *, unsigned char);
	return __itoa_ncheck (__val, __s, __radix);
 382:	40 e1       	ldi	r20, 0x10	; 16
 384:	be 01       	movw	r22, r28
 386:	6f 5f       	subi	r22, 0xFF	; 255
 388:	7f 4f       	sbci	r23, 0xFF	; 255
 38a:	0e 94 02 02 	call	0x404	; 0x404 <__itoa_ncheck>
	 char str[17];
	 itoa(crc16, str, 16);
	 debug_puts("checksum = ");
 38e:	8b e0       	ldi	r24, 0x0B	; 11
 390:	91 e0       	ldi	r25, 0x01	; 1
 392:	0e 94 03 01 	call	0x206	; 0x206 <debug_puts>

	 debug_puts(str);
 396:	ce 01       	movw	r24, r28
 398:	01 96       	adiw	r24, 0x01	; 1
 39a:	0e 94 03 01 	call	0x206	; 0x206 <debug_puts>
	 debug_puts("\n");
 39e:	87 e1       	ldi	r24, 0x17	; 23
 3a0:	91 e0       	ldi	r25, 0x01	; 1
 3a2:	0e 94 03 01 	call	0x206	; 0x206 <debug_puts>

/* ---------------------------------------- */
 3a6:	80 e0       	ldi	r24, 0x00	; 0
 3a8:	90 e0       	ldi	r25, 0x00	; 0
 3aa:	61 96       	adiw	r28, 0x11	; 17
 3ac:	0f b6       	in	r0, 0x3f	; 63
 3ae:	f8 94       	cli
 3b0:	de bf       	out	0x3e, r29	; 62
 3b2:	0f be       	out	0x3f, r0	; 63
 3b4:	cd bf       	out	0x3d, r28	; 61
 3b6:	df 91       	pop	r29
 3b8:	cf 91       	pop	r28
 3ba:	1f 91       	pop	r17
 3bc:	0f 91       	pop	r16
 3be:	ff 90       	pop	r15
 3c0:	ef 90       	pop	r14
 3c2:	df 90       	pop	r13
 3c4:	cf 90       	pop	r12
 3c6:	08 95       	ret

000003c8 <__ashrdi3>:
 3c8:	97 fb       	bst	r25, 7
 3ca:	10 f8       	bld	r1, 0

000003cc <__lshrdi3>:
 3cc:	16 94       	lsr	r1
 3ce:	00 08       	sbc	r0, r0
 3d0:	0f 93       	push	r16
 3d2:	08 30       	cpi	r16, 0x08	; 8
 3d4:	98 f0       	brcs	.+38     	; 0x3fc <__lshrdi3+0x30>
 3d6:	08 50       	subi	r16, 0x08	; 8
 3d8:	23 2f       	mov	r18, r19
 3da:	34 2f       	mov	r19, r20
 3dc:	45 2f       	mov	r20, r21
 3de:	56 2f       	mov	r21, r22
 3e0:	67 2f       	mov	r22, r23
 3e2:	78 2f       	mov	r23, r24
 3e4:	89 2f       	mov	r24, r25
 3e6:	90 2d       	mov	r25, r0
 3e8:	f4 cf       	rjmp	.-24     	; 0x3d2 <__lshrdi3+0x6>
 3ea:	05 94       	asr	r0
 3ec:	97 95       	ror	r25
 3ee:	87 95       	ror	r24
 3f0:	77 95       	ror	r23
 3f2:	67 95       	ror	r22
 3f4:	57 95       	ror	r21
 3f6:	47 95       	ror	r20
 3f8:	37 95       	ror	r19
 3fa:	27 95       	ror	r18
 3fc:	0a 95       	dec	r16
 3fe:	aa f7       	brpl	.-22     	; 0x3ea <__lshrdi3+0x1e>
 400:	0f 91       	pop	r16
 402:	08 95       	ret

00000404 <__itoa_ncheck>:
 404:	bb 27       	eor	r27, r27
 406:	4a 30       	cpi	r20, 0x0A	; 10
 408:	31 f4       	brne	.+12     	; 0x416 <__itoa_ncheck+0x12>
 40a:	99 23       	and	r25, r25
 40c:	22 f4       	brpl	.+8      	; 0x416 <__itoa_ncheck+0x12>
 40e:	bd e2       	ldi	r27, 0x2D	; 45
 410:	90 95       	com	r25
 412:	81 95       	neg	r24
 414:	9f 4f       	sbci	r25, 0xFF	; 255
 416:	0c 94 0e 02 	jmp	0x41c	; 0x41c <__utoa_common>

0000041a <__utoa_ncheck>:
 41a:	bb 27       	eor	r27, r27

0000041c <__utoa_common>:
 41c:	fb 01       	movw	r30, r22
 41e:	55 27       	eor	r21, r21
 420:	aa 27       	eor	r26, r26
 422:	88 0f       	add	r24, r24
 424:	99 1f       	adc	r25, r25
 426:	aa 1f       	adc	r26, r26
 428:	a4 17       	cp	r26, r20
 42a:	10 f0       	brcs	.+4      	; 0x430 <__utoa_common+0x14>
 42c:	a4 1b       	sub	r26, r20
 42e:	83 95       	inc	r24
 430:	50 51       	subi	r21, 0x10	; 16
 432:	b9 f7       	brne	.-18     	; 0x422 <__utoa_common+0x6>
 434:	a0 5d       	subi	r26, 0xD0	; 208
 436:	aa 33       	cpi	r26, 0x3A	; 58
 438:	08 f0       	brcs	.+2      	; 0x43c <__utoa_common+0x20>
 43a:	a9 5d       	subi	r26, 0xD9	; 217
 43c:	a1 93       	st	Z+, r26
 43e:	00 97       	sbiw	r24, 0x00	; 0
 440:	79 f7       	brne	.-34     	; 0x420 <__utoa_common+0x4>
 442:	b1 11       	cpse	r27, r1
 444:	b1 93       	st	Z+, r27
 446:	11 92       	st	Z+, r1
 448:	cb 01       	movw	r24, r22
 44a:	0c 94 27 02 	jmp	0x44e	; 0x44e <strrev>

0000044e <strrev>:
 44e:	dc 01       	movw	r26, r24
 450:	fc 01       	movw	r30, r24
 452:	67 2f       	mov	r22, r23
 454:	71 91       	ld	r23, Z+
 456:	77 23       	and	r23, r23
 458:	e1 f7       	brne	.-8      	; 0x452 <strrev+0x4>
 45a:	32 97       	sbiw	r30, 0x02	; 2
 45c:	04 c0       	rjmp	.+8      	; 0x466 <strrev+0x18>
 45e:	7c 91       	ld	r23, X
 460:	6d 93       	st	X+, r22
 462:	70 83       	st	Z, r23
 464:	62 91       	ld	r22, -Z
 466:	ae 17       	cp	r26, r30
 468:	bf 07       	cpc	r27, r31
 46a:	c8 f3       	brcs	.-14     	; 0x45e <strrev+0x10>
 46c:	08 95       	ret

0000046e <_exit>:
 46e:	f8 94       	cli

00000470 <__stop_program>:
 470:	ff cf       	rjmp	.-2      	; 0x470 <__stop_program>
