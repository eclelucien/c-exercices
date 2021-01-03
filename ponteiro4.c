#include <stdio.h>
#include <stdlib.h>


/*
    3-  Escreva um método que receba como parâmetros um vetor de inteiros, e retorne o maior elemento e o menor elemento. Observe que uma função em C não pode retornar dois valores, assim você deverá passar por referência duas variáveis, uma que represente o maior e outra o menor valor do vetor
*/

//passando com ponteiro, passamos a referencia do endereço.
void maiorMenor(int vet[], int *maior, int *menor ){
    int i;

    *maior = vet[0];
    *menor = vet[0];

    for(i=1; i<5; i++){
        if (vet[i]> *maior){
            *maior = vet[i];
        }
        if (vet[i]< *menor)
            *menor = vet[i];

    }

}


int main(){

    int *vetor, tamanho,i, Ever = 1;    
    double *vetor2;

    vetor2 = malloc (sizeof(double)*10); //aloca 10 doubles para o vetor 2
    int *maior, *menor;

    //for (;Ever;){

        printf("Tamanho do vetor a ser declarado: ");
        scanf("%d", &tamanho);
        vetor = malloc (sizeof(int)*tamanho); //aloca um vetor de inteiros de "tamanho" 
    


        for (i=0; i< tamanho; i++)
            scanf("%d", &vetor[i]);

        free(vetor);//LIBERA MEMOMÓRIA QUE CRIAMOS.
    //}

    maior = malloc (sizeof(int)); //reserva/aloca o endereço de memória.
    menor = malloc (sizeof(int));



    maiorMenor(vetor, maior, menor);

    

    printf("Maior: %d\n Menor: %d\n\n", *maior, *menor);

    free(maior); //libera um espaço de memória
    free(menor); //libera o espaço de memória do menor.

    return 0;
}
