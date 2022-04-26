#include <stdio.h>
#include "stack.h"
#include "stackchar.h"



int balencebracket(Stackchar* SR,char* token){
    int i = 0;
    char top;
    while(token[i] != '\0'){

        if(token[i] == '(' ||token[i] == '[' ||token[i] == '{')
            Empilerchar(SR, token[i]);

        if(token[i] == ')'){
            top = SR->head->data;
            Depilerchar(SR);
            if(top == '{' || top == '[')
                return -1;
        }


        else if(token[i] == ']'){
            top = SR->head->data;
            Depilerchar(SR);
            if(top == '{' || top == '(')
                return -1;
        }       
            
            else if(token[i] == '}'){
                top = SR->head->data;
                Depilerchar(SR);
                if(top == '(' || top == '[')
                    return -1;
            }
        
        ++i;
    }
            if(SR->size == 0) return 0;
            return -1;
}


int main(){

    Stackchar* Sdet = initStackchar();
    char* test = "{(x+1)/2]}+[2]";
    
    int isOk = balencebracket(Sdet,test);
    if(!isOk){
        printf("SYNTAX OK");
    }else{
        printf("SNTAX DUMP");
    }



   


return 0;


}