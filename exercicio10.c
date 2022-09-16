#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resposta[6], sexo[2000];
    float femininoyes, masculinono;
    int i, j, contYes = 0, contNo = 0, contFemininoyes = 0, contMasculinono = 0;
    for(i = 0; i<=1999 ; i++) {
      printf("Pressione:\nM - Masculino \n F - Feminino: ");
      scanf("%s", &sexo[i]);
      printf("Responda:\n S - Sim \n N - Não");
      scanf("%s", &resposta[i]);
    }

    for(j = 0; j<=1999; j++) {

      if(sexo[j] == 'F' || sexo[j] == 'f') {
        if(resposta[j] == 'S' || resposta[j] == 's') {
          contFemininoyes++;
        }
      }

      if(sexo[j] == 'M' || sexo[j] == 'm') {
        if(resposta[j] == 'N' || resposta[j] == 'n') {
          contMasculinono++;
        }
      }

      if(resposta[j] == 'S' || resposta[j] == 's') {
        contYes++;
      } else {
        contNo++;
      }
    }

    femininoyes = (100 * contFemininoyes) / contYes;
    masculinono = (100 * contMasculinono) / contNo;

    printf("Total de pessoas que responderam 'sim': %d\n", contYes);
    printf("Total de pessoas que responderam 'nao': %d\n", contNo);
    printf("Percentual das mulheres que responderam 'sim': %.2f\n", femininoyes);
    printf("Percentual dos homens que responderam 'nao': %.2f\n", masculinono);


}
