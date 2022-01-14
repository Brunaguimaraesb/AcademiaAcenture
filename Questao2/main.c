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
*Atividade 2: Menu de opções
*Data: 07/01/2022
*Autor:Bruna Guimarães
*Função: Criar um menu com dez opções de escolha, e em cada opção contém um uso diferente.
*/

int main (int argc, char *argv[ ])
{
    setlocale(LC_ALL, "Portuguese");

    time_t data_atual;
    data_atual = time(NULL);
    struct tm tm = *localtime(&data_atual);

    char c;
    printf("Nome: Bruna Guimarães\n");
    printf("Email: brunaguimaraes.santos@hotmail.com\n");
    printf("Nome do Programa: Menu de Opções\n");
    printf("Data que foi escrito: 7/1/2022\n");
    printf("Data Atual: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

    int opcao;

    do
    {
    printf("---------------------------------------------------------------------");
    printf("\n\t\tMenu\n");
    printf(" 0 - OPÇÃO 0 -> Exit - Sair do programa \n");
    printf(" 1 - OPÇÃO 1 -> Identificação e quantidade de caractere \n");
    printf(" 2 - OPÇÃO 2 -> Conjunto de cálculos \n");
    printf(" 3 - OPÇÃO 3 -> Transformação de Fahrenheit para Celsius \n");
    printf(" 4 - OPÇÃO 4 -> Fatorial de um número \n");
    printf(" 5 - OPÇÃO 5 -> Vetor e média dos valores contidos no vetor \n");
    printf(" 6 - OPÇÃO 6 -> Tabuada de 1 a 10 menos a de 5 \n");
    printf(" 7 - OPÇÃO 7 -> Cálculo das diferenças de médias \n");
    printf(" 8 - OPÇÃO 8 -> Números de 1 a 100 na ordem inversa \n");
    printf(" 9 - OPÇÃO 9 -> Substituição de a por b na string \n");
    printf(" 10 - OPÇÃO 10 -> Caractere digitado e código ASCII correspondente \n");

    printf("\nDigite uma opção de 0 a 10: ");
    scanf("%d", &opcao);
    while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer
    system("cls");
    printf("---------------------------------------------------------------------");

    switch(opcao)
    {
    case 0: // Mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0 - mostra uma mensagem FIM
    {
        printf(" \nVocê tá saindo do programa... \n");
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
        printf("\n Digite o ano que você nasceu: ");
        scanf("%i", &anoNascimento);
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer
        printf("\n");

        system("cls");
        printf("Seu nome completo é: %s %s \n",primeiroNome,sobrenome);

        idade = ANO_ATUAL - anoNascimento;
        printf("Sua idade é %i \n", idade);

        strcat(primeiroNome, sobrenome);
        tamanho = strlen(primeiroNome);
        printf("A soma da sua idade mais a quantidade de caracteres do seu nome é: %i \n", tamanho + idade);
        system("pause");
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
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer
        printf("Informe o segundo número: ");
        scanf("%f", &numero2);
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer

        soma = numero1 + numero2;
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
        system("pause");
        break;
    }

    case 3: //Transforma uma temperatura recebida em Fahrenheit para Celsius
    {
        printf("\nCálculo para transformar Fahrenheit para Celsius \n");
        printf("\n");

        double fahrenheit;

        printf("Digite um valor em fahrenheit: ");
        scanf("%lf", &fahrenheit);
        while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer

        printf(" O resultado em graus Celsius é: %.2f \n", (fahrenheit-32.0) * (5.0/9.0));
        system("pause");
        break;

    }

    case 4: //Calcula o fatorial de um número
    {
        printf("\nCálculo do fatorial de um número \n");

        int fatorial;
        int numero;

        printf("\nDigite um número para a realização do cálculo do fatorial dele: ");
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
            printf("\nO fatorial é: %d! = %d\n",numero,fatorial);
            printf("\n");
        }
        else
        {
            printf("\nO cálculo do fatorial só se aplica a números naturais.\n");
            printf("\n");
        }
        system("pause");
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

        media = soma/10;

        printf("\nA média dos vetores armazenados no vetor é: %.2f\n", media);
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

       system("pause");
       break;
    }

    case 8: //Coloca os números de 1 a 100 na ordem inversa.
    {
       printf("Colocando as ordens dos números de 1 a 100 na ordem inversa");
       printf("\n");

       printf("Ordem inversa dos números:");
       for (int i = 100; i >= 1; i--)
       {
       printf("\n%d", i);
       }
       printf("\n");
       system("pause");
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
       system("pause");
       break;
    }

    case 10: //Ler um caractere e imprime o caractere digitado e o código ASCII correspondente.
    {
       printf("\nMostra o caractere digitado e seu código ASCII.");
       printf("\n");

       char caractere=0;

       printf("Digite um caractere: ");
       scanf(" %c", &caractere);
       while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer

       printf("\nCaractere digitado: %c\n", caractere);
       printf("\nCódigo ASCII: %d\n", caractere);
       system("pause");
       break;
    }

   default :
    {
       printf("\nOpção inválida!!... Digite uma opção válida: entre 0 e 10. \n");
       printf("\n");
       system("pause");
       break;
    }
    }
    system("cls");
    }while(opcao != 0);
    return 0;
}
