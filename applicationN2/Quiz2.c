#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned int a = 0, refaire = 0, score = 10;
    
    do
    {
        printf("-----------------------------------------------------------------------\n");
        printf("\n\t\tQuestion 2\nQuel est le nom de la planete naine qui possede le plus de lune ?\n\n");
        printf("-----------------------------------------------------------------------\n");
      
        do
        {
            printf("\nreponse 1 : c'est Eris");
            printf("\nreponse 2 : c'est Sedna");
            printf("\nreponse 3 : c'est Pluton");
            printf("\nreponse 4 : c'est Gonggong");
            printf("\nreponse 5 : c'est Makemake");
            printf("\nreponse 6 : c'est Quaoar");
            printf("\nreponse 7 : c'est Haumea");
            printf("\nreponse 8 : c'est orcus");
            printf("\nreponse 9 : c'est Ceres");
            printf("\nreponse 10 : c'est Triton");
            printf("\n\nVeuillez marquer votre reponse ici : ");
            scanf("%d", &a);
          
            if(a != 3)
            {
                printf("\n\n-----------------------------------------------------------------------\n");
                printf("\nMauvaise reponse\n");
                score -= 1;
                printf("\n-----------------------------------------------------------------------\n");
            }
            else if(a = 3)
            {
                printf("\n\n-----------------------------------------------------------------------\n");
                printf("\nBonne reponse");
                printf("\nVotre score est de %d sur 10", score);
                printf("\n\n-----------------------------------------------------------------------\n");
            }
          
        }while(a !=3);
        
        printf("\n\nPour refaire une partie, appuyez sur 1, sinon appuyez sur 0");
        printf("\nVeuillez marquer votre choix ici : ");
        scanf("%d", &refaire);
      
    }while(refaire);
    return 0;
}
