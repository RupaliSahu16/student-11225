// 15.Program for linear search

#include <stdio.h>

int main() {

    int a[5], i, key;

    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    
    printf("enter element to search :");
    scanf("%d", &key);
    

    for (i = 0; i < 5; i++) {
        if (a[i] == key) {
            printf("Element found at position %d", i + 1);
            break;
        }
    }

    if (i == 5)
        printf("Element not found");
    else
        return 0;

    return 0;
}
