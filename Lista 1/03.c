#include <stdio.h>

int main()
{
    int linhas, c;
    int aster = 1;
    printf("Você quer uma árvore de quantas linhas? ");
    scanf("%d", &linhas);
   c = linhas;
   for (int i = 1; i < linhas; i++){ 
      printf(" ");
   };
   printf(" *");
   for (int i = 0; i < linhas; i++){ 
      for (int j = 1; j < c; j++){
         printf(" ");
      };
      c = c - 1;
      printf(" ");
      for (int j = 1; j < aster; j++){
         printf("*");
      };
      aster = aster + 2;
      printf("\n");
   };
   for (int i = 1; i < linhas; i++){
      printf(" ");
   };
    return 0;
}