#include <stdio.h>
#include <stdlib.h>
#include <iostream> /*contine todo lo orientado a obejos*/
#include <math.h>
#include <pthread.h>
using namespace std;
void cabecera(void); /*Funcion prototipo */
void cabecera2(void); /*Funcion prototipo */
int main(void)
{
    printf("Hola que haces\n");
    sleep(3); 
    time_t comienza,final;
    comienza = time(NULL);
    int x;
    char resp;
    srand((unsigned) time(NULL)); /*inicialidor de nuemros aleatorios*/
    do {
        cabecera();
        x = rand();   /*el numero aleatorio generado se asigna a la variable x */
        printf("\nEl numero pseudo aleatorio generado es : %d",x);
        if (pow(-1,x) > 0)
            
            printf(" y es PAR");
        else{
             printf(" y es IMPAR");
             }    
        printf("\n\n\n¿Deseas continuar generando numeros pseudos  aleatorios?\n");
        printf("\n [S] or [N]\n");
        
        scanf("%s",&resp);
        system("cls");
        }
    while (resp=='s' || resp=='S');
    final= time(NULL);
    cabecera2();
    printf("\n\nTiempo de ejecucion  %2f SEG\n",difftime(final,comienza));
    system("pause");

}
/* finciones */
void cabecera(void)

 {
    printf("\n\t\t*************************************************\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*          UNAM - FES ACATLAN MAC               *\n");
    printf("\t\t*  Programa que genera un numero aleatorio      *\n");
    printf("\t\t*        y determina si es PAR o IMPAR          *\n");
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

