#include <stdio.h>

 int main()
{
  int x=0, resto=0; //"x" e "resto" ficam com 0 para certificar que nao tenha nenhum lixo ali

  printf("Digite o numero que quer verificar\n");
  scanf ("%i", &x);

  resto = x % 2;

  if (resto == 0)	//faz a verificação de Par
    printf("O numero %d eh Par\n", x); //printa o numero e diz que ele eh par

  else if (resto != 0) //faz a verificação de par
    printf("O numero %d eh Impar\n", x);

return 0;
}
