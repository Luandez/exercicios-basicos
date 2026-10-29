//Escreva um programa que imprima os seguintes padrões separadamente, um abaixo do outro
/*
*
**
***
****
*****
******
*******
********
*********
**********

**********
*********
********
*******
******
*****
****
***
**
*

**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *


         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("(A)\n\n");

    for (int linhas = 1; linhas <= 10; linhas++)
    {
        for (int stars = 1; stars <= linhas; stars++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n(B)\n\n");

    for (int linhas = 1; linhas <= 10; linhas++)
    {
        for (int stars = 0; stars <= 10 - linhas; stars++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n(C)\n\n");

    for (int linhas = 1; linhas <= 10; linhas++)
    {
        for (int esp = 1; esp <= linhas; esp++)
        {
            printf(" ");
        }
        for (int stars = 1; stars <= 10 - linhas; stars++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n(D)\n\n");

    for (int linhas = 1; linhas <= 10; linhas++)
    {
        for (int esp = 1; esp <= 10 - linhas; esp++)
        {
            printf(" ");
        }
        for (int stars = 1; stars <= linhas; stars++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}