/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Determina si un texto contiene o no la letra 'w'.
        Hay que COMPLETAR el programa de abajo (los ???) y MEJORARLO para que muestre un
        mensaje más informativo según el valor de 'encontrado' (con una estructura condicional).
        (Practica 5, apartado 2.2.1 -> P5Ej3)
    ENTRADAS:  un texto acabado en punto
    SALIDAS:   la variable booleana 'encontrado' + el mensaje
    ERRORES:
        El programa no termina hasta que se introduce un punto.
*/
#include <iostream>

using namespace std;

int main()
{
   char c;
   bool encontrado;

   cin.unsetf(ios::skipws); // Evita que cin ignore espacios en blanco

   encontrado = false        // Solución del problema trivial

   cout << endl << "Introduce un texto terminado en punto y pulsa ENTER: ";

   cin >> c;

   while ( (???) && (???) )
   {
      if (???)
      {
         encontrado = ???
      }
      cin >> c;
   }

   cout << endl << "¿La letra w estaba en el texto?: " << encontrado;
   return 0;
}
