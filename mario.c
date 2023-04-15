#include <stdio.h>
#include <stdlib.h>

int main() 


{
	
	int i, j, altura;
	
	printf("Escolha uma altura entre 1 e 8: ");
	scanf("%d",&altura);
	
	///while (altura <= 8) 
	//do
	  	if (altura > 8)
	{
		printf("Numero invalido");
	}
	else
	for (i = 0; i <= altura; i++){
	  for (j = altura - i; j >= 1; j--)
	    printf(" ");
	  for(j = 1; j <= i; j++)
	  	printf("#");
	  printf("\n");
	 // altura++;
	}

	
	
	//while(altura < 8); 
	//return 0;
/*	
	printf("   #\n"); 
	printf("  ##\n");
	printf(" ###\n");
	printf("####\n");
	*/

}




























 /*#include<stdio.h>

int main (void)

{
    int a = 0
  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < n; j++)
      {
          printf("#");
      }
      printf("\n");
  }

          printf("#");
}
      	printf("\n");
	////////////////////////////////////////////////////////////////
	//o que eu estava fazendo
	#include<stdio.h>

    int main (void)

{
    int a = 0
	for (int a = 0; a < 8; a++);
	printf ("Digite a altura");
	scanf("%d",&'a');
	{
      for (int c = 0; c < 8; c++ )
      {
          printf("#");
      }
      	printf("\n");
	}

}
*/




































 
 

