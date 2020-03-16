.cstring
_hello:	 .asciz "Hello, Holberton\n"

	.text
	.globl _main
_main:
	    sub  $8, %rsp
	    mov  $0, %rax
	    lea  _hello(%rip), %rdi
	    call _printf
	    add  $8, %rsp
	    ret
