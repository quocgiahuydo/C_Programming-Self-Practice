	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 4
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3, 0x0                          ; -- Begin function main
lCPI0_0:
	.quad	0x40091eb851eb851f              ; double 3.1400000000000001
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #144
	.cfi_def_cfa_offset 144
	stp	x29, x30, [sp, #128]            ; 16-byte Folded Spill
	add	x29, sp, #128
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	stur	x8, [x29, #-8]
	stur	wzr, [x29, #-28]
	mov	w8, #5
	stur	w8, [x29, #-32]
	mov	w8, #10
	stur	w8, [x29, #-36]
	mov	w8, #15
	stur	w8, [x29, #-40]
	adrp	x8, l___const.main.arr@PAGE
	add	x8, x8, l___const.main.arr@PAGEOFF
	ldr	x9, [x8]
	stur	x9, [x29, #-24]
	ldr	w8, [x8, #8]
	stur	w8, [x29, #-16]
	adrp	x8, l___const.main.array@PAGE
	add	x8, x8, l___const.main.array@PAGEOFF
	ldrh	w9, [x8]
	sturh	w9, [x29, #-44]
	ldrb	w8, [x8, #2]
	sturb	w8, [x29, #-42]
	adrp	x8, l___const.main.string@PAGE
	add	x8, x8, l___const.main.string@PAGEOFF
	ldr	w9, [x8]
	stur	w9, [x29, #-52]
	ldrh	w8, [x8, #4]
	sturh	w8, [x29, #-48]
	ldur	s1, [x29, #-32]
                                        ; implicit-def: $d0
	fmov	s0, s1
	sshll.2d	v0, v0, #0
                                        ; kill: def $d0 killed $d0 killed $q0
	scvtf	d0, d0
	adrp	x8, lCPI0_0@PAGE
	ldr	d1, [x8, lCPI0_0@PAGEOFF]
	str	d1, [sp, #48]                   ; 8-byte Folded Spill
	fmul	d0, d0, d1
	fcvt	s0, d0
	stur	s0, [x29, #-56]
	ldur	s0, [x29, #-56]
	fcvt	d0, s0
	mov	x8, sp
	str	d0, [x8]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	ldr	d0, [sp, #48]                   ; 8-byte Folded Reload
	ldur	w8, [x29, #-32]
                                        ; implicit-def: $x11
	mov	x11, x8
	ldur	w8, [x29, #-36]
                                        ; implicit-def: $x10
	mov	x10, x8
	ldur	w8, [x29, #-40]
                                        ; implicit-def: $x9
	mov	x9, x8
	ldur	s1, [x29, #-56]
	fcvt	d1, s1
	mov	x8, sp
	str	x11, [x8]
	str	x10, [x8, #8]
	str	x9, [x8, #16]
	str	d1, [x8, #24]
	str	d0, [x8, #32]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	stur	wzr, [x29, #-60]
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldur	w8, [x29, #-60]
	subs	w8, w8, #3
	cset	w8, ge
	tbnz	w8, #0, LBB0_4
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldursw	x9, [x29, #-60]
	sub	x8, x29, #24
	ldr	w9, [x8, x9, lsl #2]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	b	LBB0_3
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-60]
	add	w8, w8, #1
	stur	w8, [x29, #-60]
	b	LBB0_1
LBB0_4:
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	ldur	w0, [x29, #-32]
	ldur	w1, [x29, #-36]
	ldur	w2, [x29, #-40]
	bl	_findmax
	adrp	x8, _max@PAGE
	str	w0, [x8, _max@PAGEOFF]
	ldr	w9, [x8, _max@PAGEOFF]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.4@PAGE
	add	x0, x0, l_.str.4@PAGEOFF
	bl	_printf
	mov	w8, #100
	str	w8, [sp, #64]
	ldr	w9, [sp, #64]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.5@PAGE
	add	x0, x0, l_.str.5@PAGEOFF
	bl	_printf
	mov	w8, #10
	str	w8, [sp, #60]
	ldr	w8, [sp, #64]
	ldr	w9, [sp, #60]
	add	w8, w8, w9
	str	w8, [sp, #64]
	ldur	w9, [x29, #-32]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.6@PAGE
	add	x0, x0, l_.str.6@PAGEOFF
	bl	_printf
	ldur	x9, [x29, #-8]
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	subs	x8, x8, x9
	cset	w8, eq
	tbnz	w8, #0, LBB0_6
	b	LBB0_5
LBB0_5:
	bl	___stack_chk_fail
LBB0_6:
	mov	w0, #0
	ldp	x29, x30, [sp, #128]            ; 16-byte Folded Reload
	add	sp, sp, #144
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_findmax                        ; -- Begin function findmax
	.p2align	2
_findmax:                               ; @findmax
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #8]
	str	w1, [sp, #4]
	str	w2, [sp]
	ldr	w8, [sp, #8]
	ldr	w9, [sp, #4]
	subs	w8, w8, w9
	cset	w8, lt
	tbnz	w8, #0, LBB1_3
	b	LBB1_1
LBB1_1:
	ldr	w8, [sp, #8]
	ldr	w9, [sp]
	subs	w8, w8, w9
	cset	w8, lt
	tbnz	w8, #0, LBB1_3
	b	LBB1_2
LBB1_2:
	ldr	w8, [sp, #8]
	str	w8, [sp, #12]
	b	LBB1_7
LBB1_3:
	ldr	w8, [sp, #4]
	ldr	w9, [sp]
	subs	w8, w8, w9
	cset	w8, lt
	tbnz	w8, #0, LBB1_6
	b	LBB1_4
LBB1_4:
	ldr	w8, [sp, #4]
	ldr	w9, [sp, #8]
	subs	w8, w8, w9
	cset	w8, lt
	tbnz	w8, #0, LBB1_6
	b	LBB1_5
LBB1_5:
	ldr	w8, [sp, #4]
	str	w8, [sp, #12]
	b	LBB1_7
LBB1_6:
	ldr	w8, [sp]
	str	w8, [sp, #12]
	b	LBB1_7
LBB1_7:
	ldr	w0, [sp, #12]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_max                            ; @max
.zerofill __DATA,__common,_max,4,2
	.section	__TEXT,__const
	.p2align	2, 0x0                          ; @__const.main.arr
l___const.main.arr:
	.long	1                               ; 0x1
	.long	2                               ; 0x2
	.long	3                               ; 0x3

l___const.main.array:                   ; @__const.main.array
	.ascii	"Abd"

	.section	__TEXT,__cstring,cstring_literals
l___const.main.string:                  ; @__const.main.string
	.asciz	"CS120"

l_.str:                                 ; @.str
	.asciz	"x = %f\n"

l_.str.1:                               ; @.str.1
	.asciz	"a = %d, b = %d, c = %d, x = %f, Pi = %f\n"

l_.str.2:                               ; @.str.2
	.asciz	"%d "

l_.str.3:                               ; @.str.3
	.asciz	"\n"

l_.str.4:                               ; @.str.4
	.asciz	"max = %d\n"

l_.str.5:                               ; @.str.5
	.asciz	"a in inner-scope = %d\n"

l_.str.6:                               ; @.str.6
	.asciz	"a in outer-scope = %d\n"

.subsections_via_symbols
