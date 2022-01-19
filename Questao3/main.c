#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

/*
*Academia Accenture
*Atividade 3: Menu de opcoes utilizando funcoes
*Data: 14/01/2022
*Autor:Bruna Guimaraes
*Funcao: Criar um menu com 11 opcoes de escolha, e em cada opcao contém um uso diferente. É necessario utilizar algumas funcoes
*/

int main (int argc, char *argv[ ])
{
    setlocale(LC_ALL, "Portuguese");

    apresentar_intruducao();

    int opcao;

    do
    {
    imprimir_separacao();
    apresentar_menu();

    printf("\nDigite uma opção de 0 a 11: "); // escolhe a opcao do menu
    scanf("%d", &opcao);
    limpar_buffer();

    limpar_terminal();
    imprimir_separacao();

    switch(opcao)
    {
    case 0: // Mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0 - mostra uma mensagem FIM
    {
        printf(" \nVoce ta saindo do programa... \n");
        finalizar_programa();
        printf("\nFIM!");
        printf("\n");
        pausar_terminal();
        break;
    }

    case 1: // Ler primeiro nome, sobrenome e o ano que a pessoa nasceu, imprime nome completo, idade e caracteres que tem no nome
    {
        printf("\n Por favor responda as perguntas abaixo...");


        char primeiroNome[10];
        char sobrenome[20];
        int tamanhoNome;
        int quantidadeCaractere;
        int anoNascimento;
        int idade;

        printf("\n Por favor responda as perguntas abaixo...");

        printf("\n Digite o seu nome: ");
        scanf("%s", &primeiroNome);
        limpar_buffer();
        printf("\n Digite o seu sobrenome: ");
        gets(sobrenome);
        limpar_buffer();
        printf("\n Digite o ano que voce nasceu: ");
        scanf("%i", &anoNascimento);
        limpar_buffer();
        printf("\n");

        limpar_terminal();


        printf("Seu nome completo: %s %s \n", primeiroNome, sobrenome);
        strcat(primeiroNome, sobrenome);
        tamanhoNome = strlen(primeiroNome);

        idade = calcular_idade(anoNascimento);
        printf("Sua idade: %i \n", idade);

        quantidadeCaractere = somar_mumeros(tamanhoNome,idade);

        printf("A soma da sua idade mais a quantidade de caracteres do seu nome �: %i \n",quantidadeCaractere);
        printf("\n");

        pausar_terminal();
        break;
    }

    case 2: //Diversas contas envolvendo 2 números
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

        // A soma dos números

        printf("Informe o primeiro número: ");
        scanf("%f", &numero1);
        limpar_buffer();
        printf("Informe o segundo número: ");
        scanf("%f", &numero2);
        limpar_buffer();

        soma = somar_mumeros(numero1,numero2);
        printf("\nO resultado da soma é: %.2f \n", soma);
        // O produto do primeiro número pelo quadrado do segundo

        quadradoNum2 = pow(numero2,2);

        printf("O resultado do 1ª número vezes o quadrado do 2ª número é: %.2f \n", numero1*quadradoNum2);

       // O quadrado do primeiro número

        quadradoNum1 = pow(numero1,2);

        printf("O resultado do quadrado do 1ª número é: %.2f \n", quadradoNum1);

        // A raiz quadrada da soma dos quadrados

        somaQuadrados = quadradoNum1 + quadradoNum2;

        printf("O resultado da soma dos quadrados é : %.2f \n", somaQuadrados);

        RaizQuadradaSomaQuadrados = sqrt(somaQuadrados);

        printf("O resultado da raiz quadrada da soma dos quadrados é: %.2f \n", RaizQuadradaSomaQuadrados);

        // O seno da diferença do primeiro número pelo segundo

        float diferencaNumeros;
        float senoDiferenca;

        diferencaNumeros = numero1 - numero2;
        senoDiferenca = sin(diferencaNumeros);
        printf("O resultado do seno da diferença do 1ª número pelo segundo é: %.2f \n", senoDiferenca);

        // O módulo do primeiro número

        if (numero1 <= 0)
        {
            numero1 = (numero1 * (-1));
            printf("O modulo do 1ª número é: %.2f \n", numero1);
        }
        else
        {
            printf("O modulo do 1ª número é: %.2f \n", numero1);
        };

        break;
    }

    case 3: //Transforma uma temperatura recebida em Fahrenheit para Celsius
    {
        printf("\nCálculo para transformar Fahrenheit para Celsius \n");
        printf("\n");

        double fahrenheit;
        double celsius;

        printf("Digite um valor em fahrenheit: ");
        scanf("%lf", &fahrenheit);
        limpar_buffer();

        celsius = calculoFahrenheit(fahrenheit);
        printf(" O resultado em graus Celsius: %.2f \n", celsius);
        pausar_terminal();
        break;

    }

    case 4: //Calcula o fatorial de um número
    {
        printf("\nCálculo do fatorial de um número \n");

        int fatorial;
        int numero;

        printf("\nDigite um número para a realização do cálculo do fatorial dele: ");
        scanf("%d", &numero);
        limpar_buffer();

        fatorialNumero (fatorial, numero);

        pausar_terminal();
        break;
    }

    case 5: //Ler um string e converter para inteiro os valores contidos em cada posição char e calculando a média dos valores
    {
        char matriz[10][11];
        int soma = 0;
        int caractere[10];
        double media = 0;

       for (int i=0; i<10; i++)
       {
            printf("\nDigite um valor com no máximo 10 digitos: ");
            scanf("%s", &matriz[i]);
            soma += atoi(matriz[i]);
       }

        media = soma / 10;

        printf("\nA média dos vetores armazenados no vetor é: %.2f\n", media);
        printf("\n");

        pausar_terminal();
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
        pausar_terminal();
        break;
    }

    case 7: //Diferença entre a média dos elementos das colunas pares e a média dos elementos das linhas ímpares de uma matriz 5x3.
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

                 if ((coluna%2 == 0)) // Verifica se a coluna é par
                 {
                        somaColunasPares = somaColunasPares + matriz[linha][coluna];
                 }
                 if (linha%2 != 0) // Verifica se a linha é ímpar
                 {
                        somaLinhasImpares = somaLinhasImpares + matriz[linha][coluna];
                 }
           }

       }

       mediaColunasPares = somaColunasPares/2;

       mediaLinhasImpares = somaLinhasImpares/2;

       diferencaMedias = mediaColunasPares - mediaLinhasImpares;

       printf("A diferença entre a média da soma das colunas pares e a média da soma das linhas impares é %.2lf", diferencaMedias);

       printf("\n");

       pausar_terminal();
       break;
    }

    case 8: //Coloca os números de 1 a 100 na ordem inversa.
    {
       printf("\nColocando as ordens dos números de 1 a 100 na ordem inversa");
       printf("\n");

       printf("Ordem inversa dos números:");

       ordem_inversa();

       printf("\n");
       pausar_terminal();
       break;
    }

    case 9: //Ler uma string, conta quantos caracteres são iguais a 'a' e substituir por 'b'. Imprime a quantidade de caracteres modificados e a string modificada
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

       printf("\nNúmero de letras a = %d\n", contador);
       printf("\nString modificada:%s\n", frase);
       pausar_terminal();
       break;
    }

    case 10: //Ler um caractere e imprime o caractere digitado e o código ASCII correspondente.
    {
       printf("\nMostra o caractere digitado e seu código ASCII.");
       printf("\n");

       char caractere=0;

       printf("Digite um caractere: ");
       scanf(" %c", &caractere);
       limpar_buffer();

       printf("\nCaractere digitado: %c\n", caractere);
       printf("\nCódigo ASCII: %d\n", caractere);
       pausar_terminal();
       break;
    }

     case 11: //Hello Word.
    {
       hello();
       pausar_terminal();
       break;
    }

   default :
    {
       printf("\nOpção invalida!!... Digite uma opcao valida: entre 0 e 10. \n");
       printf("\n");
       pausar_terminal();
       break;
    }
    }
    system("cls");
    }while(opcao!= 0);
    return 0;
}
