// 18.Program to find sum of elements of 2D array

#include <stdio.h>
int main(){
    int n,m,sum=0;
    printf("enter no. of elements in array :");
    scanf("%d",&n);
    printf("enter no. of elements inside one element array :");
    scanf("%d",&m);
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            sum+=a[i][j];
        }
    }
    printf("sum of elements is %d",sum);
    return 0;




}
