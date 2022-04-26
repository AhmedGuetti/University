INCLUDE Irvine32.inc



.data
msg BYTE "Entrer un entier", 0

.data?
n DWORD ??

.code
main PROC

mov edx, OFFSET msg
call WriteString
call ReadInt
mov n, eax

mov ebx, 0
deb:
	cmp ebx, n
	jae fin
	mov eax, ebx
	inc ebx	
	call WriteInt
	call crlf
	jmp deb
fin:

exit
main ENDP
END main

