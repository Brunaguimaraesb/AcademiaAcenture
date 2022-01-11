#include <stdio.h>
#define ANO_ATUAL 2021

int main (int argc, char *argv[ ]){
   int idade;
   printf("\nEntre com sua idade em anos: ");
   scanf("%d", &idade);
   printf("\nVc nasceu em %d", ANO_ATUAL - idade );
   return 0;
  }
