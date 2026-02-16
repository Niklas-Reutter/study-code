#include <stdio.h>

int main() {
    int myNumber[5] = {10, 20, 30, 40, 50};
    int *ptr = &myNumber[1];
    int *ptr2 = &myNumber[4]; 
    
    printf("Adresse vom 2. Element: %p\n", ptr);
    printf("Adresse vom 5. Element: %p\n", ptr2);
    
    int x = ptr2 - ptr;
    printf("Differenz der Adressen: %d\n", x);
    return 0;
}   