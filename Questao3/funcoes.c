#include "funcoes.h"

void apresentar_intruducao() //mostra o cabeçalho inicial
{
    time_t data_atual;
    data_atual = time(NULL);
    struct tm tm = *localtime(&data_atual);

    printf("Nome: Bruna Guimares\n");
    printf("Email: brunaguimaraes.santos@hotmail.com\n");
    printf("Nome do Programa: Menu de Opcoes\n");
    printf("Data que foi escrito: 14/1/2022\n");
    printf("Data Atual: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

    return;
}

void imprimir_separacao() //insere uma linha de separação
{
 printf("---------------------------------------------------------------------");
 return;
}

void apresentar_menu()
{
    printf("\n\t\tMenu\n");
    printf(" 0 - OPCAO 0 -> Exit - Sair do programa \n");
    printf(" 1 - OPCAO 1 -> Identificacao e quantidade de caractere \n");
    printf(" 2 - OPCAO 2 -> Conjunto de calculos \n");
    printf(" 3 - OPCAO 3 -> Transformacao de Fahrenheit para Celsius \n");
    printf(" 4 - OPCAO 4 -> Fatorial de um numero \n");
    printf(" 5 - OPCAO 5 -> Vetor e media dos valores contidos no vetor \n");
    printf(" 6 - OPCAO 6 -> Tabuada de 1 a 10 menos a de 5 \n");
    printf(" 7 - OPCAO 7 -> Calculo das diferenças de medias \n");
    printf(" 8 - OPCAO 8 -> Numeros de 1 a 100 na ordem inversa \n");
    printf(" 9 - OPCAO 9 -> Substituicao de a por b na string \n");
    printf(" 10 - OPCAO 10 -> Caractere digitado e codigo ASCII correspondente \n");
    printf(" 11 - OPCAO 11 -> Hello world \n");

    return;
}

void limpar_buffer()
{
    char c;
    while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer
    return;
}

void pausar_terminal()
{
    system("pause");
    return;
}

void limpar_terminal()
{
    system("cls");
    return;
}

void finalizar_programa()  // contagem regressiva na tela, de 10 a 0
{
       for (int i = 10; i >= 1; i--)
       {
       printf("\n%d", i);
       }
    return;
}

double somar_mumeros(double numeroA, double numeroB) //soma dois numeros
{
    double soma = numeroA + numeroB;

    return soma;
}

int calcular_idade(int anoNacimento) //calcula a idade
{
    int idade = (ANO_ATUAL - anoNacimento);

    return idade;
}

/*
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
  */
    double calculoFahrenheit (double fahrenheit) //calculo da transforma��o de fahrenheit para celsius
    {
        double calculo;

        calculo = (fahrenheit-32.0) * (5.0/9.0);

     return calculo;
    }

    int fatorialNumero (int fatorial, int numero) //calculo de fatorial
    {

        fatorial = 0;

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
        }
        else
        {
            printf("\nO c�lculo do fatorial s� se aplica a n�meros naturais.\n");
        }
        return fatorial;
    }




/*
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

        media = soma / 10;

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
*/
    void ordem_inversa()  //1 a 100 na ordem inversa
    {
       for (int i = 100; i >= 1; i--)
       {
       printf("\n%d", i);
       }
    return;

    }
/*
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



   void imprimirCodigo (char caractere=0)
       {
            printf("Digite um caractere: ");
            scanf(" %c", &caractere);
            while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer

            printf("\nCaractere digitado: %c\n", caractere);
            printf("\nC�digo ASCII: %d\n", caractere);
       }
*/

    void hello()  //frase Hello World impressa
    {
        printf("\nHello World\n");

        return;
    }



