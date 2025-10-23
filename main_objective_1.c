#include <stdio.h>
#include "objective_1.h"

int main(){

    int input_val;
    int menu_opt;

    do {
        printf("\n===== MENU =====\n1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n3. Check Prime Palindrome Number\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &menu_opt);

        if (menu_opt == 4) {
            printf("Exiting program. Goodbye!\n");
            break;
        }
        
        printf("Enter a number: ");
        scanf("%d", &input_val);

        switch (menu_opt) {

            case 1:
                if (checkArmstrong(input_val)) printf("%d is an Armstrong number.\n", input_val);
                else printf("%d is NOT an Armstrong number.\n", input_val);
                break;

            case 2:
                if (checkAdams(input_val)) {
                    printf("%d is an Adams number.\n", input_val);
                } else {
                    printf("%d is NOT an Adams number.\n", input_val);
                }
                break;
            
            case 3:
                if (checkPrimePalindrome(input_val)) {
                    printf("%d is a Prime Palindrome number.\n", input_val);
                } else {
                    printf("%d is NOT a Prime Palindrome number.\n", input_val);
                }
                break;

            default:
                printf("Invalid choice! Please select between 1–4.\n");

        }

    } while (menu_opt != 4);

    return 0;
}

