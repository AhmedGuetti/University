INCLUDE Irvine32.inc

.data
msg BYTE "Enter un nombre", 0
m1  BYTE "Le qotion est : ", 0
m2  BYTE "le rest est : ",0

.data?
a DWORD ?
b DWORD ?

.code
main PROC
mov edx ,OFFSET msg
call WriteString
call crlf

call ReadInt
mov a, eax

call ReadInt 
mov b, eax
mov a, ecx
mov edx, 0
div ecx
mov ebx, edx
mov edx, OFFSET m1
call WriteString
call WriteInt
call crlf

mov edx, OFFSET m2
call WriteString
mov eax, ebx
call WriteInt
call crlf 



exit
main ENDP
END main
