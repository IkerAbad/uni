/* ===== ENUNCIADO (literal del PDF) ===== */
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
    AUTOR: Iker
    DESCRIPCIÓN:
        Escribe un programa que, dada una letra minúscula muestre por pantalla la correspondiente letra mayúscula.
    ENTRADAS: letra minúscula
    SALIDAS: letra mayúscula
    ERRORES:
        Es incorrecto si el carácter introducido no es una letra minúscula.
*/
#include <iostream>

using namespace std;
int main()
{
    char minuscula;
    int mayuscula;

    cout << "Introduce una letra minúscula:" << endl;
    cin >> minuscula;

//convertir a mayúscula
    mayuscula = int(minuscula) - 32;

//muestra los resultados
    cout << char(mayuscula) << endl;

    return 0;
}
