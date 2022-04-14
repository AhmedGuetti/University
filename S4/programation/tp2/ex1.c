#include <stdio.h>
#include <math.h>

double distance(double xa, double ya, double xb, double yb){
	double disX = pow(xa - xb,2);
	double disY = pow(ya - yb,2);
	return sqrt(disX+disY);
}


int main(){
	double dis = distance(2,1,3,1);
	printf("%lf", dis);


return 0;
}
