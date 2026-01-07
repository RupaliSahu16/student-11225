// 19.Program using string functions (strlen, strcpy, strcat, strcmp)

#include <stdio.h>
#include <string.h>

int main(){

    char s1[50] = "Hello";
    char s2[50] = "World";
    char s3[50];

    printf("Length of s1: %lu\n", strlen(s1));

    strcpy(s3, s1);
    printf("After strcpy, s3: %s\n", s3);

    strcat(s1, s2);
    printf("After strcat, s1: %s\n", s1);

    if(strcmp(s2, s3) == 0)
        printf("s2 and s3 are equal\n");
    else
        printf("s2 and s3 are not equal\n");

    return 0;
}
