// 2.Program to print name and age using printf()

#include <stdio.h>
int main(){
    int age;
    char name[20];
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter age:");
    scanf("%d",&age);
    printf("name : %s\n",name);
    printf("age : %d\n",age);
    return 0;
}
