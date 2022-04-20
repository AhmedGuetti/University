INCLUDE Irvine32.inc
.data
.code
main PROC
mov ax, 0FFh
inc ax
call dumpregs

; CF=1  SF=0  ZF=1  OF=0
; comme CF carry number set to 1 
; ZF set the addition return the value of al to 0  


; Q2
	; using add ax,1
  ;EAX=00190000  EBX=003C2000  ECX=00401005  EDX=00401005
  ;ESI=00401005  EDI=00401005  EBP=0019FF84  ESP=0019FF78
  ;EIP=0040101D  EFL=00000257  CF=1  SF=0  ZF=1  OF=0


	; using inc ax
  ;EAX=00190100  EBX=003C0000  ECX=00401005  EDX=00401005
  ;ESI=00401005  EDI=00401005  EBP=0019FF84  ESP=0019FF78
  ;EIP=0040101B  EFL=00000216  CF=0  SF=0  ZF=0  OF=0

exit
main ENDP
END main
