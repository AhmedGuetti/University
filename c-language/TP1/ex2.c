#include <stdio.h>
#include <stdlib.h>

/*Exercice 2 TP1 */
int main() {
	
	// Variables Declaration
	int n,m,k1,k2;

	
	printf("Donnez la valeur de n puis a m : \n");
	scanf("%d", &n);
	scanf("%d", &m);
	
	//Division
	k1 = n/m;
	printf("la division de n = %d par m = %d est k1 = %d \n",n,m,k1);
	
	//Modules
	k2 = n%m;
	printf("la division de n = %d par m = %d a un rest k2 = %d \n",n,m,k2);
	printf("Le premiere entier est : %d \t Le duxieme entier est : %d \n",n,m);
	printf("La division entier est : %d \t Le rest de la division est : %d \n",k1,k2);
	
	

	getch();
}
