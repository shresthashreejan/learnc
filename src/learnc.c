#include <stdio.h>
#include <string.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    BOOL bool_val = TRUE;
    if(bool_val) {
        printf("Boolean true\n");
    }

    int two_dimensional_array[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", two_dimensional_array[i][j]);
        }
        printf("\n");
    }

    char first_word[10] = "Hello";
    char last_word[] = "World";
    size_t available_space = sizeof(first_word) - strlen(first_word) - 1;

    strncat(first_word, last_word, available_space);
    printf("%s\n", first_word);
}