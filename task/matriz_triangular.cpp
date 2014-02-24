//  WINDOWS
#include <stdio.h>
#include <stdlib.h> //incluye srand() y rand()
#include <conio.h>
#include <time.h> //incluye time()
#define MAX 10
#include <iostream>
int mat[MAX][MAX],a,b; //tamaño de la matriz  
void cabecera(void);
void cabecera2(void);
char resp;
int main()
{
time_t comienza,final;
comienza = time(NULL);
   system("cls");
    
  do
  {  
   cabecera();
   printf("\nCuantas columnas quieres:  \t");
   scanf("%d", &a);
   printf("Cuantos renglones quieres: \t");
   scanf("%d", &b);
   printf("\n\n");
       
       if (a==b)
         {
          srand(time(0));//numeros Aleatorios en funcion del tiempo
            for (int i=0;i<a;i++)//para desplazarse por las columnas
             {
                for (int j=0;j<b;j++)//para desplazarse por las filas
                 {
                    if (i>=j)
                        { mat[i][j]=rand();//Agrega numero aleatorio a la posicion ij de la matriz
                           printf("\t%d",mat[i][j]);//imprime elemento de la matriz en pantalla
                         }
                    else
                     {
                       printf("\t0");
                     }
            
                  }
          printf("\n\n");//para dejar espacios entre filas.
              }
          
         }
       else
           {
           system("cls");
           printf("Para obtener la matriz triangular, esta tiene que ser una matriz cuadrada.\n");
           printf("La matriz cuadrada tiene el mismo numero de filas que de columnas.\n\n");
           
           }

    printf("\n\n\n¿Deseas continuar generando otra matriz con numeros pseudos  aleatorios?\n");
    printf("\n [S] or [N]\n");
        
        scanf("%s",&resp);
    system("cls");
}  
  while (resp=='s' || resp=='S');
    final= time(NULL);
    system("cls");
    cabecera2();
    printf("\n\nTiempo de ejecucion  %2f SEG\n",difftime(final,comienza));

   system("pause");
   

}

void cabecera(void)

 {
    printf("\n\t\t*************************************************\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*          UNAM  FES - ACATLAN MAC              *\n");
    printf("\t\t*  Programa que genera un matriz con numeros    *\n");
    printf("\t\t*  pseudo aleatorios y obtiene la triangular    *\n");
    printf("\t\t*  de la misma.                                 *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*************************************************\n");
 }

void cabecera2(void)

 {
    printf("\n\t\t*************************************************\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*   Hecho por:                                  *\n");
    printf("\t\t*         Eduardo Espinoza Serrano              *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*************************************************\n");
 }
