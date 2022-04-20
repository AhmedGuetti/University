INCLUDE Irvine32.inc
.data
message1 BYTE "c'est mon premier programme assembleur", 0
message2 BYTE "c'est parfait", 0
.code
main PROC
mov edx, OFFSET message1
call WriteString
call Crlf
mov edx,OFFSET message2
call WriteString
exit ;
main ENDP
END main
