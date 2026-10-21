/*
    FECHA:     14-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Cuenta cuántas letras 'a' hay en una entrada secuencial de caracteres que acaba en '.'.
        Traducir el algoritmo del enunciado. (Practica 5, apartado 2.1.1 -> P5EJ1)
    ENTRADAS:  una secuencia de caracteres terminada en '.'
    SALIDAS:   el número de aes (num_a, int)
    ERRORES:
        El programa no termina hasta recibir el punto.
*/
#include <iostream>

using namespace std;

/* Pseudocódigo del enunciado (tradúcelo a C++):
   algoritmo contar_aes
   variables
      carácter c
      entero num_a
   principio
      num_a = 0
      leer(c)
      mientras que c != '.' hacer
         si c == 'a' entonces
            num_a = num_a + 1
         fsi
         leer(c)
      fmq
      escribir(num_a)
   fin
*/

int main()
{
   setlocale(LC_CTYPE, "Spanish");
   
    char c;
    int num_a;

   num_a = 0;
   cout << "Introduce una serie de caracteres que acabe en '.': ";
   cin >> c;

    while (c!='.')
    {
      if (c=='a')
      {
         num_a = num_a +1;
      }
      cin >> c;
    }

    cout << "Número de veces que aparace la letra 'a': " << num_a;
   
    return 0;
}
