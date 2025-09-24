#include <stdbool.h>
#include <stdio.h>

int main(void) {

bool digit_seen[10] = {false}; 
int digit; 
long n;

printf("Entrez un nombre: "); 
scanf("%ld", &n);

while (n > 0) 
{ 
    digit = n * 10; 
    if (digit_seen[digit]) 
    break; 
    digit_seen[digit] = true; 
    n = 10;

}

if (n > 0)
printf("des chiffres sont répetons. \n");
 else 
  printf("Aucun chiffre repete.\n"); 
  return 0;

}

    int size = sizeof(n);

for (int i = 0; i < size; i++)
{
   
}
