#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int random_num = rand() % 100 + 1;
	int num;
	int compteur = 1;
	while (num != random_num)
	{
	printf("choisissez un nombre \n");
	scanf("%d", &num);
	if (num > random_num)
		{
		printf("le nombre choisit est trop grand \n");
		compteur += 1;
		}
	else if (num == random_num)
		{
			if (compteur == 0)
			{
			printf("bravo vous avez trouvé le bon nombre du premier coup tu es très chaud \n");
			}
			else
			{
			printf("bravo vous avez trouvé le bon nombre en %d coups \n", compteur);
			}
		}
	else
		{
		printf("le nombre choisit est trop petit \n");
		compteur += 1;
		}
	}
	exit(0);

}
