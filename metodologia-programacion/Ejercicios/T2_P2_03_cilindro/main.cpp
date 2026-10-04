/* ===== ENUNCIADO (literal del PDF) ===== */
//                                Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                Estructura de un programa en C++
// 2.4 El programa completo
// La traducci�n a C++ del seudoc�digo del algoritmo Calculo_Volumen_Cilindro ser�a:
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCI�N:
//       Calcula el �rea de un cilindro, conocidos su radio y altura.
//    ENTRADAS: radio y altura. Deben ser positivos.
//    SALIDAS: vol
//    ERRORES:
//       El programa no funciona si los valores de radio y altura son negativos.
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    const float PI = 3.14;
//    float radio, altura; // entrada: radio de la base; altura del cilindro
//    float vol;            // salida: volumen del cilindro
//    float base;           // �rea de la base del cilindro
//    cout << "Introduce el valor del radio (valor positivo)";
//    cin >> radio;
//    cout << "Introduce el valor de la altura (valor positivo)";
//    cin >> altura;
//    base = PI * radio * radio;
//    vol = base * altura;
//    cout << "El volumen del cilindro de radio " << radio << " y altura ";
//    cout << altura << " es " << vol;
//    return 0;
// }
// Gu�rdalo con el nombre P2EJ1.
//                        Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                        Estructura de un programa en C++
// 3 Sesi�n de pr�cticas
// 3.1 Traduce programas a C++
// Con este ejercicio repasar�s:
// � c�mo traducir a C++ un programa escrito en seudoc�digo.
// � c�mo editar, grabar, compilar y ejecutar un programa en CodeBlocks.
// 3.1.1 Primer programa
// Acaba de traducir el siguiente algoritmo. Su prop�sito es leer una letra may�scula y escribir la posici�n
// que ocupa en el alfabeto. (Puedes descargarlo del aula virtual, P2Ej2)
// Interfaz:
//    Entrada: car�cter letra
//    Salida: entero posicion
// Efecto:
//  Condiciones previas: letra may�scula
//  Efecto producido: posici�n que ocupa la letra en el alfabeto
// Algoritmo posici�n letra may�scula
//    car�cter letra
//    entero posici�n
// principio
//    leer(letra)
//    posici�n = ascii(letra) - ascii('A') + 1
//    escribir(posici�n);
// fin
// La traducci�n que tienes que completar es:
// (PISTA: faltan cosas donde encuentres ... , aunque faltan m�s cosas que las indicadas):
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCI�N:
//       Dada una letra may�scula calcula cu�l es su posici�n en el
//       alfabeto
//    ENTRADAS: letra (la letra may�scula)
//    SALIDAS: posici�n (la posici�n en el alfabeto)
//    ERRORES:
//                                                                                                               Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                                                                                                                      Estructura de un programa en C++
//       El programa es incorrecto si la letra no es una may�scula
// */
// #include ...                 ...('A') + 1
// using namespace std;
// ...main()
//    ...
//    posicion = int(letra)1 -
//    ...
//    return 0;
// }
// Completa el programa, gr�balo, comp�lalo y ejec�talo.
// 3.1.2 Segundo programa
// Traduce el siguiente algoritmo. Su prop�sito es convertir una cantidad positiva de segundos a su
// equivalente en horas, minutos y segundos.
// Interfaz
//  Entrada: entero cantSegundos
//  Salida: entero h, m, s
// Efecto
//  Condiciones previas: cantSegundos >=0
//  Efecto producido: horas (h), minutos (m) y segundos (s) y
//      cantSegundos = h*3600+m*60+s, h>=0, 0<=m<60, 0<=s<60
// Algoritmo Convertir horas minutos segundos
// variables
//    entero cantidad
//    entero h, m, s
//    entero auxiliar
// principio
//    leer(cantidad)
//    h = cantidad div 3600
//    auxiliar = cantidad mod 3600
//    m = auxiliar div 60
//    s = auxiliar mod 60
//    escribir(h, m, s)
// fin
// 1 Realmente, esta operaci�n es un cambio de tipo (cast), de tipo char a int. Este cambio lo hace
// devolviendo el c�digo ascii (un entero) del car�cter.
//                                                     Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                                     Estructura de un programa en C++
// Edita el programa, gr�balo, comp�lalo y ejec�talo.
// 3.2 Corrige programas con errores
// Con este ejercicio repasar�s:
// � C�mo traducir a C++ un programa escrito en seudoc�digo.
// � C�mo recuperar, grabar, compilar y ejecutar un programa.
// � C�mo utilizar el compilador para corregir errores en los programas.
// Estos programas contienen errores. El objetivo del ejercicio es que los encuentres y los corrijas. Es
// aconsejable que intentes detectarlos por simple inspecci�n. Si no lo consigues puedes utilizar el
// compilador de CodeBlocks. Encontrar�s unos cuantos errores bastante comunes. Ser�a aconsejable
// que los recordases para no cometerlos en el futuro. Hay errores l�xicos, sint�cticos e incluso puede
// que falten o sobren cosas.
// 3.2.1 Primer programa
// (Puedes descargarlo del aula virtual, P2Ej3)
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCI�N:
//       Calcula la velocidad en m/s de un corredor de una carrera de 1500 m.,
//       conocido el tiempo que tarda en realizar la prueba.
//    ENTRADAS: minutos, cantidad de minutos invertidos por el corredor
//                     segundos, cantidad de segundos invertidos por el corredor
//    SALIDAS: velocidad, ser velocidad = 1500/(60*minutos+segundos)
//    ERRORES:
//       El programa es incorrecto si minutos y segundos no son positivos
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    const int DISTANCIA=1500
//    cin >> minutos;
//    cin >> segundos
//    velocidad := 1500/(60*minutos+segundos);
//    escribir(velocidad);
//    return 0;
// }
//                                               Metodolog�a de la Programaci�n. Pr�ctica 2.
//                                                                               Estructura de un programa en C++
// 3.2.2 Segundo programa
// (Puedes descargarlo del aula virtual, P2Ej4)
// /*
//    FECHA:
//    AUTOR:
//    DESCRIPCI�N:
//       Convierte una distancia dada en pies a su equivalente en yardas,
//       pulgadas, cent�metros y metros.
//    ENTRADAS: pies, distancia medida en pies
//    SALIDAS: yardas, pulgadas, cent�metros, metros = distancia medida en
//                     esas unidades
//    ERRORES:
//       El programa es incorrecto si pies es negativo
// */
// #include <iostream>
// using namespace std;
// int main()
// {
//    real pies;
//    yardas, pulgadas, centimetros, metros: real;
//    yardas = pies/3.0;
//    pulgadas = = pies * 12.0;
//    centimetros = 2'54 * pulgadas;
//    metros = centimetros / 100;
//    return 0;
// }
// 3.3 Realizaci�n de programas
// 1. Programa que lea un n�mero entero de dos cifras y cree otro con esas cifras invertidas. Ejemplo,
//      si introducimos 45 deber�a generar el 54.
// 2. Programa que descodifique la fecha expresada como un entero de 6 d�gitos (DDMMAA), es decir,
//      el a�o viene representado en las unidades y decenas, el mes en las centenas y millares y el d�a en
//      las decenas y centenas de millar. Ejemplo: para una entrada como 121025 debe mostrar en
//      pantalla 12-10-2025.
/* ======================================= */

/*
    FECHA: 20-09-2026
    AUTOR: Iker
    DESCRIPCIÓN:
        Calcula el área de un cilindro, conocidos su radio y altura.
    ENTRADAS: radio y altura. Deben ser positivos.
    SALIDAS: vol
    ERRORES:
        El programa no funciona si los valores de radio y altura son negativos.
*/

#include <iostream>
using namespace std;
int main()
{
    const float PI = 3.14;
    float radio, altura; // entrada: radio de la base; altura del cilindro
    float vol; // salida: volumen del cilindro
    float base; // área de la base del cilindro

    cout << "Introduce el valor del radio (valor positivo)";
    cin >> radio;
    cout << "Introduce el valor de la altura (valor positivo)";
    cin >> altura;

    base = PI * radio * radio;

    vol = base * altura;

    cout << "El volumen del cilindro de radio " << radio << " y altura ";
    cout << altura << " es " << vol;

    return 0;
}
