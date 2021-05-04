#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    
    unsigned int recharger = 0, total = 0;
    unsigned int a = 0, b = 0, c = 0, d = 0, e = 0;
    unsigned int f = 0, g = 0, h = 0, i = 0, j = 0;
    unsigned int k = 0, l = 0, m = 0, n = 0, o = 0;
    unsigned int p = 0, q = 0, r = 0, s = 0, t = 0;
    unsigned int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
    
    do
    {
        printf("\nVeuillez rentrer votre score de la 1ere question : \n");
          scanf("%d", &a);
      
        printf("\nVeuillez rentrer votre score de la 2eme question : \n");
          scanf("%d", &b);
      
        printf("\nVeuillez rentrer votre score de la 3eme question : \n");
          scanf("%d", &c);
      
        printf("\nVeuillez rentrer votre score de la 4eme question : \n");
          scanf("%d", &d);
        
        printf("\nVeuillez rentrer votre score de la 5eme question : \n");
          scanf("%d", &e);
            
        printf("\nVeuillez rentrer votre score de la 6eme question : \n");
          scanf("%d", &f);
        
        printf("\nVeuillez rentrer votre score de la 7eme question : \n");
          scanf("%d", &g);
      
        printf("\nVeuillez rentrer votre score de la 8eme question : \n");
          scanf("%d", &h);
      
        printf("\nVeuillez rentrer votre score de la 9eme question : \n");
          scanf("%d", &i);
      
        printf("\nVeuillez rentrer votre score de la 10eme question : \n");
          scanf("%d", &j);
      
        printf("\nVeuillez rentrer votre score de la 11eme question : \n");
          scanf("%d", &k);
      
        printf("\nVeuillez rentrer votre score de la 12eme question : \n");
          scanf("%d", &l);
      
        printf("\nVeuillez rentrer votre score de la 13eme question : \n");
          scanf("%d", &m);
      
        printf("\nVeuillez rentrer votre score de la 14eme question : \n");
          scanf("%d", &n);
     
        printf("\nVeuillez rentrer votre score de la 15eme question : \n");
          scanf("%d", &o);
      
        printf("\nVeuillez rentrer votre score de la 16eme question : \n");
          scanf("%d", &p);
      
        printf("\nVeuillez rentrer votre score de la 17eme question : \n");
          scanf("%d", &q);
      
        printf("\nVeuillez rentrer votre score de la 18eme question : \n");
          scanf("%d", &r);
      
        printf("\nVeuillez rentrer votre score de la 19eme question : \n");
          scanf("%d", &s);
      
        printf("\nVeuillez rentrer votre score de la 20eme question : \n\n");
          scanf("%d", &t);
            
        r1 = a + b + c + d + e;
        r2 = f + g + h + i + j;
        r3 = k + l + m + n + o;
        r4 = p + q + r + s + t;
        total = r1 + r2 + r3 + r4;
        printf("Votre score total est de %d sur 200\n", total);
      
        printf("\nSi vous voulez recalculer, appuyez sur 1, sinon appuyez sur 0");
        printf("Veuillez ecrire votre choix : ");
          scanf("%d", &recharger);
            
    }while (recharger);
}
