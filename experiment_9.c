// 9.Program to find maximum of three numbers

#include <stdio.h>
int main(){
    int a,b,c,largest;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    printf("enter third number : ");
    scanf("%d",&c);
    
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
        
    printf("largest number is %d", largest);
    return 0;

}