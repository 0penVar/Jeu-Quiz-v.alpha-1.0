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
        printf("Veuillez rentrer votre score de la 1ere question : ");
          scanf("%d", &a);
      
        printf("Veuillez rentrer votre score de la 2eme question : ");
          scanf("%d", &b);
      
        printf("Veuillez rentrer votre score de la 3eme question : ");
          scanf("%d", &c);
      
        printf("Veuillez rentrer votre score de la 4eme question : ");
          scanf("%d", &d);
        
        printf("Veuillez rentrer votre score de la 5eme question : ");
          scanf("%d", &e);
            
        printf("Veuillez rentrer votre score de la 6eme question : ");
          scanf("%d", &f);
        
        printf("Veuillez rentrer votre score de la 7eme question : ");
          scanf("%d", &g);
      
        printf("Veuillez rentrer votre score de la 8eme question : ");
          scanf("%d", &h);
      
        printf("Veuillez rentrer votre score de la 9eme question : ");
          scanf("%d", &i);
      
        printf("Veuillez rentrer votre score de la 10eme question : ");
          scanf("%d", &j);
      
        printf("Veuillez rentrer votre score de la 11eme question : ");
          scanf("%d", &k);
      
        printf("Veuillez rentrer votre score de la 12eme question : ");
          scanf("%d", &l);
      
        printf("Veuillez rentrer votre score de la 13eme question : ");
          scanf("%d", &m);
      
        printf("Veuillez rentrer votre score de la 14eme question : ");
          scanf("%d", &n);
     
        printf("Veuillez rentrer votre score de la 15eme question : ");
          scanf("%d", &o);
      
        printf("Veuillez rentrer votre score de la 16eme question : ");
          scanf("%d", &p);
      
        printf("Veuillez rentrer votre score de la 17eme question : ");
          scanf("%d", &q);
      
        printf("Veuillez rentrer votre score de la 18eme question : ");
          scanf("%d", &r);
      
        printf("Veuillez rentrer votre score de la 19eme question : ");
          scanf("%d", &s);
      
        printf("Veuillez rentrer votre score de la 20eme question : ");
          scanf("%d", &t);
            
        r1 = a + b + c + d + e;
        r2 = f + g + h + i + j;
        r3 = k + l + m + n + o;
        r4 = p + q + r + s + t;
        total = r1 + r2 + r3 + r4;
        printf("Votre score total est de %d sur 200", total);
      
        printf("Si vous voulez recalculer, appuyez sur 1, sinon appuyez sur 0");
        printf("Veuillez ecrire votre choix : ");
          scanf("%d", &recharger);
            
    }while (recharger);
}
