#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
*Academia Accenture
*tividade 1: Rel�gio Falado
*Data: 04/01/2022
*Autor:Bruna Guimar�es
*Fun��o: Receber um valor correspondente a hora e de acordo com o hor�rio fornecido, imprimir um cumprimento adequado juntamente com meu nome.
*/

int main (int argc, char *argv[ ])
{
    setlocale(LC_ALL, "Portuguese");
    int hora;

    printf("\nDigite a hora: ");
    scanf("%d", &hora);

    if(hora >= 0 && hora< 12)
    {
        printf("\nBom dia, Bruna Guimar�es!");
    }
    else if(hora >= 12 && hora < 18)
    {
        printf("\nBoa tarde, Bruna Guimar�es!");
    }
    else if(hora >= 18 && hora <= 23)
    {
        printf("\nBoa noite, Bruna Guimar�es!");
    }
    else
    {
        printf("\nHor�rio inv�lido, Bruna Guimar�es!");
    }
    return 0;
}
