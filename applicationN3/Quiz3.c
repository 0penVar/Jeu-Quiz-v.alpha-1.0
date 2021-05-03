#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned int a = 0, refaire = 0, score = 10;
    
    do
    {
        printf("-----------------------------------------------------------------------\n");
        printf("\n\t\tQuestion 3\nQuel type de planete sont uniquement présentes dans le systeme solaire interne ?\n\n");
        printf("-----------------------------------------------------------------------\n");
      
        do
        {
            printf("\nreponse 1 : Super-terres");
            printf("\nreponse 2 : planetes naines");
            printf("\nreponse 3 : Geantes gazeuses");
            printf("\nreponse 4 : planete telluriques");
            printf("\nreponse 5 : lunes");
            printf("\nreponse 6 : asteroide");
            printf("\nreponse 7 : Geantes de glaces");
            printf("\nreponse 8 : Exoplanetes");
            printf("\nreponse 9 : Neptunes chaudes ");
            printf("\nreponse 10 : Super-jupiters");
            printf("\n\nVeuillez marquer votre reponse ici : ");
            scanf("%d", &a);
          
            if(a != 4)
            {
                printf("\n\n-----------------------------------------------------------------------\n");
                printf("\nMauvaise reponse\n");
                score -= 1;
                printf("\n-----------------------------------------------------------------------\n");
            }
            else if(a = 4)
            {
                printf("\n\n-----------------------------------------------------------------------\n");
                printf("\nBonne reponse");
                printf("\nVotre score est de %d sur 10", score);
                printf("\n\n-----------------------------------------------------------------------\n");
            }
          
        }while(a != 4);
        
        printf("\n\nPour refaire une partie, appuyez sur 1, sinon appuyez sur 0");
        printf("\nVeuillez marquer votre choix ici : ");
        scanf("%d", &refaire);
      
    }while(refaire);
    return 0;
}
