 #include "funcao.h"


 /*


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
    void ordemInversa()  //1 a 100 na ordem inversa
    {
       for (int i = 100; i >= 1; i--)
       {
       printf("\n%d", i);
       }

    }

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



 /*    void imprimirCodigo (char caractere=0)
       {
            printf("Digite um caractere: ");
            scanf(" %c", &caractere);
            while( (c = getchar()) != '\n' && c != EOF) {} //limpeza de buffer

            printf("\nCaractere digitado: %c\n", caractere);
            printf("\nC�digo ASCII: %d\n", caractere);
       }
*/

    void hello(void)  //frase Hello World impressa
    {
        printf("\nHello World\n");
    }



