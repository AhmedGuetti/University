#include <stdio.h>
#include <math.h>

/*Exercice 2 TP1 */
int main() {
	
	// Variables Declaration
	double a,b,c;

	
	
	
	//	Taking input from the user
	printf("Donnez la valeur de a : \n");
	scanf("%d", &a);

	printf("Donnez la valeur de b : \n");
	scanf("%d", &b);
	
	printf("Donnez la valeur de c : \n");
	scanf("%d", &c);
	
	//Calculate delta
	double delta = pow(b,2) - (4*a*c);
	double x1,x2;
	if(delta > 0){
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		
		printf("Les solution de %dx^2+%dx+%d = 0 est %d et %d \n",a,b,c,x1,x2);
	}
	else if(delta == 0){
		x1 =(-b)/(2*a);
		printf("Les solution de %dx^2+%dx+%d = 0 est %d \n",a,b,c,x1);
	}
	else{		
		printf("Les solution de %dx^2+%dx+%d = 0 est (%di+%d) et (%di-%d)%d \n",a,b,c, sqrt(-delta),(-b)/(2*a), -sqrt(-delta),(-b)/(2*a));
	}
	
	
	

	return 0;
}
