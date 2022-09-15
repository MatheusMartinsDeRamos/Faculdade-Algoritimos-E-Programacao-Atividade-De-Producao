#include <stdio.h>

int main() {
/*Variaveis INICIO*/
  char aluno[100] = "Matheus Martins de Ramos";
  char curso[100]  = "Analise e Desenvolvimento de Sistemas";
  char universidade[100]  = "La Salle";
  char matricula[100]  = "202213339";
  float numero1,numero2,resultado;
  int operacao;

/*Variaveis FIM*/

/*Apresentação INICIO*/
  printf("_-_-_-_-_-_- \n");
  printf("Aluno: %s \n", aluno);
  printf("Curso: %s \n", curso);
  printf("Universidade: %s \n", universidade);
  printf("Matricula: %s \n", matricula);
  printf("_-_-_-_-_-_- \n");
/*Apresentação FIM*/ 
  
/*Escolha da Operação INICIO*/
printf("Digite o numero de qual operação deseja realizar \n");
  while (operacao != 9) {
    printf("  1.Soma \n");
    printf("  2.Subtração \n");
    printf("  3.Multiplicação \n");
    printf("  4.Divisão \n");
    scanf("%d", &operacao);
/*Escolha da Operação FIM*/
/*Escolha os números INICIO*/  
    printf("Escolha o primeiro número: \n");
    scanf("%f", &numero1);
    printf("Escolha o segundo número: \n");
    scanf("%f", &numero2);
/*Escolha os números FIM*/
/*Realizando operação INICIO*/ 
  switch (operacao)
    {
      case 1:
    resultado = numero1 + numero2;       
      break;
      case 2: resultado = numero1 - numero2;
      break;
      case 3: resultado = numero1 * numero2;
      break;
      case 4: resultado = numero1 / numero2;
      break;
      default:
        printf("Parece que você informou uma operação incorreta, por isso não conseguimos finalizar o processo. \n"); 
    }
  printf("O resultado é: %.2f \n\n", resultado);

  printf("Deseja realizar mais uma operação? %c \n", operacao);
  printf("Digite 9 para sair ou qualquer outro numero para continuar\n");
  scanf("%d", &operacao);
/*Realizando operação FIM*/   
  }
  if (operacao = 9) {
    printf("Obrigado por usar nosso sistema! \n");
    printf("TCHAU! \n");
  }
  return 0;
}