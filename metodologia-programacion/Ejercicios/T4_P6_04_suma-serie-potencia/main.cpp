/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                            Subprogramas en C++
// 2.1.4 Cuarto programa.
// El siguiente programa obtiene la suma siguiente (donde n ha de ser introducido por el teclado):
//           12 3           n
// suma = 2 + 2 2 + 2 3 ++ 2 n
// SE PIDE:
// Completa el programa (P6EJ4) siguiente. Utiliza una funci�n para calcular la potencia de una base y
// exponente cualesquiera (exponente entero >=0).
// /*
//    AUTOR:
//    DESCRIPCI�N:
//    Suma la serie de t�rmino general n/2n
//    ENTRADAS: n: n�mero de t�rminos a sumar
//    SALIDAS: suma: resultado de la suma de la serie
// */
// #include <iostream>
// using namespace std;
// .................... // Poner la cabecera del subprograma
// int main()
// {
//    int i, n;
//    float suma;
// cout<<"Introduce el n�mero de t�rminos a sumar ";
// cin>>n;
// suma = 0;
// i = ......
// while (i <= n)
// {
//    suma = suma +.......
//    i = i + 1;
// }
// cout<<endl<<" La serie suma "<<suma;
//    return 0;
// }
// ................ // Poner la cabecera del subprograma
// {
//    int pot,i;
//    pot = 1;
//    i = 1;
//    while (i <= y)
//    {
//       pot = pot * x;
//       i = i + 1;
//    }
//    return pot;
// }
/* ======================================= */

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
