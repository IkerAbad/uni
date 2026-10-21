/* ===== ENUNCIADO (literal del PDF) ===== */
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
        Dada una letra, calcula su posicion en el alfabeto. Si es minuscula, la convierte antes a
        mayuscula (version A) y, ademas, avisa si el caracter introducido no es una letra (version B).
        (Practica 3, apartado 4.2.2 -> P3EJ2A y P3EJ2B)
    ENTRADAS:  un caracter (char)
    SALIDAS:   la posicion en el alfabeto (int)
    ERRORES:
        Es incorrecto si el caracter no es una letra (en la version B se avisa).
*/
#include <iostream>

using namespace std;
int main()
{
    char letra;      //variable entrada
    int posicion;   //variable salida
    const int desplazamiento = int('A') - 1;   // 'A' vale 65; A -> posición 1

    //teclado
    cout << "Introduce una letra: ";
    cin >> letra;

    if (letra >= 'A' && letra <= 'Z'){   // si se introduce una letra mayúscula
        posicion = int(letra) - desplazamiento;
        cout << "Posición en el abecedario: " << posicion;
    } else if (letra >= 'a' && letra <= 'z') { // si se introduce una letra minúscula
        //convertir a mayúscula
        letra = letra - 32;          // la 'a' (97) pasa a valer 65, o sea 'A'
        posicion = int(letra) - desplazamiento;
        cout << "Posición en el abecedario: " << posicion;
    } else { // mensaje de error
        cout << "ERROR - No se ha introducido una letra";
    }



    //muestra los resultados

    return 0;
}

