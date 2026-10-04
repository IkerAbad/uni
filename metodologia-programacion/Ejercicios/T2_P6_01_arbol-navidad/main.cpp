/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Dibuja un árbol de navidad con asteriscos, usando la acción dibujaLinea (que ya está
        hecha y dibuja una línea de n asteriscos centrada). Hay que COMPLETAR el main
        con las llamadas a dibujaLinea.
        La copa tiene 20 líneas (de 1, 3, 5... hasta 39 asteriscos) y el tronco son 4 líneas
        de 5 asteriscos.
        (Practica 6, apartado 2.1.1 -> P6EJ1)
    ENTRADAS:  ninguna
    SALIDAS:   el árbol dibujado por pantalla
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

void dibujaLinea (int);
int main()
{
   ........ // Completar con las llamadas a dibujaLinea
   ........
   return(0);
}
void dibujaLinea (int n)
{
   int i;
   i = 1;
   while ( i <= (79-n) / 2 )
   {
      cout<<' ';
      i = i + 1;
   }
   i = 1;
   while ( i <= n )
   {
      cout<<'*';
      i = i + 1;
   }
   cout<<endl;
}
