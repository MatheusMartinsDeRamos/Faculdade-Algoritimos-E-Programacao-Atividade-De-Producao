/*Perfil no GitHub: https://github.com/MatheusMartinsDeRamos*/

#include <stdio.h>
#include <math.h>

/* Esse código faz operações de matematica, tais como adição, subtração, multiplicação e divisão, potencialização e Raiz Quadrada */
/* POTENCIALIZAçÂO:  https://pt.stackoverflow.com/questions/130147/como-usar-a-fun%C3%A7%C3%A3o-pow-potencia-em-c */
/*RAIZ QUADRADA: http://linguagemc.com.br/a-biblioteca-math-h/ */
/*Eu gostaria de melhorar o código verificando se o dado inputado não é uma string antes de seguir o código, assim não daria erro. Atualmente se o usuário coloca uma string está entrando em loop, mas ainda não sei como resolve isso. Se puder me enviar material sobre isso no email, eu agradeço: matheus.202213339@unilasalle.edu.br*/

int main() {
/*As variaveis são declaradas aqui*/
  char aluno[100] = "Matheus Martins de Ramos";
  char curso[100]  = "Analise e Desenvolvimento de Sistemas";
  char universidade[100]  = "La Salle";
  char matricula[100]  = "202213339";
  float numero1,numero2,resultado;
  int opcaoMenu;
  bool mostrarMenu= true;



/*Aqui só temos a apresentação, pegando os dados das variaveis*/
  printf("_-_-_-_-_-_- \n");
  printf("Aluno: %s \n", aluno);
  printf("Curso: %s \n", curso);
  printf("Universidade: %s \n", universidade);
  printf("Matricula: %s \n", matricula);
  printf("_-_-_-_-_-_- \n");

  
 do {
      /*Aqui é onde o usuário deve escolher a opção desejada. Usei o do-while pois precisa ser executado PELO MENOS 1 vez*/
      printf("Digite o numero de qual operação deseja realizar \n");
      printf("  1.Potenciação \n");
      printf("  2.Soma \n");
      printf("  3.Subtração \n");
      printf("  4.Multiplicação \n");
      printf("  5.Divisão \n");
      printf("  6.Raiz Quadrada \n");
      printf("  0.SAIR \n");
      scanf("%d", &opcaoMenu);

        /*A primeira validação é se a opção é zero, então já para a execução do programa aqui*/
      if (opcaoMenu == 0) {
      mostrarMenu = false;
      printf("Obrigado por usar nosso sistema! Até logo!");
      }
       /*Verificando se é uma opção válida e se recebe dois números para o cálculo*/
      else if (opcaoMenu == 1 || opcaoMenu == 2 || opcaoMenu == 3 || opcaoMenu == 4 || opcaoMenu == 5){
      printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
      printf("Escolha o primeiro número: \n");
      scanf("%f", &numero1);
      printf("Escolha o segundo número: \n");
      scanf("%f", &numero2);
      /*É feita uma validação se a op~]ap é a divisão & se o segundo número preenchido foi zero. Se for informa mensagem de erro e volta para o menu inicial*/
      if (opcaoMenu == 5 && numero2 == 0) {
        printf("Parece que você está tentando dividir por zero, mas isso não é possivel, tente novamente. \n\n");
      } else {
      /*Fiz um switch case pois sei os valores possíveis, achei melhor que usar IFs*/
      /*De acorodo com cada opção, faz o cálculo*/
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
        /*Apresentando o resultado*/
        printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
        printf("O resultado é: %.2f \n\n", resultado);
        printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
      }
    }   
        /*Caso a opção seja Raiz quadrada, deve solicitar apenas um número*/
        /*Assim como naopção 1, usei uma biblioteca chamada math.h, pois nela já consigo usar a função pow, para potenciação e sqrt para raiz quadrada. Achar isso no google me fez ganahr um bom tempo*/
        else if (opcaoMenu == 6) {
      printf("Escolha um número: \n");
      scanf("%f", &numero1);
      resultado = sqrt(numero1);
      printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
      printf("O resultado é: %.2f \n\n", resultado);
      printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
        }
        /*Aqui é quando o usuário preencher uma opção inválida*/
      else {
        printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
        printf("'%d' Não é uma opção válida! \n", opcaoMenu);
        printf("'=-=-=-=-=-=-=-=-=-=-=-=- \n");
        }
   
    }
   
while (mostrarMenu == true) ;
   return 0;
  }
