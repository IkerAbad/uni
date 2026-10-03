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

