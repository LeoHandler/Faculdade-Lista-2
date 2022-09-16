#include <stdio.h>
#include <stdlib.h>

int main()
{

  char sexo[10];
  int idade[10],  somaPessoas = 0, somaHomem = 0, somaMulher = 0;
  float altura[10], percIdade, mediaIdadeGrupo, mediaAltMulher, mediaIdadeHomem, somaIdadeGrupo, somaAltMulher, somaIdadeHomem;

  for(int i = 0; i<=9 ; i++){
    printf("Sexo(F)Feminino (M)Masculino: ");
    scanf("%s", &sexo[i]);
    printf("Idade: ");
    scanf("%d", &idade[i]);
    printf("Altura(metros): ");
    scanf("%f", &altura[i]);
  }

  for (int x = 0; x<=9 ; x++) {
    somaIdadeGrupo = somaIdadeGrupo + idade[x];

    if(sexo[x] == 'F' || sexo[x] == 'f'){
      somaAltMulher = somaAltMulher + altura[x];
      somaMulher++;
    }else if(sexo[x] == 'M' || sexo[x] == 'm'){
      somaIdadeHomem = somaIdadeHomem + idade[x];
      somaHomem++;
    }

    if(idade[x] >= 18 && idade[x] <= 35){
      somaPessoas++;
    }
  }

  percIdade = (100 * somaPessoas) / 10;
  mediaIdadeGrupo = somaIdadeGrupo / 10;
  mediaAltMulher = somaAltMulher / somaMulher;
  mediaIdadeHomem = somaIdadeHomem / somaHomem;

  printf("A media de idade do grupo: %.1f\n", mediaIdadeGrupo);
  printf("A media de altura das mulheres(m): %.2f\n", mediaAltMulher);
  printf("A media de idade dos homens: %.1f\n", mediaIdadeHomem);
  printf("Porcentagem de pessoas entre 18 e 35 anos: %.2f\n", percIdade);

}
