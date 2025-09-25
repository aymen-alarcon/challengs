#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
/*
//first question
    char myN[50];
    char GS1[20], id[20], code[20], num[20], chiffre[20];
    int count;
    char slide = '-';

    printf("Can you enter the numbers : ");
    scanf("%s", myN);

    count = strlen(myN);
    while (count != 17) {
        printf("Please enter exactly 17 characters: ");
        scanf("%s", myN);
        count = strlen(myN);
    }

    printf("There are %d characters in your input.\n", count);

    char *ptr = myN;

    for (int i = 0; i < 5; i++) {

        if (strchr(ptr, slide) != NULL) {
            size_t len = strchr(ptr, slide) - ptr;
            strncpy(GS1, ptr, len);
            GS1[len] = '\0';
            printf("GS1 Prefix: %s\n", GS1);
            ptr = strchr(ptr, slide) + 1;
        }

        if (strchr(ptr, slide) != NULL) {
            size_t len = strchr(ptr, slide) - ptr;
            strncpy(id, ptr, len);
            id[len] = '\0';
            printf("id Prefix: %s\n", id);
            ptr = strchr(ptr, slide) + 1;
        }

        if (strchr(ptr, slide) != NULL) {
            size_t len = strchr(ptr, slide) - ptr;
            strncpy(code, ptr, len);
            code[len] = '\0';
            printf("code Prefix: %s\n", code);
            ptr = strchr(ptr, slide) + 1;
        }

        if (strchr(ptr, slide) != NULL) {
            size_t len = strchr(ptr, slide) - ptr;
            strncpy(num, ptr, len);
            num[len] = '\0';
            printf("num Prefix: %s\n", num);
            ptr = strchr(ptr, slide) + 1;
        }

        if (strchr(ptr, slide) != NULL) {
            size_t len = strchr(ptr, slide) - ptr;
            strncpy(chiffre, ptr, len);
            chiffre[len] = '\0';
            printf("chiffre Prefix: %s\n", chiffre);
            ptr = strchr(ptr, slide) + 1;
        }
    }

    //second question

int number;

    printf("Entrez un nombre à deux chiffres : ");
    if (scanf("%d", &number) != 1) return 1;

    while (number < 10 || number > 99) {
        printf("Entrez un nombre à deux chiffres : ");
        if (scanf("%d", &number) != 1) return 1;
    }

    int rev = 0;
    while (number > 0) {
        rev = rev * 10 + (number % 10);
        number /= 10;
    }

    printf("Le nombre inversé est : %d\n", rev);

    //third question

    int time[] = {8 / 60 ,  9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45};
    int timea[] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8 , 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};
    int h;
    int m;
    int mind = 77777;
    int mina = 77777;
    int min_i;
    int diff;

    printf("can you please enter an hour (make sure it's in 24 format) : ");
    scanf("%d", &h);
    printf("can you please enter the minutes : ");
    scanf("%d", &m);

    m = h * 60 + m;
    printf("%d \n", m);

    for (int i = 0; i < 8; i++)
    {
      diff =time[i] - m;
      if (diff <mind && diff >= 0)
      {
        mind = diff;
        min_i = i;
      }else if(diff <mind && diff < 0){
        diff = diff * -1;
        mind = diff;
        min_i = i;
      }
    };
    mind = time[min_i];
    mina = timea[min_i];

    printf("L'heure de départ la plus proche est  %d, %.2d et le temp d'arrivé est  %d, %.2d ",mind/60, mind%60 ,mina/60, mina%60);
    

//forth question

int nbr;
printf("enter ");
scanf("%d", &nbr);
    switch (nbr) {
        case 0 ... 59:
            printf("F");
            break;
        case 60 ... 69:
            printf("E");
            break;
        case 70 ... 79:
            printf("D");
            break;
        case 80 ... 89:
            printf("C");
            break;
        case 90 ... 100:
            printf("B");
            break;
        default:
            printf("Invalid number");
            break;
    }

    return 0;

    //fifth question
    int ent1, ent2, small;
    int right[100] = {0};
    int size = 0;    

    printf("please enter the first integer :");
    scanf("%d", &ent1);
    printf("please enter the second integer :");
    scanf("%d", &ent2);
    
    if (ent1 < ent2)
    {
        small = ent1;
    }else
    {
        small = ent2;
    }
    
    
    for (int i = 1; i <= small; i++)
    {
        if (ent1 % i == 0 && ent2 % i == 0)
        {
            right[size] = i;
            size++;
        } 
    }

    printf("\nCommon divisors:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", right[i]);
    }
*/
    //question six


    int a;
    int b;
    int r;

    int tempa;
    int tempb;

        printf("please enter the first number");
        scanf("%d", &a);
        printf("please enter the second number");
        scanf("%d", &b);

        tempa = a;
        tempb = b;
        if (b <= a && b != 0){
            while (r != 0) {
                r = a % b;
                a = b;
                b = r;
                
                
                
            }   tempa = tempa/a;
                tempb = tempb/a; 
                printf("GCD = %d\n", a);
        }
        else if (a <= b && b != 0)
        {
            while (r != 0) {
                r = b % a;
                b = a;
                a = r;
            }
            printf("GCD = %d\n", b);
            tempa = tempa/b;
            tempb = tempb/b; 
        }



    printf("%d/%d", tempa, tempb);
}