include Irvine32.inc
.code
salut:
mov bx, 14
movzx eax, bx
call dumpregs ;affiche le contenu des registres
exit
end salut


  ;EAX=0000000E  EBX=0027000E  ECX=00401000  EDX=00401000
  ;ESI=00401000  EDI=00401000  EBP=0019FF84  ESP=0019FF78
  ;EIP=0040100C  EFL=00000246  CF=0  SF=0  ZF=1  OF=0
