#include <stdio.h>
#include "objective_2.h"

void sortMyArray(int my_arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (my_arr[j] > my_arr[j + 1]) {
                temp = my_arr[j];
                my_arr[j] = my_arr[j + 1];
                my_arr[j + 1] = temp;
            }
        }
    }
}

int searchForNumber(int arr[], int len, int num){
    int i = 0;
    while(i < len) {
        if (arr[i] == num) {
            return i;
        }
        i++;
    }
    return -1;
}

int findMaxNumberIndex(int array[], int count){
    int max_num = array[0];
    int max_index = 0;
    int i = 1;

    while (i < count) {
        if (array[i] > max_num) {
            max_num = array[i]; 
            max_index = i;
        }
        i++;
    }

    return max_index;
}

void printArray(int the_array[], int array_size){
    printf("\nThe Array: [ ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", the_array[i]);
    }
    printf("]\n");
}


float getAverage(int numbers[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + numbers[i];
    }
    float avg = (float)sum / size;
    return avg;
}


int findMinNumberIndex(int my_list[], int length){
    int min_val = my_list[0];
    int min_pos = 0;

    for (int i = 1; i < length; i++) {
        if (my_list[i] < min_val) {
            min_val = my_list[i]; 
            min_pos = i;
        }
    }
    return min_pos;
}

void reverseTheArray(int list[], int s) {
    int start = 0;
    int end = s - 1;
    int t;

    while (start < end) {
        t = list[start];
        list[start] = list[end];
        list[end] = t;

        start++;
        end--;
    }
}
