/**
 * @package Ordena��o de Vetores
 * programa que atende os requisitos da
 * 5 questao da primeira parcial de estrutura de dados 2
 *
 * @author Rodrigo Alves Mesquita <rodrigo54mix@gmail.com>
 * @link http://www.github.com/rodrigo54
 * @version 0.1
 * @date 5 Abr 2015
 * @copyright 2015 by Rodrigo Alves Mesquita
 *
 * @file ordenacao.h
 * Este arquivo � o cabe�alho do ordenacao.c
 */

#ifndef ORDENACAO_H_INCLUDED
#define ORDENACAO_H_INCLUDED

void insertion_sort(int *a, int tam);
void select_sort(int *a, int tam);
void bubble_sort(int *a, int tam);

void intercala(int v[],int ini, int meio,int fim,int aux[]);
void mergeSort (int vet[], int esq, int dir,int aux[]);

#endif // ORDENACAO_H_INCLUDED
