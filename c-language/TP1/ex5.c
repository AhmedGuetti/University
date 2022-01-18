#include <stdio.h>
#include <math.h>

/*Exercice 2 TP1 */
int main() {
	
	// Variables Declaration
	char flag;
	

		printf("Enter un character \n");
		scanf("%c", &flag);
		
		
		switch(flag){
		case 'c':
			printf("continue \n");
			break;
		case 's':
			printf("stop \n");
			break;
		case 'r':
			printf("recommencer \n");
			break;
		case 'a':
			printf("annuler \n");
			break;
			
		default:
			printf("invalide charater  \n");
		}
		
		
	
	
	
	

	return 0;
}
