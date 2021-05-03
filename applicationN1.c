#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
    unsigned int a = 0, refaire = 0, score = 10;

    do
    {

        printf("\n\tQuestion N1\ncombien y-a-t'il de planete dans notre systeme solaire\n");
        printf("-----------------------------------------------------------------------");
        do
        {
            printf("\nreponse 1 : c'est 1");
            printf("\nreponse 2 : c'est 2");
            printf("\nreponse 3 : c'est 3");
            printf("\nreponse 4 : c'est 4");
            printf("\nreponse 5 : c'est 5");
            printf("\nreponse 6 : c'est 6");
            printf("\nreponse 7 : c'est 7");
            printf("\nreponse 8 : c'est 8");
            printf("\nreponse 9 : c'est 9");
            printf("\nreponse 10 : c'est 10");
            printf("\nreponse 11 : c'est 11");
            scanf("%d", &a);

            if(a != 8)
            {
                printf("\nMauvaise reponse\n");
                score -= 1;
            }
            else if(a = 8)
            {
                printf("\nBonne reponse");
                printf("\nVotre score est de %d dur 10", score);
            }
        }while(a != 8);

        printf("\n\nPour refaire une partie, appuyez sur 1, sinon appuyez sur 0");
        scanf("%d", &refaire);

    }while(refaire);
    return 0;
}
