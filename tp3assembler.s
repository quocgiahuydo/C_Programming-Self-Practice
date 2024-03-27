	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 4
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	stp	x28, x27, [sp, #-32]!           ; 16-byte Folded Spill
	.cfi_def_cfa_offset 32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w27, -24
	.cfi_offset w28, -32
	sub	sp, sp, #1104
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	stur	x8, [x29, #-24]
	str	wzr, [sp, #68]
	str	w0, [sp, #64]
	str	x1, [sp, #56]
	ldr	w8, [sp, #64]
	subs	w8, w8, #2
	cset	w8, eq
	tbnz	w8, #0, LBB0_2
	b	LBB0_1
LBB0_1:
	ldr	x8, [sp, #56]
	ldr	x8, [x8]
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	mov	w0, #1
	bl	_exit
LBB0_2:
	ldr	x8, [sp, #56]
	ldr	x0, [x8, #8]
	adrp	x1, l_.str.1@PAGE
	add	x1, x1, l_.str.1@PAGEOFF
	bl	_fopen
	str	x0, [sp, #48]
	b	LBB0_3
LBB0_3:                                 ; =>This Inner Loop Header: Depth=1
	ldr	x2, [sp, #48]
	add	x0, sp, #72
	mov	w1, #1023
	bl	_fgets
	subs	x8, x0, #0
	cset	w8, eq
	tbnz	w8, #0, LBB0_13
	b	LBB0_4
LBB0_4:                                 ;   in Loop: Header=BB0_3 Depth=1
	mov	x9, sp
	add	x8, sp, #36
	str	x8, [x9]
	add	x8, sp, #44
	str	x8, [x9, #8]
	add	x8, sp, #40
	str	x8, [x9, #16]
	add	x0, sp, #72
	adrp	x1, l_.str.2@PAGE
	add	x1, x1, l_.str.2@PAGEOFF
	bl	_sscanf
	subs	w8, w0, #3
	cset	w8, ne
	tbnz	w8, #0, LBB0_6
	b	LBB0_5
LBB0_5:                                 ;   in Loop: Header=BB0_3 Depth=1
	ldr	w9, [sp, #36]
	ldr	w8, [sp, #44]
	lsl	w8, w8, #4
	orr	w8, w8, w9, lsl #6
	ldr	w9, [sp, #40]
	orr	w8, w8, w9, lsl #2
	mov	w9, #0
	orr	w8, w8, w9
	str	w8, [sp, #28]
	ldr	w9, [sp, #28]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	add	x8, sp, #72
	str	x8, [x9, #8]
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	b	LBB0_3
LBB0_6:                                 ;   in Loop: Header=BB0_3 Depth=1
	mov	x9, sp
	add	x8, sp, #36
	str	x8, [x9]
	add	x8, sp, #44
	str	x8, [x9, #8]
	add	x8, sp, #40
	str	x8, [x9, #16]
	add	x0, sp, #72
	adrp	x1, l_.str.4@PAGE
	add	x1, x1, l_.str.4@PAGEOFF
	bl	_sscanf
	subs	w8, w0, #3
	cset	w8, ne
	tbnz	w8, #0, LBB0_8
	b	LBB0_7
LBB0_7:                                 ;   in Loop: Header=BB0_3 Depth=1
	ldr	w9, [sp, #36]
	ldr	w8, [sp, #44]
	lsl	w8, w8, #4
	orr	w8, w8, w9, lsl #6
	ldr	w9, [sp, #40]
	orr	w8, w8, w9, lsl #2
	orr	w8, w8, #0x1
	str	w8, [sp, #28]
	ldr	w9, [sp, #28]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	add	x8, sp, #72
	str	x8, [x9, #8]
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	b	LBB0_3
LBB0_8:                                 ;   in Loop: Header=BB0_3 Depth=1
	mov	x9, sp
	add	x8, sp, #36
	str	x8, [x9]
	add	x8, sp, #44
	str	x8, [x9, #8]
	add	x8, sp, #40
	str	x8, [x9, #16]
	add	x0, sp, #72
	adrp	x1, l_.str.5@PAGE
	add	x1, x1, l_.str.5@PAGEOFF
	bl	_sscanf
	subs	w8, w0, #3
	cset	w8, ne
	tbnz	w8, #0, LBB0_10
	b	LBB0_9
LBB0_9:                                 ;   in Loop: Header=BB0_3 Depth=1
	ldr	w9, [sp, #36]
	ldr	w8, [sp, #44]
	lsl	w8, w8, #4
	orr	w8, w8, w9, lsl #6
	ldr	w9, [sp, #40]
	orr	w8, w8, w9, lsl #2
	orr	w8, w8, #0x2
	str	w8, [sp, #28]
	ldr	w9, [sp, #28]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	add	x8, sp, #72
	str	x8, [x9, #8]
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	b	LBB0_3
LBB0_10:                                ;   in Loop: Header=BB0_3 Depth=1
	mov	x9, sp
	add	x8, sp, #36
	str	x8, [x9]
	add	x8, sp, #32
	str	x8, [x9, #8]
	add	x0, sp, #72
	adrp	x1, l_.str.6@PAGE
	add	x1, x1, l_.str.6@PAGEOFF
	bl	_sscanf
	subs	w8, w0, #2
	cset	w8, ne
	tbnz	w8, #0, LBB0_12
	b	LBB0_11
LBB0_11:                                ;   in Loop: Header=BB0_3 Depth=1
	ldr	w9, [sp, #36]
	ldr	w8, [sp, #32]
	lsl	w8, w8, #2
	and	w8, w8, #0x3c
	orr	w8, w8, w9, lsl #6
	orr	w8, w8, #0x3
	str	w8, [sp, #28]
	ldr	w9, [sp, #28]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	add	x8, sp, #72
	str	x8, [x9, #8]
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	b	LBB0_3
LBB0_12:                                ;   in Loop: Header=BB0_3 Depth=1
	b	LBB0_3
LBB0_13:
	ldr	x0, [sp, #48]
	bl	_fclose
	ldr	w8, [sp, #68]
	str	w8, [sp, #24]                   ; 4-byte Folded Spill
	ldur	x9, [x29, #-24]
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	subs	x8, x8, x9
	cset	w8, eq
	tbnz	w8, #0, LBB0_15
	b	LBB0_14
LBB0_14:
	bl	___stack_chk_fail
LBB0_15:
	ldr	w0, [sp, #24]                   ; 4-byte Folded Reload
	add	sp, sp, #1104
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	ldp	x28, x27, [sp], #32             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Usage: %s filename.s\n"

l_.str.1:                               ; @.str.1
	.asciz	"r"

l_.str.2:                               ; @.str.2
	.asciz	" add r%d, r%d, r%d"

l_.str.3:                               ; @.str.3
	.asciz	"%02x : %s"

l_.str.4:                               ; @.str.4
	.asciz	" sub r%d, r%d, r%d"

l_.str.5:                               ; @.str.5
	.asciz	" mul r%d, r%d, r%d"

l_.str.6:                               ; @.str.6
	.asciz	" ldi r%d, %d"

.subsections_via_symbols
