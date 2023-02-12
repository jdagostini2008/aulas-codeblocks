#include <stdio.h>
#include <string.h>

 int main()
 {

        int idade
        double salario, altura;
        char genero
        char nome[50];

          printf("Digite o valor da idade")
          scanf("%d", &idade)
          printf("Digite o valor do salario")
          scanf("%If", &salario)
          printf("Digite o valor da altura")
          scanf("If", &altura)
          printf("Digite o valor do genero")
          scanf("%d", &genero)
          idade = 20;
          salario = 20;
          altura = 1.63;
          genero = 'F';
          strcpy(nome, "Maria Silva");

     printf("IDADE = %d/n", idade);
     printf("SALARIO = %.2lf\n", altura)
     printf("GENERO = %c\n", genero);
     printf("NOME = %s\n", nome)

     return 0;
 }
