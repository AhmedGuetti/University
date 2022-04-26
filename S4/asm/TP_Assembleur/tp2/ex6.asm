INCLUDE Irvine32.inc



.data
msg1 BYTE "Enter un nombre", 0


.code
main PROC
mov edx, OFFSET msg1
call WriteString
call ReadInt
cmp eax, 3
ja un

je eg

jmp none

none:
call WriteInt
jmp stop

un:
mov eax, 1
call WriteInt
jmp stop

eg:
mov eax, 0
call WriteInt

stop:
exit
main ENDP
END main
