/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Completa el programa: la declaración del subprograma de la media, la declaración del
        vector, las llamadas y el cuerpo de la función de la media. Usa una acción para leer
        el vector y una función que devuelva la media (con el vector y su tamaño como parámetros).
        Comprobación: con {1, -1, 2} la media debe salir 0.666667.
        (Practica 7, apartado 4.2 -> P7EJ2)
    ENTRADAS:  n (número de elementos) y el vector de reales
    SALIDAS:   la media de los n elementos (float)
    ERRORES:
        n debe estar entre 1 y TAM (100).
*/
#include <iostream>

using namespace std;

void leeVector(float [],int);
......................... // declaración del subprograma de cálculo de la media
int main()
{
   const int TAM = 100;
   int n;
   ..............
   float media;
  cout<<endl<<"¿Cuántos elementos?(debe estar entre 1 y " << TAM << "): ";
   cin>>n;
   .............. /* Llamada a la acción leeVector */
   .............. /* Llamada a la función de cálculo de la media */
   cout<<endl<<"La media de los "<< n <<" números es "<< media;
   return 0;
}
void leeVector(float v[],int n)
{
   int i;
   for(i=0; i<n; i++)
   {
      cout<<endl<<"Introduce elemento "<< i;
      cin>>v[i];
   }
}
......................     // Cabecera de la definición de la función
{
   int i;
   .............
   .............
 suma=0;
   .........
   for (............)
   {
      suma=suma+.........
   }
   media=suma/n;
   ................
}
