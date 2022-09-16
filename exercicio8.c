#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

  int crescimento1, crescimento2, pais1 = 90000000, pais2 = 200000000, anos = 0;
  bool flag = true;


  while(flag == true) {
    if (pais1 >= pais2) {
    flag = false;
    } else {
    crescimento1 = (pais1 * 0.03);
    crescimento2 = (pais2 * 0.015);

    pais1 = pais1 + crescimento1;
    pais2 = pais2 + crescimento2;
    anos++;

      printf("Pais A - %d\nPais B: %d\nAnos: %d\n\n", pais1, pais2, anos);
    }
  }
    printf("\nVai ser necessario %d anos. \n\n", anos);

}
