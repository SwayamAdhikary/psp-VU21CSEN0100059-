#include <stdio.h>
#include <math.h>
int main(){
    float p,t,r;
    printf("Enter Principle value=");
    scanf("%f",&p);
    printf("Enter Time=");
    scanf("%f",&t);
    printf("Enter Rate of interest = ");
    scanf("%f",&r);
    printf("Compund interest=%.2f",p*(pow(1+r/100, t)-1));
    return 0;
}
