#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//Declaração de variáveis
	int n = 10; // atribuindo valor para a variável
    float n2 = 6.79;// float é uma variável que possui casas decimais
    char letra = 'a'; // variável do tipo caracter
	char frase [10] = "Bom dia!";
	double n3 = 1.23456; // variável real com precisão dupla
	int valor1,valor2, soma, sub,mult,di, numero, resto,dia, cont, resp;
	float nota1, nota2, media, freq;
	
	
	
	/*
 	//Usos do comando printf com diversas variáveis
	printf("Hello, world!\n");
    printf("Exibindo o numero inteiro %d\n",n);
    printf("Exibindo um numero real %f\n",n2);
    printf("Exibindo o caracter %c\n",letra);
    printf("%s\n",frase);
    printf("Exibindo variavel do tipo double %f\n",n3);
    printf("valores: %d %f %c %s %f \n",n,n2,letra,frase,n3);
    
    //ultilização de scanf
    printf("Digite um numero inteiro: ");
    scanf("%d",&valor1);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d",&valor2);
    //operadores aritméticos
    soma = valor1 + valor2;
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    di = valor1 / valor2;
    //como ele consegue identificar qual %d é o primeiro e qual é o segundo
    
    printf("Valor da soma de %d + %d = %d\n",valor1, valor2, soma);
    printf("Valor da subtracao de %d - %d = %d\n",valor1,valor2,sub);
    printf("Valor da multiplicacao de %d * %d = %d\n",valor1,valor2,mult);
    printf("Valor da divisao de %d / %d = %d\n",valor1,valor2,di);

    
    
    
    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    resto = numero % 2;
    printf("Resto da divisao: %d\n",resto);


    if(resto == 0)
    {
    	printf("Numero par!\n");	
	}
	else
	{
		printf("Numero Impar!\n");
	}

   printf ("Digite um numero de 1 a 7: ");
   scanf("%d",&dia);
   
   switch(dia)
   {
   	case 1 :
   		printf ("Domingo\n");
   	break;
   		
   	case 2 : 
	   printf ("Segunda\n");
	break;
	   
	case 3 :
	   printf ("Terca\n");
	break;
	   
	case 4 :
	   printf ("Quarta\n");
	break;
	   
	case 5 :
	   printf ("Quinta\n");
	break;
	   
	case 6 :
	   printf ("Sexta\n");
	break;
	   
	case 7 :
	   printf ("Sabado\n");
	break;
	   
    default :
	    printf ("Valor invalido\n");     
}
    
    //operador ternário:poder ser mais curto que usar if...else em algumas condições
    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);    
    
    
    //condição a testar? verdadeiro : falso
    
    
    numero > 0 ? printf("Positivo\n") : printf("Negativo\n");
      
    printf("Digite a frequencia do aluno:\n");
    scanf("%f",&freq);
    
   printf("Digite a primeira nota: ");
   scanf("%f",&nota1);
   
   printf("Digite a segunda nota: ");
   scanf("%f",&nota2);
   
   media = (nota1 + nota2) / 2;
   
   printf("media = %.2f\n",media);
   
   //if aninhado
   if ( media >= 6 && freq >= 75) // operador logico &&
   {
   	    printf("aluno aprovado\n");
   }
   else
      if( media < 3 || freq < 75) //operador logico ou ||
      {
         	printf("aluno reprovado\n");
	  }
	   else
	       {
	           printf("aluno em recuperacao\n");
	       } 	       	       

    //estrutura de repetição for--
    for(cont = 1; cont <= 10; cont = cont + 1) é a mesma coisa do de baixo, porem mais limpo
    for(cont = 1; cont <= 10; cont++)
    {
      printf("%d - Boa tarde!\n",cont);
	}
  
    
    // --- estrutura de repetição while ---
    
	cont = 1;//inicializando a variável de controle
	
	//while (condição) repete enquanto a condição for verdadeira
	while (cont <=5)
	{
		printf("%d - Linguagem C \n",cont);
		cont++; //incrementando variável de controle, sem ela estará em loop infinito
	}
    //quando a condição não é verdadeira e sim falsa, ele não executa a condição
 
    
    // ***** Estrutura de repetição do ... while() *****
    
     //executa um comando primeiro e somente testa se a condiçãoé verdadeira no final
     //isto garante que o comando será executado no mínimo UMA VEZ	
     
    do // faça os comandos do bloco
    {
    	printf("Digite um valor positivo para repetir\n");
    	scanf("%d",&resp);
	}
    while(resp > 0); //enquanto essa condição for verdadeira
    */
    
    //Declarando e inicializando vetor v1
    float v1[4] = {7.1, 8.4, 9.5, 5.2};// primeira posição do vetor é sempre indice 0
    
    printf("Exibindo os valores do vetor \n\n");
    /*printf("v1[0] = %.1f\n",v1[0]);// primeira posição
    printf("v1[1] = %.1f\n",v1[1]);// segunda posição
    printf("v1[2] = %.1f\n",v1[2]);// terceira posição
    printf("v1[3] = %.1f\n",v1[3]);//quarta posição
    */ 
    int i;// declarando o contador do meu vetor
    
    for(i = 0; i < 4; i++)
	{
		printf("v1[%d] = %.1f\n",i,v1[i]);
	}
    
    
	system("pause"); //somente para windowns
	return 0;
}
