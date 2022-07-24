#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int multi (int valeur)
{
    printf("Bienvenue dans le mode 2 joueurs \n");
    int choix,coup,joueur1,joueur2,score=0,tour,phase=1;
    joueur1=1;
    joueur2=2;
    printf("Pour combien de tour, souhaitez vous jouer ?: ");
    scanf("%d",&tour);
    for (int j=1;j<tour+1;j++)
    {
        printf("\nTour %d",phase);
         printf("\nJoueur%d est maitre de jeux,quel est le nombre de coup ?: ",joueur1);
    scanf("%d",&coup);
    printf("Joueur%d, quel est votre choix: ",joueur2);
    scanf("%d",&choix);
    int count=coup;
     for (int i=0;i<coup;i++)
            {
                count--;
                if (valeur < choix)
        {
            printf("Moins\n");
            printf("Il vous reste %d tentative(s)\n",count);
        }
        else if (valeur > choix)
        {
            printf("Plus\n");
            printf("Il vous reste %d tentative(s)\n",count);
        }
        score=coup-i;
     if(count==0)
        {
            printf("Joueur%d, vous avez %d points",joueur2,score);
            int temp=joueur1;
            joueur1=joueur2;
            joueur2=temp;
            srand(time(NULL)); 
	valeur=rand()%100;
	printf("%d",valeur);
            break;
        }
    if (valeur == choix)
        {
            printf("Bingo \n");
            printf("Joueur%d, vous avez %d points",joueur2,score);
            int temp=joueur1;
            joueur1=joueur2;
            joueur2=temp;
             srand(time(NULL)); 
	valeur=rand()%100;
            break;
        }
            printf("Tenter un autre chiffre: ");
    scanf("%d",&choix);
            }
            phase=phase+1;
    }
   
}

int plus_moins(int valeur_a_trouver,int choix_joueur,char mode)
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
            for (int i=1;i<11;i++)
            {
                count2--;
                printf("Tu as %d tentative(s) restantes\n",count2);
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
	int valeur,nbr,choix;
	char mode;
	srand(time(NULL)); 
	valeur=rand()%100;
	printf("Quel est le nombre de joueurs ?: ");
	scanf("%d",&nbr);
	switch(nbr)
	{
	    case 1:
	    printf("\nBienvenue dans le mode 1 joueur\n");
	    printf("\nChoisisser votre mode:\n");
	    printf("facile(f)/moyen(m)/difficile(d): ");
	    scanf(" %c",&mode);
	    printf("Quel est votre chiffre ?: ");
	    scanf("%d", &choix);
	    plus_moins(valeur,choix,mode);
	    break;
	    case 2:
	    multi(valeur);
	    break;
	}
}
