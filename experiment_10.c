// 10.Program using switch case calculator
 
#include <stdio.h>
 int main(){
    int a,b;
    char op;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    printf("enter operator :");
    scanf(" %c",&op);

    switch(op){
        case '+' : printf("%d + %d = %d",a,b,a+b);break;
        case '-' : printf("%d - %d = %d",a,b,a-b);break;
        case '*' : printf("%d * %d = %d",a,b,a*b);break;
        case '/' : printf("%d / %d = %d",a,b,a/b);break;
        default : printf("invalid op !");
    }
    return 0;
}