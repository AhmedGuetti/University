#ifndef _CRYPT_H_
#define _CRYPT_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isCap(char msg);
char* crypt(char* message, int key);
char* decrypt(char* message, int key);


#endif