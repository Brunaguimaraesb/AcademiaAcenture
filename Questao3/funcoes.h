/**
* @file funcoes.h
* @author Bruna Guimaraes de Barros Leal dos Santos
* @date 14-01-2022
* @brief <Em 'funcoes.h' (nesse arquivo) - estao os os protótipos de funcoes que serao executadas no programa principal,
         O 'main.c' - o programa principal, nele vao ser chamadas as funcoes,
         No 'funcoes.c' estao as implementacoes de funçoes que serao executadas no programa principal>.
*/
#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

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
#define ESPACO

    //prototipos das funções do menu e cabeçalho
    void apresentar_intruducao(); //mostra meus dados, nome do programa e a data
    void imprimir_separacao(); //separa com uma linha para ficar mais organizado
    void apresentar_menu(); //mostra as opcoes do menu
    void limpar_buffer(); //limpeza de buffer
    void pausar_terminal(); //pausa o terminal
    void limpar_terminal(); //limpa o terminal

    //opcao0
    void finalizar_programa(); // faz a contagem regressiva de 10 a 0

    //opcao1
    double somar_mumeros(double numeroA, double numeroB); //calcula a soma de dois numeros
    int calcular_idade(int anoNacimento); //calcula a idade

    void hello();
    double calculoFahrenheit (double fahrenheit);
    int fatorialNumero (int fatorial, int numero);
    void ordem_inversa();

#endif // FUNCOES_H_INCLUDED
