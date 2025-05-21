	lw	0	1	a
	lw	0	2	b
	lw	4	5	four
	nor	5	2	6	r6 = nor(b,r5)
	nor	6	6	6	r6 = nor(r6,r6) = or(b,r5)
	add	1	3	7	r7 = r1 + r3
	sw	7	6	twelve	r6 = mem[r7 + 12]
a	.fill	a	
b	.fill	b
four	.fill	4
twelve	.fill	12
