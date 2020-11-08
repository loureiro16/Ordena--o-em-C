#include<stdio.h>
#include<stdlib.h>

    void  main(){
       int vet[5]= {10,19,1,0,18};
        int aux;
        int i;
        int x;
            for(i=0;i<5;i++){
                for (x=i;x<5;x++){
                    if(vet[i] > vet[x]){
                        aux = vet[i];
                        vet[i] = vet[x];
                        vet[x] = aux;
                    }
                }
                        printf("\n %d",vet[i]);
            }
    }
