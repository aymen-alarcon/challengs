#include <stdbool.h>
#include <stdio.h>

int main(void) {
    /*
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
            printf("Chiffres repetes: %d ", i);
        }
    }
    return 0;
    */

    //second question
    bool digit_seen[10] = {false}; 
    int digit_repeated[10] = {0}; 
    int digit; 
    long n;
    int count = 0;

    printf("Entrez un nombre: "); 
    scanf("%ld", &n);

    while (n > 0) 
    { 
        digit = n % 10;             
        digit_repeated[digit]++;
        n /= 10;                     
    }
printf("Chiffre : \t");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", i);
    }
    printf("\nOccurrences : \t");
    for (int i = 0; i < 10; i++) {
        if (digit_repeated[i]) {
            printf("%d \t", digit_repeated[i]);
        }else
        {
            printf("0 \t");
        }
        
    }
    return 0;

}
