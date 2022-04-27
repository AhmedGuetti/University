#include <stdio.h>
#include "file.h"



int main(){

File* f = (File*)malloc(sizeof(File));
initFile(f);
Emfiler(f, 21);
Emfiler(f, 232);
Emfiler(f, 45);
Emfiler(f, 76);
Afficher(f);
int b = Defiler(f);
Afficher(f);
printf("The deleted item is : %d",b);
return 0;
}