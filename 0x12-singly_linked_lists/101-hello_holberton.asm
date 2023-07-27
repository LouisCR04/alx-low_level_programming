global _start

section .text

_start:
	mov rax, 1	;Sys call is put in rax-write(

;arguments are put in registers rdi, rsi, rdx, rcx & r9 in that order
;syscall for write is 1, exit is 60(Linux 64-bit sys call table

	mov rdi, 1	; STDOUT_FILENO

	mov rsi, msg	; The string to write

	mov rdx, msglen	; Size of the string

	syscall


	mov rax, 60	; exit(

	mov rdi, 0	; exit successful

	syscall


	section .rodata	; Read only data, string contained in msg

	msg: db "Hello, Holberton", 10
;data byte (db) defines a sequence of bytes in memory, representing the string
;"Hello, Holberton" followed by a newline character
;(represented by the ASCII value 10)

	msglen: equ $ -msg
