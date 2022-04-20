INCLUDE Irvine32.inc
.data
message BYTE "entere un entier "


.code
main PROC



mov edx,OFFSET message
call WriteString ;edx 

call ReadInt   ;eax
call WriteInt  ;eax


main ENDP
END main
