#include <stdio.h>

int main(){

    int n;

    int maior_num, menor_num;

    int cont = 0;

    do{

        puts("Informe um número: ");
        scanf("%d", &n);

        if((n!=0) && (!cont)){

            maior_num = menor_num = n;

            printf("Maior número: %d\n", maior_num);
            printf("Menor número: %d\n", menor_num);

        }
        
        else if(n!=0){
            maior_num = (n>maior_num)?n:maior_num;
            menor_num = (n<menor_num)?n:menor_num;

            printf("Maior número: %d\n", maior_num);
            printf("Menor número: %d\n", menor_num);
        }

        cont++;

    }while(n!=0);

    puts("Programa finalizado.");

    return 0;
}