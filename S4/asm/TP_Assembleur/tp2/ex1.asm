INCLUDE Irvine32.inc

.data
msg BYTE "Enter a value ", 0
ajo BYTE "La somme est : ", 0
tim BYTE "Le produie est : ", 0
.data?
a DWORD ?
B DWORD ?

.code
main PROC
mov edx, OFFSET msg
call WriteString
call ReadInt
mov a, eax
call WriteString
call crlf

call ReadInt 
mov b, eax
add eax,a
mov edx, OFFSET ajo
call WriteString
call WriteInt
call crlf


mov eax, b
mul a
mov edx, OFFSET tim
call WriteString
call WriteInt
call crlf


inc a
dec b

mov eax, a
add eax, b
mov edx, OFFSET ajo
call WriteString
call WriteInt
call crlf


mov eax, a
mul b
mov edx, OFFSET tim
call WriteString
call WriteInt
call crlf



call ReadInt
exit
main ENDP
END main



