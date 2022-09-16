#include<stdio.h>
#include<stdlib.h>

int main() {

  int num[20], contador = 0;
  int i;

 for(i = 0; i <=19; i++) {
    printf("Insira 20 valores inteiros.");
    scanf("%d", &num[i]);
 }
  
 for(i = 0; i <=19; i++) {
    if(num[i] > 1000) {
    printf("Os numeros maiores que mil são: %d \n", num[i]);
    contador++;
    }
    else if (num[i] <= 0) {
    printf("Insira um valor inteiro.");
   }
 }
    printf("Dentro do vetor possue: *%d* numeros maiores que 1000 \n", contador);
  return 0;
}