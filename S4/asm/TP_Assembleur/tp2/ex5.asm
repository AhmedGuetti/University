INCLUDE Irvine32.inc



.data

msg BYTE "Enter un Entier", 0

.code 
main PROC
mov edx, OFFSET MSG
call WriteString 
call ReadInt

cmp eax, 3
jne cinq
call WriteInt

jmp stop

cinq:
mov eax, 5
call WriteInt


stop:



exit
main ENDP
END main
