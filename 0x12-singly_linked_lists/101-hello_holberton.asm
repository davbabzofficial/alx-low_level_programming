SECTION .data
msg:		db "Hello Holberton", 0
fmt:		db "%s", 10 0

	SECTION .TEXT
	extern printf
	global main

main:
	mov esi, mgs
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
