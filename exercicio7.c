#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int olhos, cabelo;
    int idade, anos, cont = 0, idademax = 0;

    while(idade > 0){

      printf("Selecione \n Pressione: \n M - Masculino \n F - Feminino");
      scanf("%s", &sexo);
      printf("Insira a Idade: ");
      scanf("%d", &idade);

      anos = idade;
      if(anos > 0 && idademax < anos){
        idademax = anos;
      }

      printf("Insira a cor dos Olhos:\n 1 - Azul \n 2- Verde \n 3 - Castanho");
      scanf("%d", &olhos);
      printf("Insira a cor do cabelo:\n 1 - Loiro \n 2- Castanho \n 3 - Preto");
      scanf("%d", &cabelo);

        if(sexo == 'F' || sexo == 'f') {
          if(idade >=18 && idade <=35 && cabelo == 1 && olhos == 2) {
            cont++;
          }
        }
    }
    printf("A idade maxima dos habitantes são: %d anos. \n", idademax);
    printf("As mulheres com a idade entre 18 - 35 anos que possue olhos verdes e cabelo loiro são: %d\n", cont);
}
