#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//début de la fonction
int main()
{
//creation du nombre aléatoire
	srand(time(NULL));
//mise en place des différentes variables
	int random_num = rand() % 100 + 1;
	int num;
	int compteur = 1;
//ajout de la boucle while qui va servir a demander au joueur de dire un nombre jusqu'à ce qu'il trouve le bon nombre
	while (num != random_num)
	{
//demande un chiffre à l'utilisateur
	printf("choisissez un nombre \n");
//envoie le nombre dans la variable correspondante
	scanf("%d", &num);
//premiere condition qui vérifie que le numéro choisit et trop grand
	if (num > random_num)
		{
		printf("le nombre choisit est trop grand \n");
//augmentation du compteur qui affichera le nombre d'essai utiliser à la fin
		compteur += 1;
		}
//deuxieme condition qui verifie si le nombre est le même que le nombre aléatoire
	else if (num == random_num)
		{
//petit message speciale pour la personne qui trouve du premier coup
			if (compteur == 0)
			{
			printf("bravo vous avez trouvé le bon nombre du premier coup tu es très chaud \n");
			}
			else
			{
			printf("bravo vous avez trouvé le bon nombre en %d coups \n", compteur);
			}
		}
//derniere condition qui verifie si le nombre choisit est trop petit par rapport au nombre aléatoire
	else
		{
		printf("le nombre choisit est trop petit \n");
		compteur += 1;
		}
//fin de la boucle while
	}
	exit(0);
//fin de la fonction
}

