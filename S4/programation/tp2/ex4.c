#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* crypt(char* mesg){
	
	int lenght = strlen(mesg);
	char* message = (char*)malloc(lenght * sizeof(char));
	strcpy(message,mesg);
	for(int i=0;i< lenght; ++i){
		if(message[i] > "A" && message[i] < "Z"){
			message[i] = message[i]+5 % 26;
		}else if(message[i] > "a" && message[i] < "z"){
		
		}

		++i;
	}
	return message;
}

int main(){

	char* message = "Hello this message will be encrypted";
	char* encrypted = crypt(message);
	message[1] = message[1] +4;
	printf("%s \n", message);
	printf("%s", encrypted);
	// 26 letter in english
	return 0;
}
