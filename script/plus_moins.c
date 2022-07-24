#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int plus_moins(int valeur_a_trouver, int choix_joueur,char mode)
{
    int count1=26;
    int count2=11;
      switch(mode)
      {
          case 'f':
          printf("Vous avez des tentatives illimités\n");
          break;
      }
    while (valeur_a_trouver != choix_joueur && mode=='f')
    {
        if (valeur_a_trouver < choix_joueur)
        {
            printf("Moins\n");
        }
        else if (valeur_a_trouver > choix_joueur)
        {
            printf("Plus\n");
        }
    printf("Tenter un autre chiffre: ");
    scanf("%d",&choix_joueur);
        
    }
    switch (mode)
    {
        case 'm':
        {
            for (int i=0;i<26;i++)
            {
                count1--;
                printf("Tu as %d tentatives restantes\n",count1);
                if (valeur_a_trouver < choix_joueur)
        {
            printf("Moins\n");
        }
        else if (valeur_a_trouver > choix_joueur)
        {
            printf("Plus\n");
        }
        else
        {
            break;
        }
    printf("Tenter un autre chiffre: ");
    scanf("%d",&choix_joueur);
            }
            
        }
    }
       switch (mode)
    {
        case 'd':
        {
            for (int i=0;i<11;i++)
            {
                count2--;
                printf("Tu as %d tentatives restantes\n",count2);
                if (valeur_a_trouver < choix_joueur)
                    {
                        printf("Moins\n");
                    }
        else if (valeur_a_trouver > choix_joueur)
        {
            printf("Plus\n");
        }
        else
        {
            break;
        }

    printf("Tenter un autre chiffre: ");
    scanf("%d",&choix_joueur);
            }
            break;
        }
    }
    if(valeur_a_trouver == choix_joueur)
    {
        printf("Bingo!");
    }

}
int main()
{
	int valeur,choix;
	char mode;
	srand(time(NULL)); 
	valeur=rand()%100;
	printf("%d\n",valeur);
	printf("Entrer le mode: facile(f)/moyen(m),difficile(d) ");
	scanf("%c",&mode);
	printf("Choisissez une chiffre : ");
	scanf("%d",&choix);
	plus_moins(valeur,choix,mode);
}
