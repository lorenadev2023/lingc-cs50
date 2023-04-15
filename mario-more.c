#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)

{
    int altura;

	printf("Escolha uma altura entre 1 e 8: ");
	scanf("%d",&altura);
	  	if (altura > 8)
	{
		printf("Numero invalido");
	}
	else
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < altura; j++)
        {
            if (i + j < altura -1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }

        }
        printf("  #");

        for (int j = 0; j < altura; j++)
        {
            if (i + j > altura -1)
            {
                printf("#");
            }

        }
        printf("\n");


    }
}
