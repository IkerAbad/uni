/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                        Subprogramas en C++
// 2 Sesi�n de pr�cticas
// 2.1 Primer ejercicio
// Con este ejercicio aprender�s a:
// � Realizar llamadas a subprogramas.
// � Reconocer y ensayar con los diferentes tipos de par�metros en C++.
// � Realizar programas mediante la t�cnica de dise�o descendente.
// 2.1.1 Primer programa.
// El siguiente programa en C++ dibuja en la pantalla un �rbol de navidad con asteriscos tal como ves en la
// figura. Para ello dispone de una acci�n llamada dibujaLinea que dibuja una l�nea de asteriscos de
// longitud n:
// void dibujaLinea(int n)
// Su par�metro de entrada, n, indica el n�mero de asteriscos que tiene que dibujar en la l�nea.
// SE PIDE:
// Acabar el programa que realiza el dibujo de la figura siguiente:
// (la copa tiene 20 l�neas y la �ltima l�nea tiene 39 asteriscos)
//                                *
//                              ***
//                             *****
//                           *******
//                         *********
//                        ***********
//                      *************
//                    ***************
//                   *****************
//                 *******************
//               *********************
//              ***********************
//            *************************
//          ***************************
//         *****************************
//       *******************************
//      *********************************
//    ***********************************
//  *************************************
// ***************************************
//                             *****
//                             *****
//                             *****
//                                                                                                                                                                                                      Subprogramas en C++
// Para ello toma el fichero P6EJ1 y compl�talo con las llamadas al subprograma dibujaLinea que sean
// necesarias.
// /*
// AUTOR:
//    DESCRIPCION:
//    Dibuja un �rbol de navidad con asteriscos
//    ENTRADAS:
//    SALIDAS:
//    ERRORES:
// */
// #include <iostream>
// using namespace std;
// void dibujaLinea (int);
// int main()
// {
//    ........ // Completar
//    ........
//    return(0);
// }
// void dibujaLinea (int n)
// {
//    int i;
//    i = 1;
//    while ( i <= (79-n) / 2 )
//    {
//       cout<<' ';
//       i = i + 1;
//    }
//    i = 1;
//    while ( i <= n )
//    {
//       cout<<'*';
//       i = i + 1;
//    }
//    cout<<endl;
// }
// Una vez hayas conseguido ver en la pantalla el �rbol de asteriscos, intenta estos dos cambios que se
// proponen a continuaci�n:
//     1. Consigue un �rbol formado con el car�cter @ en lugar del asterisco.
//     2. Mejora el programa (y el subprograma) para que el �rbol se visualice con cualquier car�cter. El
//          programa principal pedir� al operador que introduzca el car�cter con el que quiere que se dibuje
//          el �rbol (haz los cambios necesarios en el programa). En las sucesivas llamadas a la acci�n
//          dibujaLinea, le pasar�, adem�s de la longitud de la misma, el car�cter a utilizar para crear dicha
//          l�nea (haz los cambios necesarios en el subprograma).
/* ======================================= */

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
