#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int random_num = rand() % 100 + 1;
	int num;
	while (num != random_num)
	{
	printf("choisissez un nombre \n");
	scanf("%d", &num);
	if (num > random_num)
		{
		printf("le nombre choisit est trop grand \n");
		}
	else if (num == random_num)
		{
		printf("bravo vous avez trouvé le bon nombre \n");
		}
	else
		{
		printf("le nombre choisit est trop petit \n");
		}
	}
	exit(0);

}
