#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "crypt.h"

int isCap(char msg){
	if(msg >= 'a' && msg <= 'z'){
		return 0;
	}else if(msg >= 'A' && msg <= 'Z'){
		return 1;
	}
	return 2;
}


char* crypt(char* message, int key){
	char* msg = (char*)malloc(strlen(message)*sizeof(char));
	strcpy(msg, message);
	int i=0;
	while(msg[i] != '\0'){
		if( isCap(msg[i]) == 0){
			msg[i] = ((msg[i]+key) - 'a')%26+'a';
			//if((msg[i] > 'z' && isCap(msg[i]-5) == 0)  || msg[i] > 'Z' && isCap(msg[i]-5) == 1){
			//	msg[i] -= 26;
			//}
		}
		else if(isCap(msg[i]) == 1){
			 msg[i] = ((msg[i]+key) - 'A')%26+'A';
		}
		++i;
	}
	return msg;
}

char* decrypt(char* message, int key){
	char* msg = (char*)malloc(strlen(message)*sizeof(char));
	strcpy(msg, message);
	int i=0;
	while(msg[i] != '\0'){
		if( isCap(msg[i]) == 0){
			msg[i] = (msg[i]-key) ;
			if(msg[i] - 'a'< 0){
				 msg[i] += 26;
			 }
		}
		else if(isCap(msg[i]) == 1){
			 msg[i] = (msg[i]-key);
			 if(msg[i]  - 'A'< 0){
				 msg[i] += 26;
			 }
		}
		++i;
	}
	return msg;
}