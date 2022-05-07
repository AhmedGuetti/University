#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define   f(x)  pow(x,3)-2*pow(x,2)-5
#define   g(x)  3*x*x - 4*x

int main(){

	float x0;
	printf("Enter initial guess \n"); scanf("%e", &x0);

	float e;
	printf("Enter error tolorent \n"); scanf("%e", &e);

	int N;
	printf("Enter max number of iteration \n"); scanf("%d", &N);

	float x1;
	float f,f1,g;
	for(int i=0;i<N;++i){
		f = f(x0);
		g = g(x0);
		if(g == 0.0 || x0 == 0.0) break;
		x1 = x0 - (f/g);
		printf("%d\t%lf\t%lf\t%lf\t%lf\n",i,x0,f,x1,f(x1));
		if(fabs(x1-x0) < e){
			break;
		}
	x0 = x1;
	}
	printf("the root is %lf", x1);

	return 0;
}