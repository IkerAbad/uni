/* ===== ENUNCIADO (literal del PDF) ===== */
// 3.2 Segundo programa
//          Con este ejercicio repasar�s como:
// � Editar un programa en C++.
// � Grabarlo.
// � Compilarlo.
// � Ejecutarlo.
// Edita, graba (P1EJ3), compila y ejecuta el siguiente programa escrito en C++.
// /*
//    FECHA:
//    AUTOR: profesores de Inform�tica
//    DESCRIPCI�N:
//       Calcula el valor de las ra�ces de un polinomio de coeficientes reales.
//       Si el polinomio tiene ra�ces complejas el programa mostrar� un mensaje de error.
//    ENTRADAS: los coeficientes del polinomio (variables a,b,c)
//    SALIDAS: las ra�ces del polinomio (variables x1, x2)
//    ERRORES:
//       El programa no funciona si los valores de los coeficientes introducidos
//       son tales que el polinomio presenta ra�ces complejas. En este caso el
//       programa mostrar� un error de ejecuci�n (-1.NAND).
// */
// #include <iostream>
// #include <cmath>      // Fichero de cabecera necesario para usar la funci�n sqrt()
// using namespace std;
// int main()                        //variables de coeficientes
// {                                 //variables de soluciones
//             float a,b,c;
//             float discriminante;
//             float x1,x2;
// cout << ("introduce los coeficientes de ax^2+bx+c");
// cout << endl<< "a= ? ";
// cin >>a;
// cout << endl<< "b= ? ";
// cin >>b;                          /* lectura de los coeficientes */
// cout << endl<< "c= ? ";
// cin >>c;
// //c�lculo de las raices
// discriminante=b*b-4*a*c;
// x1=(-b + sqrt(discriminante)) / (2*a);
// x2=(-b - sqrt(discriminante)) / (2*a);
//             //muestra los resultados
//             cout << endl<< "Las soluciones son: " << x1 << " y " << x2;
//             return 0;
// }
// NOTA IMPORTANTE: Si ejecutas el programa para valores de a, b y c que hagan el discriminante
// negativo, las ra�ces son complejas y sin embargo el programa da como soluciones nan y nan (nan = Not
// a Number).
// Lo que est� ocurriendo es que durante la ejecuci�n del programa se est� intentando resolver una ra�z
// cuadrada de un n�mero negativo, lo cual no es posible. Se trata de una operaci�n inv�lida. Es un ejemplo
// de error de ejecuci�n.
// 3.3 Ejercicios
// 1. Escribe un programa que, dados los catetos de un tri�ngulo rect�ngulo cualquiera, calcule el valor
//      de su hipotenusa y lo muestre por pantalla.
// 2. Escribe un programa que, dada una letra min�scula muestre por pantalla la correspondiente letra
//      may�scula.
//          NOTA:
//          En este ejercicio puedes necesitar obtener el c�digo ASCII de una letra o la letra que corresponde
//          a un c�digo ASCII determinado. Para lo primero puedes usar
//                              int(letra) donde letra es una variable de tipo char.
//          Para lo segundo, puedes usar
//                              char(num) donde num es una variable de tipo int.
// NOTA
// En un workspace de CodeBlocks puede haber varios
// proyectos abiertos al mismo tiempo. Sin embargo, los
// botones de compilaci�n (build) y ejecuci�n (run)
// funcionar�n solo sobre el proyecto "activo", que se
// distingue porque su nombre aparece en negrita en el
// �rbol de proyectos. Para ejecutar otro proyecto, debes
// primero activar ese proyecto, seleccionando con el
// bot�n derecho del rat�n la opci�n "Activate Project" del
// men� contextual.
// Mira en la figura como, estando el proyecto P1EJ5
// activo (no se ve completo porque lo tapa el men�
// contextual), podr�amos activar el proyecto P1EJ3 para
// volver a ejecutarlo.
/* ======================================= */

/*
    FECHA: 18-09-2026
    AUTOR: profesores de Informática
    DESCRIPCIÓN:
        Calcula el valor de las raíces de un polinomio de coeficientes reales.
        Si el polinomio tiene raíces complejas el programa mostrará un mensaje de error.
    ENTRADAS: los coeficientes del polinomio (variables a,b,c)
    SALIDAS: las raíces del polinomio (variables x1, x2)
    ERRORES:
        El programa no funciona si los valores de los coeficientes introducidos
        son tales que el polinomio presenta raíces complejas. En este caso el
        programa mostrará un error de ejecución (-1.NAND).
*/
#include <iostream>
#include <cmath> // Fichero de cabecera necesario para usar la función sqrt()
using namespace std;
int main()
{
    float a,b,c;
//variables de coeficientes
    float discriminante;
    float x1,x2; //variables de soluciones
    cout << ("introduce los coeficientes de ax^2+bx+c");
    cout << endl << "a= ? ";
    cin >> a;
    cout << endl << "b= ? ";
    cin >> b; /* lectura de los coeficientes */
    cout << endl << "c= ? ";
    cin >> c;
//cálculo de las raices
    discriminante=b*b-4*a*c;
    x1=(-b + sqrt(discriminante)) / (2*a);
    x2=(-b - sqrt(discriminante)) / (2*a);
//muestra los resultados
    cout << endl << "Las soluciones son: " << x1 << " y " << x2;
    return 0;
}
