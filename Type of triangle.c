#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter length sides of triangle");
    scanf("%d %d %d", &a,&b,&c);
    if (a==b && b==c)
    {printf("Equilateral Triangle");}
    if (a==b || b==c)
    {printf("Iscosceles Triangle");}
    else 
    {printf("Scalene Triangle");}
    
    return 0;
}
    
