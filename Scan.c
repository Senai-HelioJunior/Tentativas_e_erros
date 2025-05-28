#include <stdio.h>
#include <stdlib.h>

int main (){

int idade;
float peso, altura;
char sexo;

printf("Digite sua idade, o seu peso, altura e Sexo.\n");

scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);

 printf("Sexo: %c\nIdade: %d\nAltura: %.2f\nPeso: %.1f\n", sexo, idade, altura, peso);


return 0;

}
