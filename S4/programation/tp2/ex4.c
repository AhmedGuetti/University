#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isCap(char msg){
	if(msg >= 'a' && msg <= 'z'){
		return 0;
	}else if(msg >= 'A' && msg <= 'Z'){
		return 1;
	}
	return 2;
}


char* crypt(char* message){
	char* msg = (char*)malloc(strlen(message)*sizeof(char));
	strcpy(msg, message);
	int i=0;
	while(msg[i] != '\0'){
		if( isCap(msg[i]) == 0){
			msg[i] = ((msg[i]+5) - 'a')%26+'a';
			//if((msg[i] > 'z' && isCap(msg[i]-5) == 0)  || msg[i] > 'Z' && isCap(msg[i]-5) == 1){
			//	msg[i] -= 26;
			//}
		}
		else if(isCap(msg[i]) == 1){
			 msg[i] = ((msg[i]+5) - 'A')%26+'A';
		}
		++i;
	}
	return msg;
}

char* decrypt(char* message){
	char* msg = (char*)malloc(strlen(message)*sizeof(char));
	strcpy(msg, message);
	int i=0;
	while(msg[i] != '\0'){
		if( isCap(msg[i]) == 0){
			msg[i] = (msg[i]-5) ;
			if(msg[i] - 'a'< 0){
				 msg[i] += 26;
			 }
			//if((msg[i] > 'z' && isCap(msg[i]-5) == 0)  || msg[i] > 'Z' && isCap(msg[i]-5) == 1){
			//	msg[i] -= 26;
			//}
		}
		else if(isCap(msg[i]) == 1){
			 msg[i] = (msg[i]-5);
			 if(msg[i]  - 'A'< 0){
				 msg[i] += 26;
			 }
		}
		++i;
	}
	return msg;
}



int main(){

	char message[] = "Hello this message will be encrypted XYZ";
	char* encrypted = crypt(message);
	printf("%s \n", message);
	printf("%s \n", encrypted);
	char* decryp = decrypt(encrypted);
	printf("%s \n", decryp);

	// 26 letter in english
	return 0;
}
