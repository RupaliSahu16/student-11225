// 12.Program to find sum of N natural numbers

#include <stdio.h>
int main(){
    int N,sum=0;
    printf("enter number :");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)sum+=i;
    printf("sum till %d are %d",N,sum);
    return 0;

}