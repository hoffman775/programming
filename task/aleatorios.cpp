/*
 * Author: Eduardo Espinosa Serrano
 *
 * LastUpdated: Sier Violencia <sierisimo@gmail.com>    24-Feb-2014
 * 
 * URL: https://github.com/hoffman775/programming/blob/master/task/aleatorios.cpp
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream> /*contine todo lo orientado a obejos*/
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

void cabecera(void); //Funcion prototipo 
void cabecera2(void); //Funcion prototipo 

int main(void)
{
    time_t comienza,final;
    comienza = time(NULL);
    int x;
    char resp;
    srand((unsigned) time(NULL)); //inicialidor de nuemros aleatorios
    do {
        cabecera();
        x = rand(); //el numero aleatorio generado se asigna a la variable x 
        cout<<"\nEl numero pseudo aleatorio generado es : "<<x;
        if (pow(-1,x) > 0)    
            cout<<" y es PAR";
        else{
             cout<<" y es IMPAR";
        }    
        cout<<"\n\n\n¿Deseas continuar generando numeros pseudos  aleatorios?"<<endl;
        cout<<"\n [S] or [N]"<<endl;
        
        cin>>resp;

        system("cls");
    } while (resp=='s' || resp=='S');
    
    final= time(NULL);
    
    cabecera2();
    printf("\n\nTiempo de ejecucion  %2f SEG\n",difftime(final,comienza));
    
    system("pause");
    
    return 0;
}

/* funciones */
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
