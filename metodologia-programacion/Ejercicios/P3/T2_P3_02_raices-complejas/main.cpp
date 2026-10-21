/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                             Estructura alternativa en C++
//    if (...)
//    {
//    cout << endl << "Como m�ximo dos de sus valores coinciden";
//    }
//    if (...)
//    {
//    cout <<endl<<"El valor de v2 est� comprendido entre los de v1 y v3";
//    }
//    return 0;
// }
// 4.2 Segundo ejercicio
// Con este ejercicio aprender�s a:
// � Escribir esquemas condicionales en C++.
// Repasar�s c�mo:
// � Corregir programas con errores.
// 4.2.1 Primer programa
// Para este ejercicio debes recuperar el tercer programa que realizaste en la primera pr�ctica del curso
// (P1EJ3.CPP). En ese programa se calculaban las ra�ces de una ecuaci�n de segundo grado, pero el
// programa generaba un error cuando las ra�ces del polinomio eran n�meros complejos (al ser el
// discriminante negativo). Es este:
// #include <iostream>                          Fichero de cabecera
// #include <cmath>                              para la funci�n sqrt
// using namespace std;
// int main()                        // variables de coeficientes
// {                                 //variables de soluciones
//             float a,b,c;
//             float discriminante;
//             float x1,x2;
//             cout << ("introduce los coeficientes de ax2+bx+c");
//             cout << endl<< "a= ? ";
//             cin >>a;
//             cout << endl<< "b= ? ";
//             cin >>b;
//             cout << endl<< "c= ? ";
//             cin >>c;
//             //c�lculo de las raices
//             discriminante=b*b-4*a*c;
//             x1=(-b + sqrt(discriminante)) / (2*a);
//             x2=(-b - sqrt(discriminante)) / (2*a);
//             cout << endl<< "Las soluciones son: " << x1 << " y " << x2;
//             return 0;
// }
// Mejora este programa de forma que calcule tambi�n las ra�ces si estas son n�meros complejos. Llama
// a este nuevo programa P3EJ2.
//                                                                                                    Estructura alternativa en C++
// Recuerda, un complejo en forma cartesiana se escribe parteReal + parteImaginaria i
// Se calcula as�:                                             Ya que discriminante es negativo
//                                                             (bastar�a con cambiarlo de signo)
//             parteReal=-b/(2*a)
//             parteImaginaria=sqrt(abs(discriminante))/(2*a)
// Y el programa las mostrar�a por la pantalla as�:
// cout << parteReal<<" + " << parteImaginaria <<" i" << endl;
// cout << parteReal<<" - " << parteImaginaria <<" i" << endl;
// 4.2.2 Segundo programa
// Para este ejercicio debes recuperar el segundo programa que realizaste en la segunda pr�ctica del curso
// (P2EJ2.cpp). En ese programa se calculaba la posici�n en el alfabeto de una letra may�scula, pero el
// programa fallaba cuando se introduc�a una min�scula.
// Mejora este programa de forma que, si lo que se introduce es una letra min�scula, se utilice el ejercicio
// 4 de la pr�ctica 2 (P2EJ4.cpp) para convertir dicha letra de min�scula a may�scula, actuando despu�s
// de la misma forma que si directamente se hubiera introducido una may�scula. Llama a este nuevo
// programa P3EJ2A.
// Mejora este �ltimo programa P3EJ2A para que muestre un mensaje de error si no se introduce una
// letra. Llama a este �ltimo P3EJ2B.
// 4.2.3 Tercer programa
// En el siguiente programa (P3EJ4.cpp), hay errores sint�cticos y faltan algunas cosas. Corrige los errores
// y completa lo que falta.
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCI�N:
//       Muestra por pantalla los valores "rojo", "azul", "verde" o "negro" dependiendo
//       del valor de una variable
//    ENTRADAS: el valor de una variable (color)
//    SALIDAS:
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    char color;
//    // Entrada de datos
//    cout << endl << "Introduce una sola letra: " << endl;
//    cout << "color = ? ";
//    cin >> color;
//                                                                           Estructura alternativa en C++
//    switch (color)
//    {
//       case 'r':
//       case "R":
//       {
//          cout << endl << "Rojo";
//       }
//       case v:
//       case 'V':
//       {
//          cout << endl << "Verde";
//       }
//       break;
//       case 'a':
//       case 'A':
//       {
//          cout << endl << "Azul";
//       }
//       break;
//       default:
//       {
//          cout << endl << "Negro";
//       }
//    return 0;
// }
// 4.2.4 Cuarto programa
// Traduce el siguiente algoritmo a C++. Edita, guarda con el nombre P3EJ5, compila y ejecuta el programa.
// Entrada: temperatura
// Salida: se muestra un mensaje en funci�n de la temperatura
// Algoritmo controlTemperatura
// variables
//    real temperatuta
// principio
//    leer(temperatura)
//    si temperatura<=0 entonces
//       escribir("Demasiado fr�o")
//    si_no
//       si temperatura<=10 entonces
//          escribir("Fr�o")
//       si_no
//          si temperatura<=25 entonces
//              escribir("Agradable")
//          si_no
//              si temperatura<=35 entonces
//                 escribir("Calor")
//              si_no
//                 escribir("Demasiado calor")
//              fsi
//          fsi
//       fsi
//    fsi
// fin
/* ======================================= */

/*
    FECHA:     02-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Calcula las raices reales de a x^2 + b x + c y, si el discriminante es negativo, las muestra
        como complejas en la forma parteReal +- parteImaginaria i.
    ENTRADAS:  coeficientes a, b, c (float)
    SALIDAS:   las dos raices: reales o complejas (float)
    ERRORES:
        No se comprueba que a sea distinto de 0.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c; //variables de entrada
    float x1,x2,parteReal,parteImaginaria; //variables de salida
    float discriminante; // variable auxiliar

    //teclado
    cout << "Introduce los coeficientes." << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    //cálculo
    discriminante = (b * b) + ((-4)*(a)*(c));
    if (discriminante >= 0){
        x1 = (-b + sqrt(discriminante))/2/a;
        x2 = (-b - sqrt(discriminante))/2/a;
        cout << "1ª raiz: " << x1 << endl;
        cout << "2ª raiz: " << x2;
    } else {
        parteReal=-b/(2*a);
        parteImaginaria=sqrt(abs(discriminante))/(2*a);
        cout << parteReal<<" + " << parteImaginaria <<" i" << endl;
        cout << parteReal<<" - " << parteImaginaria <<" i" << endl;
    }
    return 0;
}

