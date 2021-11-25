#include <stdio.h>
float main(){
    float p,r,t,d;
    printf("Enter principle amount=");
    scanf("%f",&p);
    printf("Enter rate of interest=");
    scanf("%f",&r);
    printf("Enter time =");
    scanf("%f",&t);
    d=(p*r*t)/100;
    printf("Simple Interest= %f",d);
    return 0;
}