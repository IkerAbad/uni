/*
    FECHA: 18/09/2026
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
    cout << endl<< "a= ? ";
    cin >>a;
    cout << endl<< "b= ? ";
    cin >>b; /* lectura de los coeficientes */
    cout << endl<< "c= ? ";
    cin >>c;
//cálculo de las raices
    discriminante=b*b-4*a*c;
    x1=(-b + sqrt(discriminante)) / (2*a);
    x2=(-b - sqrt(discriminante)) / (2*a);
//muestra los resultados
    cout << endl<< "Las soluciones son: " << x1 << " y " << x2;
    return 0;
}
