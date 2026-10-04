/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                 Vectores en C++
// 4 Sesi�n de pr�cticas
// 4.1 Primer ejercicio
// Con este ejercicio aprender�s como:
// � Declarar vectores en C++ y acceder a sus componentes
// Traduce el siguiente algoritmo a C++. Edita, guarda con el nombre P7EJ1, compila y ejecuta el programa.
// Recuerda que C++ indexa los vectores comenzando en 0.
// Especificaci�n:
// Entrada: dni
// Salida: letra del NIF
// algoritmo calculo NIF
// variables
// entero dni
// car�cter letraNIF
// principio
//    leer(dni)
//    letraNIF=calculoletraNIF(dni)
//    escribir(letraNIF)
// fin
// funci�n calculoletraNIF(entero dni) devuelve car�cter
// variables
//    car�cter listaLetrasNIF[24]= "TRWAGMYFPDXBNJZSQVHLCKE" (23 caracteres m�s `\0')
//    entero resto
// principio
//    resto = dni MOD 23
//    devuelve(listaLetrasNIF[resto])
// fin
// 4.2 Segundo ejercicio
// Con este ejercicio repasar�s como:
// � Trabajar con funciones en C++.
// � Usar vectores en C++.
// � Completar programas.
// Aprender�s como
// � Escribir estructuras for.
// � Usar vectores como par�metros en C++.
// Puedes recuperar este programa, fichero P7EJ2.
//                                                                                                       Vectores en C++
// En este programa calculamos la media de una lista de n�meros reales introducidos por el teclado.
// Utiliza una acci�n para leer los datos y almacenarlos en un vector. Utiliza una funci�n que devuelve la
// media de los elementos de un vector tomado como par�metro (y su n�mero de elementos).
// Comprueba que el programa funciona para alguna serie de valores que t� introduzcas, y compru�balo
// tambi�n para el conjunto {1,-1,2} (media 0.666667).
// /*
//    AUTOR:
//    DESCRIPCION: Calcula la media de una lista de n�meros reales (m�ximo 100)
//    ENTRADAS: N�mero de n�meros (n) y vector de n�meros reales
//    SALIDAS: media de los n n�meros
//    ERRORES:
// */
// #include <iostream>
// using namespace std;
// void leeVector(float [],int);
// ......................... //declaraci�n del subprograma de c�lculo de la media
// int main()
// {
//    const int TAM = 100;
//    int n;
//    ..............
//    float media;
//   cout<<endl<<"�Cu�ntos elementos?(debe estar entre 1 y " << TAM << "): ";
//    cin>>n;
//    .............. /* Llamada a la acci�n leeVector*/
//    .............. /* Llamada a la funci�n de calculo de la media */
//    cout<<endl<<"La media de los "<< n <<" n�meros es "<< media;
//    return 0;
// }
// void leeVector(float v[],int n)
// {
//    int i;
//    for(i=0; i<n; i++)
//    {
//       cout<<endl<<"Introduce elemento "<< i;
//       cin>>v[i];
//    }
// }
// ......................     // Cabecera de la definici�n de la funci�n
// {
//    int i;
//    .............
//    .............
//  suma=0;
//    .........
//    for (............)
//    {
//       suma=suma+.........
//    }
//    media=suma/n;
//    ................
// }
/* ======================================= */

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
