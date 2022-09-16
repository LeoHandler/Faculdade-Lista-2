#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool stoper = true;
    float num, total = 0;

    while (stoper == true) {
      printf("Insira um numero: ");
      scanf("%f", &num);

      if(num < 0) {
        total = total + (num);
      } else if(num == 0){
        stoper = false;
      }
    }

    printf("A soma dos numeros negativos é igual a: **%.2f**\n", total);
}
