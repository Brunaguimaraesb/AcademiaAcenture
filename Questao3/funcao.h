/**
* @file funcao.h
* @author Bruna Guimarães de Barros Leal dos Santos
* @date 14-01-2022
* @brief <Em 'funcao.h' (nesse arquivo), estão os os protótipos de funções que serão executadas no programa principal,
         O 'main.c' é o programa principal, é nele que vão ser chamadas as funções,
         No 'funcao.c' estão as implementações de funções que serão executadas no programa principal>.
*/

#ifndef FUNCAO_H_INCLUDED
#define FUNCAO_H_INCLUDED

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
#define OPCAO11 11
#define ANO_ATUAL 2022

 void hello(void);
 double calculoFahrenheit (double fahrenheit);
 int fatorialNumero (int fatorial, int numero);
 void ordemInversa();

#endif // FUNCAO_H_INCLUDED
