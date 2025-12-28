// menu driven scientific calculator 

#include <stdio.h>

int main() {
    int choice;
    char again;

    while (1) { 

        printf("\nOperations you can perform:\n");
        printf("1. Square\n");
        printf("2. Cube\n");
        printf("3. Power\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        int n;
        printf("Enter number: ");
        scanf("%d", &n);

        switch (choice) {

            case 1:
                printf("Square = %d\n", n * n);
                break;

            case 2:
                printf("Cube = %d\n", n * n * n);
                break;

            case 3: {
                int p;
                printf("Enter the power: ");
                scanf("%d", &p);

                int power = 1;
                for (int i = 1; i <= p; i++) {
                    power *= n;
                }

                printf("Power = %d\n", power);
                break;
            }

            default:
                printf("Invalid operation\n");
        }

        printf("\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &again);  

        if (again != 'y' && again != 'Y') {
            break;  
        }
    }

    printf("\nThank you for using the calculator :)\n");
    return 0;
}
