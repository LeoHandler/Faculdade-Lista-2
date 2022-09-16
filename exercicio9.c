#include <stdio.h>
#include <stdlib.h>

int main()
{
    float massa, MassaTimeProcess, massaFinal, horas, minutos, segundos;

    printf("Digite o peso do material em gramas ('G'): ");
    scanf("%f", &massa);

    MassaTimeProcess = massa;

    while (MassaTimeProcess > 0.5) {
      MassaTimeProcess = MassaTimeProcess / 2;
      massaFinal = MassaTimeProcess;
      segundos = segundos + 50;
      minutos = minutos + (segundos / 60);
      horas = horas + (minutos / 60);

      printf("\nMassa: %.2f\nHoras: %.2f\nMinutos: %.2f\nSegundos: %.2f\n", massaFinal, horas, minutos, segundos);
    }

    printf("Massa - Inicial: %.2f\n", massa);
    printf("Massa - Final: %.2f\n", massaFinal);
    printf("Horas necessarias: %.2f\n", horas);
    printf("Minutos necessarios: %.2f\n", minutos);
    printf("Segundos necessarios: %.2f\n", segundos);
}
