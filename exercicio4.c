#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sexo[10], contFeminino = 0, i, x;
    float altura[10], somaTurma, somaFem, mediaTurma, mediaFem, AlturaMax, AlturaMin;

    for(i = 0; i<=9 ; i++){
      printf("Informe o sexo do aluno:\n1 - Sexo Masculino\n2 - Sexo Feminino ");
      scanf("%d", &sexo[i]);
      printf("Informe a altura do aluno(metros): ");
      scanf("%f", &altura[i]);
    }

    AlturaMax = altura[0];
    AlturaMin = altura[0];

    for (x = 0; x<=9 ; x++) {
      somaTurma = somaTurma + altura[x];

      if (altura[x] >= AlturaMax) {
        AlturaMax = altura[x];
      } else if (altura[x] <= AlturaMin) {
        AlturaMin = altura[x];
      }

      if (sexo[x] == 2) {
        somaFem = somaFem + altura[x];
        contFeminino++;
      }
    }

    mediaTurma = (somaTurma) / 10;
    mediaFem = (somaFem) / contFeminino;

    for (i = 0; i <= 9; i++) {
      printf("Aluno %d: - Altura: %.2f - Altura(m): %d\n", i, altura[i], sexo[i]);
    }

    printf("A altura media dos alunos do sexo feminina: %.2f\n", mediaFem);
    printf("A altura media dos alunos do sexo masculino: %.2f\n", mediaTurma);

}
