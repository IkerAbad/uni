/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Suma la serie  n/2^n  (1/2 + 2/4 + 3/8 + ... + n/2^n). Hay que COMPLETAR el programa:
        la cabecera del subprograma, el caso inicial de i y el término que se suma, además de
        poner la cabecera del subprograma de la potencia. El subprograma calcula x^y (y >= 0)
        multiplicando repetidamente (ya está el cuerpo, falta la cabecera).
        (Practica 6, apartado 2.1.4 -> P6EJ4)
    ENTRADAS:  n (número de términos a sumar, int)
    SALIDAS:   suma (float)
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

int main()
{
   int i, n;
   float suma;
cout<<"Introduce el numero de terminos a sumar ";
cin>>n;
suma = 0;
i = ......            // caso inicial
while (i <= n)
{
   suma = suma +.......   // el término que toca (usa la funcion potencia)
   i = i + 1;
}
cout<<endl<<" La serie suma "<<suma;
   return 0;
}
................ // Poner la cabecera del subprograma (potencia)
{
   int pot,i;
   pot = 1;
   i = 1;
   while (i <= y)
   {
      pot = pot * x;
      i = i + 1;
   }
   return pot;
}
