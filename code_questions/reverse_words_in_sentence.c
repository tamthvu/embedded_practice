#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_array(char arr[], int l, int r){ 
    while (l<r){ 
        int temp = arr[l]; //hold element to be swapped 

        arr[l] = arr[r]; 
        arr[r] = temp; 

        // move forward and backwards, different than ew skills since that assumes position 0
        l++;
        r--;
    }

}



int main(){

    // has to be array of characters 
    char test[] = "Hi my name is Tam"; 
    // char test[] = "Hi this is a sentence"; 

    int size = strlen(test); 
    printf("Length: %d\n", size);
    
    reverse_array(test, 0, size -1);
    
    for (int i = 0; i < size; i++) {
        printf("%c", test[i]);
    }
    
    printf("\n");

    int letter_count = 0; 
    for (int i = 0; i < size; i++) {
        if (test[i] == ' '){ 
            reverse_array(test, letter_count, i - 1); 
            letter_count = i + 1;
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%c", test[i]);
    }

    return 0;

}
