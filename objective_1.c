#include "objective_1.h"
#include <stdio.h>


int flipInteger(int num_val) {
    int rem;
    int rev_num = 0;

    while (num_val != 0) {
        rem = num_val % 10;           
        rev_num = rev_num * 10 + rem;  
        num_val = num_val / 10;          
    }

    return rev_num;
}


int isItPrime(int n) {
    
    if (n <= 1) {
        return 0;
    }

    int j;
    for (j = 2; j * j <= n; j++) {
        if (n % j == 0) {
            return 0;
        }
    }

    return 1;
}

int checkArmstrong(int val){
    int copy_val;
    int rem;
    int digit_count = 0;
    int final_sum = 0;

    copy_val = val;

    for(; copy_val != 0; ++digit_count) {
        copy_val /= 10;
    }

    copy_val = val;

    while (copy_val != 0) {
        rem = copy_val % 10;

        int p_val = 1;
        int i = 0;
        while(i < digit_count) {
            p_val = p_val * rem;
            i++;
        }

        final_sum = final_sum + p_val;
        copy_val = copy_val/10;
    }

    return final_sum == val;
}


int checkPrimePalindrome(int x){
    
    int rev_x = flipInteger(x);

    if(x == rev_x && isItPrime(x)){
        return 1;
    }

    return 0;
}


int checkAdams(int num){

    int sq1 = num * num;

    int rev = flipInteger(num);

    int sq2 = rev * rev;
    
    int rev_sq2 = flipInteger(sq2);

    if(sq1 == rev_sq2){
        return 1;
    }
    
    return 0;
}

