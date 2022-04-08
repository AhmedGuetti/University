#include <stdio.h>
#include <math.h>

/*Exercice 2 TP1 */
int main() {
	
	// Variables Declaration
	int x,y,z;


	//	Taking input from the user
	printf("Donnez la valeur de x : \n");
	scanf("%d", &x);

	printf("Donnez la valeur de y : \n");
	scanf("%d", &y);
	
	printf("Donnez la valeur de z : \n");
	scanf("%d", &z);
	
	//result
	float result;
	// Termes

	float a = z+8;
	float b = x -3;
	float c = (z-4) * (x - y +6);
	

	if(a<=0 || b<0 ||c == 0){
		printf("Impossible de calculer le resultat");
	}
	else{
		
	result = (  pow(x,2)*sqrt(a) + pow(pow(y,2)-9, 2)  + log(b) + sin(x+4*z)) / (c);
	printf("Le resultat est : %d", result);
	
	}
	
	return 0;
}
