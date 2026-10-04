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
        Traduce el algoritmo del NIF: lee un DNI y escribe la letra que le corresponde,
        usando un vector de caracteres con las 23 letras y el resto de la división por 23
        (el NIF se calcula como dvi MOD 23).
        (Practica 7, apartado 4.1 -> P7EJ1)
    ENTRADAS:  el dni (entero)
    SALIDAS:   la letra del NIF (caracter)
    ERRORES:
        —
*/
#include <iostream>

using namespace std;

/* Seudocódigo del enunciado (tradúcelo a C++):
   algoritmo calculo NIF
   variables
      entero dni
      caracter letraNIF
   principio
      leer(dni)
      letraNIF = calculoletraNIF(dni)
      escribir(letraNIF)
   fin

   función calculoletraNIF(entero dni) devuelve caracter
   variables
      caracter listaLetrasNIF[24] = "TRWAGMYFPDXBNJZSQVHLCKE"   (23 letras + '\0')
      entero resto
   principio
      resto = dni MOD 23
      devuelve(listaLetrasNIF[resto])
   fin
*/

int main()
{
    // ---- DECLARACIONES ----

    // ---- ENTRADA ----

    // ---- PROCESO ----

    // ---- SALIDA ----

    return 0;
}
