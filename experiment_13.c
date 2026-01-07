// 13.Program demonstrating break and continue

#include <stdio.h>

int main() {

    int attempt;
    int password = 1234;
    int entered;

    for (attempt = 1; attempt <= 5; attempt++) {

        printf("Attempt %d - Enter password: ", attempt);
        scanf("%d", &entered);

        if (entered != password) {
            printf("Wrong password. Try again.\n");
            continue;
        }

        printf("Login successful!\n");
        break;
    }

    return 0;
}
