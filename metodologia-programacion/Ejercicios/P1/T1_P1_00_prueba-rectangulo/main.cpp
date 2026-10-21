/* ===== ENUNCIADO (literal del PDF) ===== */
// 2.2 Edita un programa
// CodeBlocks presenta el aspecto de una aplicaci�n com�n Windows. El panel principal es el de edici�n,
// donde se escribe el c�digo fuente. A la izquierda est� el panel de proyecto, sirve para acceder a cada
// una de las partes del programa. En la parte inferior muestra diferentes paneles en los que se presenta
// toda la informaci�n sobre la compilaci�n, errores y depuraci�n del programa.
// Abre el fichero fuente, se llama main.cpp y est� dentro de Workspace/prueba2/sources (prueba2 es
// el nombre que hemos dado a nuestro proyecto, en tu caso aparecer� el que hayas dado). Aparece una
// propuesta para tu programa, �salo como plantilla, pero modif�calo como te indicamos a continuaci�n.
// Este ser� el c�digo de nuestro primer ejemplo:
// #include <iostream>
// using namespace std;
// int main()
// {
//    const int base=5, altura=7;
//    int area;
//    area = base * altura;
//    cout << "El �rea es: " << area;
//    return 0;
// }
// Formato: Indentaci�n autom�tica:
// Para facilitar la lectura de un programa, es importante utilizar correctamente la indentaci�n. CodeBocks
// te ayuda a ello mientras esribes el c�digo. Adem�s, en un programa ya escrito, puedes ajustar de manera
// autom�tica la indentaci�n de una de estas dos maneras:
//     � Plugins /Source code formatter
//     � Seleccionar (todo con Ctrl+A), bot�n derecho, Format use AStyle
/* ======================================= */

/*
    FECHA:     18-09-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Calcula el área de un rectángulo de base 5 y altura 7 (primer ejemplo de la P1,
        apartado 2.2, para aprender a crear un proyecto y editarlo).
    ENTRADAS:  ninguna (la base y la altura van como constantes)
    SALIDAS:   el área (int)
    ERRORES:   —
*/
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    const int base=5, altura=7;
    int area;

    area = base * altura;
    cout << "El área es: " << area;
    return 0;
}
