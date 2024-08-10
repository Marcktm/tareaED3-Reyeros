#include <stdio.h>
//Mostrar por pantalla números pares y almacenarlos en un arreglo
int main(){

    int pares[50];
    int contador = 0;

    for(int i=0; i<100; i++){
        if(i % 2 == 0){
            pares[contador] = i;
            contador++;
        }
    }

    for (int i=0; i<contador; i++){
        printf("%d ", pares[i]);
    }

    return 0;
}
