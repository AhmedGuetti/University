#include <stdio.h>
#include "stack.h"


int main(){
    Stack* S = initStack();
    Empiler(S,4);
    Empiler(S,8);
    Empiler(S,2);
    Empiler(S,1);
    Afficher(S);


    Depiler(S);
    Depiler(S);
    Depiler(S);
    Afficher(S);

    
    Vider(S);
    Afficher(S);
return 0;


}