#include <stdio.h>
#include <stdlib.h>

int main() {
  float n1, n2, n3, media[50];
  char alunos[50][40];
  int i, a;

  for (i = 0; i <= 49; i++) {
    printf("Insira 3 notas (Media Aritmética): ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Insira o nome do aluno: ");
    scanf("%s", &alunos[i]);
    
    //Calculo
    media[i] = (n1 + n2 + n3) / 3;
  }

  for (a = 0; a <= 49; a++) {
    printf("Aluno: %s - Média: %f\n", alunos[a], media[a]);
  }

  return 0;
}