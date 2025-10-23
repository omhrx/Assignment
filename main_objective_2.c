#include <stdio.h>
#include "objective_2.h"

int main(){
    int how_many_numbers;
    int choice;
    int search_num;

    do {
        printf("\n<<<<< ARRAY MENU >>>>>\n");
        printf(" 1. Find index of biggest number\n");
        printf(" 2. Find index of smallest number\n");
        printf(" 3. Get the average\n");
        printf(" 4. Print the array\n");
        printf(" 5. Reverse the array\n");
        printf(" 6. Sort the array\n");
        printf(" 7. Find a number\n");
        printf(" 8. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 8) {
            printf("Goodbye!\n");
            break;
        }
        if(choice > 8 || choice < 1){
            printf("Wrong choice, try again.\n");
            continue;
        }
        
        printf("How many numbers in the array? ");
        scanf("%d", &how_many_numbers);

        int user_numbers[how_many_numbers];
        printf("Enter the numbers: ");
        for(int i = 0; i < how_many_numbers; i++) {
            scanf("%d", &user_numbers[i]);
        }

        switch (choice) {
            case 1: {
                int position = findMaxNumberIndex(user_numbers, how_many_numbers);
                printf("\nBiggest number %d is at index %d\n", user_numbers[position], position);
                break;
            }
            case 2: {
                int position = findMinNumberIndex(user_numbers, how_many_numbers);
                printf("\nSmallest number %d is at index %d\n", user_numbers[position], position);
                break;
            }
            case 3: {
                float average = getAverage(user_numbers, how_many_numbers);
                printf("\nThe average is: %f\n", average);
                break;
            }
            case 4:{
                printArray(user_numbers, how_many_numbers);
                break;
            }
            case 5: {
                reverseTheArray(user_numbers, how_many_numbers);
                printArray(user_numbers, how_many_numbers);
                break;
            }
            case 6: {
                sortMyArray(user_numbers, how_many_numbers);
                printArray(user_numbers, how_many_numbers);
                break;
            }
            case 7: {
                printf("Enter number to find: ");
                scanf("%d", &search_num);
                int result_index = searchForNumber(user_numbers, how_many_numbers, search_num);
                if(result_index != -1){
                    printf("\nFound %d at index %d\n", search_num, result_index);
                }else{
                    printf("\nDid not find %d.\n", search_num);
                }
                break;
            }
        }
    } while (choice != 8);

    return 0;
}
