#include <stdio.h>
#include <math.h>


int main() {
	
	// Variables Declaration
	int a;
	float x , y;
	double z;
	
	// Working with a 
	printf("Donnez la valeur de a : \n");
	scanf("%d", &a);
	printf("la valeur et : %d \n", a);
	a = 15;
	printf("la valeur de : %d \n",a);
	a++;
	printf("la valeur de : %d \n",a);
	a = 4;
	a = a * a;
	printf("la valeur de : %d \n \n \n",a);
	
	//Working with x
	printf("donnez la valeur de x : \n");
	scanf("%f", &x);
	printf("la valeur de x est : %f\n", x);
	x = 2325.35;
	printf("la valeur de est : %f\n", x);
	
	//Working with y and z
	y = pow(x, 15);
	printf("la valeur de y est : %f\n", y);
	z = pow(x,15);
	printf("la valeur de z est %lf est aussi %e: \n", z,z);
	
	
	
	getch();
}
