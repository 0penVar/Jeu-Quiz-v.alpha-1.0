#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned int a = 0, refaire = 0, score = 10;
    
    do
    {
        printf("-----------------------------------------------------------------------\n");
        printf("\n\t\tQuestion 4\nQuel est le nom de l'etoile la plus proche du soleil ?\n\n");
        printf("-----------------------------------------------------------------------\n");
      
        do
        {
            printf("\nreponse 1 : Proxima Centauri");
            printf("\nreponse 2 : Alpha Centauri");
            printf("\nreponse 3 : Sagittarius A*");
            printf("\nreponse 4 : Etoile de Barnard");
            printf("\nreponse 5 : Kepler-452");
            printf("\nreponse 6 : Ross 128");
            printf("\nreponse 7 : Sirius A");
            printf("\nreponse 8 : Sirius B");
            printf("\nreponse 9 : Sirius A et Sirius B");
            printf("\nreponse 10 : Wolf 359");
            printf("\n\nVeuillez marquer votre reponse ici : ");
            scanf("%d", &a);
          
            if(a != 1)
            {
                printf("\n\n-----------------------------------------------------------------------\n");
                printf("\nMauvaise reponse\n");
                score -= 1;
                printf("\n-----------------------------------------------------------------------\n");
            }
            else if(a = 1)
            {
                printf("\n\n-----------------------------------------------------------------------\n");
                printf("\nBonne reponse");
                printf("\nVotre score est de %d sur 10", score);
                printf("\n\n-----------------------------------------------------------------------\n");
            }
          
        }while(a != 1);
        
        printf("\n\nPour refaire une partie, appuyez sur 1, sinon appuyez sur 0");
        printf("\nVeuillez marquer votre choix ici : ");
        scanf("%d", &refaire);
      
    }while(refaire);
    return 0;
}
