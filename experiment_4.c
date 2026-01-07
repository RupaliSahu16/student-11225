// 4.Program to find largest of two numbers

#include<stdio.h>
int main(){
    int a,b,largest;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    if(a>b)largest=a;
    if(a<b)largest=b;
    if(a=b)largest=a;
        

    printf("largest = %d",largest);
    return 0;


}