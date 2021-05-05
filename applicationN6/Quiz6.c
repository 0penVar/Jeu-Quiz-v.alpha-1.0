#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned int a = 0, refaire = 0, score = 10;
    
    do
    {
        printf("-----------------------------------------------------------------------\n");
        printf("\n\t\tQuestion 6\nQuel est le nom de la planete la plus grosse du  ?\n\n");
        printf("-----------------------------------------------------------------------\n");
      
        do
        {
            printf("\nreponse 1 : Terre");
            printf("\nreponse 2 : Venus");
            printf("\nreponse 3 : Uranus");
            printf("\nreponse 4 : Proxima b");
            printf("\nreponse 5 : Mercure");
            printf("\nreponse 6 : Jupiter");
            printf("\nreponse 7 : Neptune");
            printf("\nreponse 8 : Pluton");
            printf("\nreponse 9 : Mars");
            printf("\nreponse 10 : Encelade");
            printf("\n\nVeuillez marquer votre reponse ici : ");
            scanf("%d", &a);
          
            if(a != 6)
            {
                printf("\n\n-----------------------------------------------------------------------\n");
                printf("\nMauvaise reponse\n");
                score -= 1;
                printf("\n-----------------------------------------------------------------------\n");
            }
            else if(a = 6)
            {
                printf("\n\n-----------------------------------------------------------------------\n");
                printf("\nBonne reponse");
                printf("\nVotre score est de %d sur 10", score);
                printf("\n\n-----------------------------------------------------------------------\n");
            }
          
        }while(a != 6);
        
        printf("\n\nPour refaire une partie, appuyez sur 1, sinon appuyez sur 0");
        printf("\nVeuillez marquer votre choix ici : ");
        scanf("%d", &refaire);
      
    }while(refaire);
    return 0;
}
