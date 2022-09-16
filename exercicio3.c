#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], maior, menor;
    float soma, media;

    for(int i = 0; i<=9 ; i++){
        printf("Insira um numero: ");
        scanf("%d", &num[i]);
    }
    maior = num[0];
    menor = num[0];

    for(int x = 0; x<=9 ; x++){
      soma = soma + num[x];
        if(num[x]>maior){
            maior = num[x];
        }else if(num[x]<menor){
            menor = num[x];
        }
    }

    media = (soma) / 10;

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("A media entre os numeros: %.2f\n", media);

}
