/*
Fa ̧ca um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do
menor e maior elemento do vetor fornecido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define MX 100
float soma = 0;

int main(){
   
    float vetorx[TAM];

    srand(time(NULL));

    for(int k=0; k<TAM; k++){
        vetorx[k] = ((float) rand()/RAND_MAX) * MX;
    }
    puts("Vetor ordenado:\n");
    for(int k =0; k<TAM; k++){
        printf("%.2f\n",vetorx[k]);
    }

    float menor = vetorx[0], maior = vetorx[0];

    for(int k = 0; k<TAM; k++){
    maior = maior<vetorx[k]?vetorx[k]:maior;
    menor = menor>vetorx[k]?vetorx[k]:menor;
    }

    printf("Menor : %.2f\n", menor);
    printf("Maior : %.2f\n", maior);

    return 0;
}
