/**
 * @package Ordenação de Vetores
 * programa que atende os requisitos da
 * 5 questao da primeira parcial de estrutura de dados 2
 *
 * @author Rodrigo Alves Mesquita <rodrigo54mix@gmail.com>
 * @link http://www.github.com/rodrigo54
 * @version 0.1
 * @date 5 Abr 2015
 * @copyright 2015 by Rodrigo Alves Mesquita
 *
 * @file main.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include "ordenacao.h"

int main(){
    system("title Ordenação de Vetores");
    setlocale(LC_ALL, "Portuguese");//Define o idioma para Portugues
	int a[] = {8, 3, 7, 5, 2, 9, 1, 15, 4, 21, 10, 25, 14, 12};
	int aux[15];
    int opcao;
	int i;
	do{
        printf("\n\tOrdenação de Vetores!");
        printf("\n\tVetor Original:{");
         for(i = 0; i < 14; i++){
             printf(" %d",a[i]);
             if(i < 13)
               printf(",");
         }
         printf("}\n");
        //quickSort( a, 0, 8);
        printf("\n\tSelecione um método de ordenação:");
        printf("\n\t1. Insert Sort");
        printf("\n\t2. Select Sort");
        printf("\n\t3. Bubble Sort");
        printf("\n\t4. Merge Sort\n\t");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                insertion_sort(a,14);
                break;
            case 2:
                select_sort(a,14);
                break;
            case 3:
                bubble_sort(a,14);
                break;
            case 4:
                mergeSort( a, 0, 14 ,aux);
                break;
            default:
                printf("\a\tDigite uma opção valida\n");
                getch();//espera que o usuário pressione uma tecla
                system("cls");
                break;
        }
	}while(opcao>4);


	printf("\n\tVetor Ordenado:{");
     for(i = 0; i < 14; i++){
         printf(" %d",a[i]);
         if(i < 13)
           printf(",");
     }
    printf("}\n\t");
    getch();
    return 0;
}
