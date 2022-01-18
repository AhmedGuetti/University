#include <stdio.h>



int main(int argc, char **argv){

    int i = 3;
    int *p;
    int *q;
    printf("addresse(i) = 0x%x \n",&i);
    printf("p = 0x%x \n",p);
    printf("q = 0x%x \n",q);

    //*p = i; Segmentation fault
    p = &i;    //a quick fix

    
    printf("p = 0x%x  *p = %d  i = %d \n",p,*p,i);

    *p = 15;
    printf("p = 0x%x  *p = %d  i = %d \n",p,*p,i);

    i= 45;
    printf("p = 0x%x  *p = %d  i = %d \n",p,*p,i);

    /*
    On ne peut pas affecterun valeur a un pointeur a un addresse aleatoir on a un problem memoir

    *p = p et p = &i
    si on change *p la valeur de i change
    si on change i la valeur de *p change
    L'addresse de i reste le meme au tour de programme
    */


    p=&i;

    printf("p = 0x%x  *p = %d  i = %d \n",p,*p,i);

    *p = 2022;
    printf("p = 0x%x  *p = %d  i = %d \n",p,*p,i);

    i=-34;
    printf("p = 0x%x  *p = %d  i = %d \n",p,*p,i);

    q = p;

    printf("i = %d  *p = %d  *q = %d \n",i,*p,*q);

    printf("i = 0x%x *p = 0x%x  *q = 0x%x \n",&i,p,q);




    







    
    
    

    return 0;
}