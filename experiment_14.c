// 14.Program for 1D array input/output

#include <stdio.h>

int main() {
    int score[3], i;

    for(i = 0; i < 3; i++)
        scanf("%d", &score[i]);

    for(i = 0; i < 3; i++)
        printf("Score %d: %d\n", i + 1, score[i]);

    return 0;
}
