INCLUDE Irvine32.inc



.data

msg1 BYTE "enter two numbers", 0
msg2 BYTE "The max is ", 0
.data?
a DWORD ??
B Dword ??

.code
main PROC

mov edx, OFFSET msg1
call WriteString 
call crlf
call ReadInt
mov ebx, eax
call ReadInt 
mov b, eax

cmp eax, ebx
jg greater
mov eax, ebx


greater:
mov edx, OFFSET msg2
call WriteString
call WriteInt

stop:


call ReadInt
exit
main ENDP
END main
