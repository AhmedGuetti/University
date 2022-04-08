#include<stdio.h>


int main(int argc, char **argv){
    int n;
    printf("Enter la taille de T: \n");
    scanf("%d",&n);

    float T[n];
    //Lire un tableaux
    for(float* p=T;p<T+n;p++) scanf("%f",p);

    //Afficher un tableaux
    for(float* p=T; p<T+n; p++) printf("%.2f ", *p);

    
    printf("\n");

    float *max, *min, temp;
    max = T;
    min = T;
    for(float* p=T; p<T+n; p++){
        if(*max > *p) max = p;        
        if(*min < *p) min = p;      
    }
    temp = *max;
    *max = *min;
    *min = temp;

    printf("min = %f et max = %f\nmax_idx = %d et min_idx = %d \n",*max,*min,max - T, min -T);

        //Afficher un tableaux
    for(float* p=T; p<T+n; p++) printf("%.2f ", *p);
    printf("\n");

    float sum = 0.0f;
    for(float* p=T; p<T+n; p++){
        sum += *p;
    }
    printf("som = %.2f\n",sum);


    return 0;
}