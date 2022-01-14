#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define OPCAO0 0
#define OPCAO1 1
#define OPCAO2 2
#define OPCAO3 3
#define OPCAO4 4
#define OPCAO5 5
#define OPCAO6 6
#define OPCAO7 7
#define OPCAO8 8
#define OPCAO9 9
#define OPCAO10 10
#define ANO_ATUAL 2021
/*
*Academia Accenture
*Atividade 2: Menu de op��es
*Data: 07/01/2022
*Autor:Bruna Guimar�es
*Fun��o: Criar um menu com dez op��es de escolha, e em cada op��o cont�m um uso diferente.
*/

int main (int argc, char *argv[ ])
{
    setlocale(LC_ALL, "Portuguese");

    time_t data_atual;
    data_atual = time(NULL);
    struct tm tm = *localtime(&data_atual);

    char c;
    printf("Nome: Bruna Guimar�es\n");
    printf("Email: brunaguimaraes.santos@hotmail.com\n");
    printf("Nome do Programa: Menu de Op��es\n");
    printf("Data que foi escrito: 7/1/2022\n");
    printf("Data Atual: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

    int opcao;

    do
    {
    printf("---------------------------------------------------------------------");
    printf("\n\t\tMenu\n");
    printf(" 0 - OP��O 0 -> Exit - Sair do programa \n");
    printf(" 1 - OP��O 1 -> Identifica��o e quantidade de caractere \n");
    printf(" 2 - OP��O 2 -> Conjunto de c�lculos \n");
    printf(" 3 - OP��O 3 -> Transforma��o de Fahrenheit para Celsius \n");
    printf(" 4 - OP��O 4 -> Fatorial de um n�mero \n");
    printf(" 5 - OP��O 5 -> Vetor e m�dia dos valores contidos no vetor \n");
    printf(" 6 - OP��O 6 -> Tabuada de 1 a 10 menos a de 5 \n");
    printf(" 7 - OP��O 7 -> C�lculo das diferen�as de m�dias \n");
    printf(" 8 - OP��O 8 -> N�meros de 1 a 100 na ordem inversa \n");
    printf(" 9 - OP��O 9 -> Substitui��o de a por b na string \n");
    printf(" 10 - OP��O 10 -> Caractere digitado e c�digo ASCII correspondente \n");

    printf("\nDigite uma op��o de 0 a 10: ");
    scanf("%d", &opcao);
    while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer
    system("cls");
    printf("---------------------------------------------------------------------");

    switch(opcao)
    {
    case 0: // Mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0 - mostra uma mensagem FIM
    {
        printf(" \nVoc� t� saindo do programa... \n");
        int contador=10;

        while(contador>=0)
         {
          printf("%d\n",contador);
          contador=contador-1;
         }
        printf("FIM!");
        printf("\n");
        break;
    }

    case 1: // Ler primeiro nome, sobrenome e o ano que a pessoa nasceu, imprime nome completo, idade e caracteres que tem no nome
    {
        printf("\n Por favor responda as perguntas abaixo...");


        char primeiroNome[10];
        char sobrenome[10];
        int anoNascimento;
        int quantidadeCaracteres;
        int tamanho;
        int idade;

        printf("\n Digite o seu nome: ");
        scanf("%s", &primeiroNome);
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer
        printf("\n Digite o seu sobrenome: ");
        gets(sobrenome);
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer
        printf("\n Digite o ano que voc� nasceu: ");
        scanf("%i", &anoNascimento);
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer
        printf("\n");

        system("cls");
        printf("Seu nome completo �: %s %s \n",primeiroNome,sobrenome);

        idade = ANO_ATUAL - anoNascimento;
        printf("Sua idade � %i \n", idade);

        strcat(primeiroNome, sobrenome);
        tamanho = strlen(primeiroNome);
        printf("A soma da sua idade mais a quantidade de caracteres do seu nome �: %i \n", tamanho + idade);
        system("pause");
        break;
    }

    case 2: //Diversas contas envolvendo 2 n�meros
    {
        printf("\n Contas diversas \n");
        printf("\n");

        float numero1;
        float numero2;
        float soma;
        float quadradoNum1;
        float quadradoNum2;
        float somaQuadrados;
        float RaizQuadradaSomaQuadrados;

        // A soma dos n�meros

        printf("Informe o primeiro n�mero: ");
        scanf("%f", &numero1);
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer
        printf("Informe o segundo n�mero: ");
        scanf("%f", &numero2);
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer

        soma = numero1 + numero2;
        printf("\nO resultado da soma �: %.2f \n", soma);

        // O produto do primeiro n�mero pelo quadrado do segundo

        quadradoNum2 = pow(numero2,2);

        printf("O resultado do 1� n�mero vezes o quadrado do 2� n�mero �: %.2f \n", numero1*quadradoNum2);

       // O quadrado do primeiro n�mero

        quadradoNum1 = pow(numero1,2);

        printf("O resultado do quadrado do 1� n�mero �: %.2f \n", quadradoNum1);

        // A raiz quadrada da soma dos quadrados

        somaQuadrados = quadradoNum1 + quadradoNum2;

        printf("O resultado da soma dos quadrados � : %.2f \n", somaQuadrados);

        RaizQuadradaSomaQuadrados = sqrt(somaQuadrados);

        printf("O resultado da raiz quadrada da soma dos quadrados �: %.2f \n", RaizQuadradaSomaQuadrados);

        // O seno da diferen�a do primeiro n�mero pelo segundo

        float diferencaNumeros;
        float senoDiferenca;

        diferencaNumeros = numero1 - numero2;
        senoDiferenca = sin(diferencaNumeros);
        printf("O resultado do seno da diferen�a do 1� n�mero pelo segundo �: %.2f \n", senoDiferenca);

        // O m�dulo do primeiro n�mero

        if (numero1 <= 0)
        {
            numero1 = (numero1 * (-1));
            printf("O modulo do 1� n�mero �: %.2f \n", numero1);
        }
        else
        {
            printf("O modulo do 1� n�mero �: %.2f \n", numero1);
        };
        system("pause");
        break;
    }

    case 3: //Transforma uma temperatura recebida em Fahrenheit para Celsius
    {
        printf("\nC�lculo para transformar Fahrenheit para Celsius \n");
        printf("\n");

        double fahrenheit;

        printf("Digite um valor em fahrenheit: ");
        scanf("%lf", &fahrenheit);
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer

        printf(" O resultado em graus Celsius �: %.2f \n", (fahrenheit-32.0) * (5.0/9.0));
        system("pause");
        break;

    }

    case 4: //Calcula o fatorial de um n�mero
    {
        printf("\nC�lculo do fatorial de um n�mero \n");

        int fatorial;
        int numero;

        printf("\nDigite um n�mero para a realiza��o do c�lculo do fatorial dele: ");
        scanf("%d", &numero);
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer

        if(numero>=0)
        {
            int n;

            fatorial=1;
            n=numero;
            while(n>0)
            {
                fatorial=fatorial * n;
                n--;
            }
            printf("\nO fatorial �: %d! = %d\n",numero,fatorial);
            printf("\n");
        }
        else
        {
            printf("\nO c�lculo do fatorial s� se aplica a n�meros naturais.\n");
            printf("\n");
        }
        system("pause");
        break;
    }

    case 5: //Ler um string e converter para inteiro os valores contidos em cada posi��o char e calculando a m�dia dos valores
    {
        char matriz[10][11];
        int soma = 0;
        int caractere[10];
        double media = 0;

       for (int i=0; i<10; i++)
       {
            printf("\nDigite um valor com no m�ximo 10 digitos: ");
            scanf("%s", &matriz[i]);
            soma += atoi(matriz[i]);
       }

        media = soma/10;

        printf("\nA m�dia dos vetores armazenados no vetor �: %.2f\n", media);
        printf("\n");

        system("pause");
        break;
    }

    case 6: // Criar uma matriz e imprimir a tabuada de 1 a 10 sem conter a de 5.
    {
        int i;
        int j;

        for (i=1; i<=10; i++)
        {
            if(i==5)
            {
                continue;
            }
           for (j=1; j<=10; j++)
           {
              printf("%2d x %2d = %3d\n", i, j, i * j);

           }
           printf("\n");
        }
        system("pause");
        break;
    }

    case 7: //Diferen�a entre a m�dia dos elementos das colunas pares e a m�dia dos elementos das linhas �mpares de uma matriz 5x3.
    {
       double matriz[5][3];
       int linha;
       int coluna;
       double somaLinhasImpares;
       double somaColunasPares;
       double mediaColunasPares;
       double mediaLinhasImpares;
       double diferencaMedias;

       printf("\nDigite os valores para os elementos da matriz\n\n");

       for(linha=0;linha<5;linha++)
       {
            for(coluna=0;coluna<3;coluna++)
            {
            printf("\nMatriz[%d][%d] = ", linha, coluna);
            scanf("%lf", &matriz[linha][coluna]);
            }
       }

       for(linha=0;linha<5;linha++)
       {
           for(coluna=0;coluna<3;coluna++)
           {
                printf("\nElemento[%d][%d] = %.2lf\n", linha, coluna, matriz[linha][coluna]);

                 if ((coluna%2 == 0)) // Verifica se a coluna � par
                 {
                        somaColunasPares = somaColunasPares + matriz[linha][coluna];
                 }
                 if (linha%2 != 0) // Verifica se a linha � �mpar
                 {
                        somaLinhasImpares = somaLinhasImpares + matriz[linha][coluna];
                 }
           }

       }

       mediaColunasPares = somaColunasPares/2;

       mediaLinhasImpares = somaLinhasImpares/2;

       diferencaMedias = mediaColunasPares - mediaLinhasImpares;

       printf("A diferen�a entre a m�dia da soma das colunas pares e a m�dia da soma das linhas impares � %.2lf", diferencaMedias);

       printf("\n");

       system("pause");
       break;
    }

    case 8: //Coloca os n�meros de 1 a 100 na ordem inversa.
    {
       printf("Colocando as ordens dos n�meros de 1 a 100 na ordem inversa");
       printf("\n");

       printf("Ordem inversa dos n�meros:");
       for (int i = 100; i >= 1; i--)
       {
       printf("\n%d", i);
       }
       printf("\n");
       system("pause");
       break;
    }

    case 9: //Ler uma string, conta quantos caracteres s�o iguais a 'a' e substituir por 'b'. Imprime a quantidade de caracteres modificados e a string modificada
    {
       char frase [50];
       int tamanho;
       int contador = 0;

       printf("\nDigite uma frase: ");
       gets (frase);

       printf("\nFrase digitada: %s\n", frase);

       tamanho=strlen(frase);

       for(int i=0; i<tamanho; i++)
       {
            if(frase[i] == 'a')
            {
                contador = contador+1;
                frase[i]='b';
            }
       }

       printf("\nN�mero de letras a = %d\n", contador);
       printf("\nString modificada:%s\n", frase);
       system("pause");
       break;
    }

    case 10: //Ler um caractere e imprime o caractere digitado e o c�digo ASCII correspondente.
    {
       printf("\nMostra o caractere digitado e seu c�digo ASCII.");
       printf("\n");

       char caractere=0;

       printf("Digite um caractere: ");
       scanf(" %c", &caractere);
       while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer

       printf("\nCaractere digitado: %c\n", caractere);
       printf("\nC�digo ASCII: %d\n", caractere);
       system("pause");
       break;
    }

   default :
    {
       printf("\nOp��o inv�lida!!... Digite uma op��o v�lida: entre 0 e 10. \n");
       printf("\n");
       system("pause");
       break;
    }
    }
    system("cls");
    }while(opcao != 0);
    return 0;
}
