section .text
	extern printf			;decalare printf
	global main			;the main entry point

main:
	mov  edi, msg			; syscall number for write
	mov eax, 0			; filr descriptor 1
	call printf			
section 	.data
	msg db 'Hello, Holberton', 0xa, 0
