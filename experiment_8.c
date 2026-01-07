// 8.Program to check odd or even number

#include <stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    if(n%2==0)printf("%d is Even number !",n);
    else printf("%d is odd number!",n);
    return 0;
}