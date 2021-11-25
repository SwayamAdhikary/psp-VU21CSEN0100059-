#include <stdio.h>
int main(){
    float basic,hra,da,pf,lic;
    printf("Enter all values here =");
    scanf("%f %f %f %f %f" , &basic ,&hra ,&da ,&pf ,&lic);
    printf("Total salary= %.2f", basic+hra+da+pf+lic);
}