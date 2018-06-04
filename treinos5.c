#include<stdio.h>

int main(void)

{

  char a = 1;
  char b = 2;
  char c = 3;
  char d = 1;  
   
    if (a > b && a < c)
    {
      printf("Condição 1 Verdadeira\n");
    }

    if(a == b || a == d)
    {
      printf("Condição 2 Verdadeira\n");
    }

    else {
    printf("NENHUMA CONDIÇÃO VERDADEIRA!!\n");
        }
    return 0;
}
