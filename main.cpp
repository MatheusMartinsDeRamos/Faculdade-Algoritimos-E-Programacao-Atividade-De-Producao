/*Perfil no GitHub: https://github.com/MatheusMartinsDeRamos*/

#include <stdio.h>
#include <math.h>

/* Esse código faz operações de matematica, tais como adição, subtração, multiplicação e divisão, potencialização e Raiz Quadrada */
/* POTENCIALIZAçÂO:  https://pt.stackoverflow.com/questions/130147/como-usar-a-fun%C3%A7%C3%A3o-pow-potencia-em-c */
/*RAIZ QUADRADA: http://linguagemc.com.br/a-biblioteca-math-h/ */

int main() {
/*Variaveis INICIO*/
  char aluno[100] = "Matheus Martins de Ramos";
  char curso[100]  = "Analise e Desenvolvimento de Sistemas";
  char universidade[100]  = "La Salle";
  char matricula[100]  = "202213339";
  float numero1,numero2,resultado;
  int opcaoMenu;
  bool mostrarMenu= true;

/*Variaveis FIM*/

/*Apresentação INICIO*/
  printf("_-_-_-_-_-_- \n");
  printf("Aluno: %s \n", aluno);
  printf("Curso: %s \n", curso);
  printf("Universidade: %s \n", universidade);
  printf("Matricula: %s \n", matricula);
  printf("_-_-_-_-_-_- \n");
/*Apresentação FIM*/ 
  
 do {
      /*Escolha da Operação INICIO*/
      printf("Digite o numero de qual operação deseja realizar \n");
      printf("  1.Potenciação \n");
      printf("  2.Soma \n");
      printf("  3.Subtração \n");
      printf("  4.Multiplicação \n");
      printf("  5.Divisão \n");
      printf("  6.Raiz Quadrada \n");
      printf("  0.SAIR \n");
      scanf("%d", &opcaoMenu);
      /*Escolha da Operação FIM*/
      if (opcaoMenu == 0) {
      mostrarMenu = false;
      printf("Obrigado por usar nosso sistema! Até logo!");
      }
      else if (opcaoMenu == 1 || opcaoMenu == 2 || opcaoMenu == 3 || opcaoMenu == 4 || opcaoMenu == 5){
      /*mostrarMenu = true;*/
      /*Escolha dos números INICIO*/
      printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
      printf("Escolha o primeiro número: \n");
      scanf("%f", &numero1);
      printf("Escolha o segundo número: \n");
      scanf("%f", &numero2);
      /*Escolha dos números FIM*/
      switch (opcaoMenu) {
      case 1:
      resultado = pow(numero1, numero2);       
      break;
      case 2:
      resultado = numero1 + numero2;       
      break;
      case 3: resultado = numero1 - numero2;
      break;
      case 4: resultado = numero1 * numero2;
      break;
      case 5: resultado = numero1 / numero2;
      break;
      }
        printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
        printf("O resultado é: %.2f \n\n", resultado);
        printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
      }

        else if (opcaoMenu == 6) {
      printf("Escolha um número: \n");
      scanf("%f", &numero1);
      resultado = sqrt(numero1);
      printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
      printf("O resultado é: %.2f \n\n", resultado);
      printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
        }
        
      else {
        printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
        printf("'%d' Não é uma opção válida! \n", opcaoMenu);
        printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
        }
   
    }
   
while (mostrarMenu == true) ;
   return 0;
  }
