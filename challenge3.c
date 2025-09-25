#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false}; 
    bool digit_repeated[10] = {false}; 
    int digit; 
    long n;

    printf("Entrez un nombre: "); 
    scanf("%ld", &n);
    while (n > 0) 
    { 
        digit = n % 10;             
        if (digit_seen[digit]) {     
            digit_repeated[digit] = true;
        } 
        digit_seen[digit] = true;
        n /= 10;                     
    }

    for (int i = 0; i < 10; i++) {
        if (digit_repeated[i]) {
            printf("Chiffres répétés: %d ", i);
        }
    }
    return 0;
}
