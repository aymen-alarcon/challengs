#include <stdio.h>

int main() {

    int maxespace = 6;
    int pos1 = 1;
    int pos6 = 2 * maxespace - 1; 

    for (int i = 1; i <= maxespace; i++) {
        printf("%d.", i);
        for (int j = 1; j <= 2 * maxespace - 1; j++) {
            if (j == pos1 || j == pos6) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        pos1++;
        pos6--;
    }

    return 0;

/*
    printf("1.       *\n");
    printf("2.      *\n");
    printf("3.     *\n");
    printf("4.*   *\n");
    printf("5. * *\n");
    printf("6.  *\n");

    float r;

    printf("Please enter the r value: ");
    scanf("%f", &r);

    float v = (4.0/3.0) * 3.14159 * r * r * r;

    printf("Volume: %f\n", v);

    int dollar;
    int cent;

    printf("enter a value in dollar :");
    scanf("%d", &dollar);
    printf("enter a value in cent :");
    scanf("%d", &cent);

    int valued = dollar + (dollar * 5) / 100 ;
    int valuec = cent + (cent * 5) / 100 ;

    printf("la montant : %d\n", valued);    
    printf("la montant : %d\n", valuec);


    int x, p;

    printf("please enter the value of x :");
    scanf("%d", &x);

    p = 3 *x * 5 + 2 * x * 4 - 5 * x * 3 - x * 2 + 7 * x - 6;
    
    printf("polynôme = %d", p);

        int x , p;

    printf("please enter the value of x :");
    scanf("%d", &x);

    p = ((((3 * x +2) * x-5) *x -1) * x +7) * x-6;
    printf("polynôme = %d", p);


    int price ;

    printf("Entrez un montant en dollars :");
    scanf("%d", &price);
    int count20 = price / 20;
    price = price % 20;
    int count10 = price / 10;
    price = price % 10;
    int count5 = price / 5;
    price = price % 5;
    int count1 = price / 1;
    
    printf("Billets de 20 : %d \n", count20);
    printf("Billets de 10 : %d \n", count10);
    printf("Billets de 5 : %d \n", count5);
    printf("Billets de 1 : %d \n", count1);

    float p;
    float i;
    float pm;
    float solde;

    printf("Entrez le montant du prêt :");
    scanf("%f", &p);
    printf("Entrez le taux d'intérêt :");
    scanf("%f", &i);
    printf("Entrez le paiement mensuel :");
    scanf("%f", &pm);
    
    i = i / 100;
    i = i / 12;
    
    printf("le montant du prêt : %.2f \n", p);
    printf("le taux d'intérêt : %.2f \n", i);
    printf("le paiement mensuel : %.2f \n", pm);

    p = p + (p * i) - pm;
    
    printf("p restant après le premier paiement : %.2f \n", p);
    p = p + (p * i) - pm;
    printf("p restant après le deuxième paiement : %.2f \n", p);
    p = p + (p * i) - pm;
    printf("p restant après le deuxième paiement : %.2f \n", p);*/
}