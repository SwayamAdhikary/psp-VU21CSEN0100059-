#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number =");
    scanf("%d",&a);
    if (a%5==0 || a%11==0)
    printf("%d Divisible",a);
    else
    printf("Not divisible");
}
