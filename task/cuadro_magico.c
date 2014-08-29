/* Hecho por: Eduardo Espinoza Serrano */
/* Fes Acatlan UNAM */

#include <stdio.h>

const int Max=50;

void cuadrado (int [][Max],int);
void imprimir (int [][Max],int);

void main(void)
{
  int cuadro[Max][Max],tam;

   do 
   {
        printf("Ingrese el tamaño de la matriz cuadrada :\n\n\n");
        scanf("%d",&tam);

   } while ((tam > Max || tam < 1) && (tam % 2));
   if ((tam > Max || tam < 1) && (tam % 2)) 
   {
   cuadrado (cuadro , tam);
   imprimir (cuadro , tam);
   } 
   else
       printf("Error\n");
        printf("El numero de flas y columnas debe ser impar\n");
}

/* FUNCIONES */
void cuadrado ( int A[][Max], int N )
{
 int i=1 , fila = 0, columna = N/2,numero = N*N;
  while (i<= numero) 
  {
     A[fila][columna] =i;
      if (i%N != 0) 
      {
         fila = (fila-1+N)%N;
         columna = (columna + 1) % N;
      }
      else
          fila ++;
        i++;    
  }

}


void imprimir (int A[][Max], int N)
{
int i , j;
 for (i = 0; i < N; i++) 
 {
    for (j = 0; j < N; j++) 
    {
     printf("\t%d",A[i][j]);
     }
  printf("\n\n");
 }
}
