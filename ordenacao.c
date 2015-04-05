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
 * @file ordenacao.c
 * Este  é o arquivo principal do ordenacao.h
 */

#include "ordenacao.h"

// Função de Ordenação por Inserção
void insertion_sort(int *a, int tam ){
 int i, j, tmp;

 for(i = 1; i < tam; i++)
 {
  tmp = a[i];
  for(j = i-1; j >= 0 && tmp < a[j]; j--)
  {
   a[j+1] = a[j];
  }
  a[j+1] = tmp;
 }
}

// Função de ordenação por seleção
void select_sort(int *a, int tam){
     int i, j, k, tmp, troca;

     for(i = 0; i < tam-1; i++){
        troca = 0;
        k = i;
        tmp = a[i];

        for(j = i+1; j < tam; j++){
            if(a[j] < tmp){
                k = j;
                tmp = a[j];
                troca = 1;
            }
        }
        if(troca){
            a[k] = a[i];
            a[i] = tmp;
        }
     }
}

// Função de ordenação bolha
void bubble_sort(int *a, int tam){
     int i, j, tmp;

     for(i = tam -1; i >= 1; i--){

        for(j = 0; j < i; j++){

           if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
           }
        }
     }
}

//Função Merge sort
void intercala(int v[],int ini, int meio,int fim,int aux[]){
    int i = ini, j = meio + 1, k = 0;

    while(i <= meio && j <= fim){
        if (v[i] <= v[j]){
            aux[k++] = v[i++];
        }else{
            aux[k++] = v[j++];
        }
    }
    while(i <= meio){
        aux[k++] = v[i++];
    }
    while(j <= fim){
        aux[k++] = v[j++];
    }

    for(i = ini, k = 0; i <= fim; i++,k++){
        v[i]=aux[k];
    }
}
void mergeSort (int vet[], int esq, int dir,int aux[]){
    int meio;

    if(esq < dir){
        meio = (esq+dir)/2;
        mergeSort(vet,esq,meio,aux);
        mergeSort(vet,meio+1,dir,aux);
        intercala(vet,esq,meio,dir,aux);
    }
}
