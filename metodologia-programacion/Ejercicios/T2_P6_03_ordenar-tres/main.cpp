/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Ordena de forma creciente tres enteros leídos por teclado. El programa de abajo se da resuelto,
        pero repite el mismo bloque de intercambio tres veces: hay que REESCRIBIRLO usando un
        subprograma (por ejemplo una acción 'intercambia') que evite esa repetición.
        (Practica 6, apartado 2.1.3 -> P6EJ3)
    ENTRADAS:  tres números enteros (n1, n2, n3)
    SALIDAS:   los tres números ordenados de menor a mayor
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

int main()
{
   int n1, n2, n3;
   int aux;
   cout<<endl<<"Introduce los tres numeros:"<<endl;
   cin>>n1;
   cin>>n2;
   cin>>n3;
   if (n1 > n2)
   {
      aux = n1;
      n1 = n2;
      n2 = aux;
   }
   if (n1 > n3)
   {
      aux = n1;
      n1 = n3;
      n3 = aux;
   }
   if (n2 > n3)
   {
      aux = n2;
      n2 = n3;
      n3 = aux;
   }
   cout<<"La lista ordenada es "<< n1 << ", " << n2 << ", " << n3;
  return 0;
}
/* SE PIDE: reescribirlo usando un subprograma (acción) que haga el intercambio,
           para no repetir tres veces el mismo bloque.
*/
