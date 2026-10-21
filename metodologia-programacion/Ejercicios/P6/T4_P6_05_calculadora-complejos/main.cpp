/* ===== ENUNCIADO (literal del PDF) ===== */
//                                                                                                                                                                                                      Subprogramas en C++
// 2.1.5 Quinto programa.
// En el siguiente programa se utilizan una serie de funciones para operar con n�meros complejos. Debido
// a que no hay ning�n tipo de datos (conocido por nosotros hasta el momento) adecuado para almacenar
// valores de tipo complejo, utilizaremos dos variables de tipo real para contener las partes real e
// imaginaria del complejo. De este modo, cualquier valor complejo que se necesite pasar como par�metro
// a un subprograma necesitar� en realidad dos par�metros.
// SE PIDE:
// El prop�sito real del ejercicio es que averig�es cu�ntos y de qu� tipo son los par�metros de las funciones
// que se utilizan en el programa. Como muestra se da la acci�n para escritura de complejos que tiene dos
// par�metros de entrada. El programa completo lee dos complejos y la operaci�n a realizar, y luego los
// opera, escribiendo el resultado. Puedes utilizar el fichero P6EJ5
// /*
//    AUTOR:
//    DESCRIPCION:
//     Operaci�n de dos n�meros complejos
//    ENTRADAS: n1pr, n1pi, n2pr, n2pi: partes reales e imaginarias de los n�meros complejos a
//                    sumar, operaci�n: operaci�n a realizar
//    SALIDAS: solpr, solpi: parte real e imaginaria de la soluci�n
// */
// #include <iostream>
// using namespace std;
// void escribirComplejo(float pr,float pi);
// void leerComplejo(...........);
// void suma(.........);
// void resta(.........);
// void multiplica(.........);
// void divide(.........);
// int main()
// {
//    float n1pr, n1pi, n2pr, n2pi;
//    float solpr, solpi;
//    char operacion;
//    leerComplejo (........);
//    leerComplejo (........);
//    do //validamos la entrada para evitar tomar una operaci�n no v�lida
//    {
//       cout<<"Introduce la operaci�n");
//       cin>>operaci�n;
//    } while((operaci�n!='+') && (operaci�n!='-') && (operaci�n!='*') && (operaci�n!='/'));
//    switch (operacion)
//    {
//       case '+':
//       {
//          suma(........);
//       }
//       break;
//       case '-':
//       {
//          resta(........);
//       }
//                                                                                                      Subprogramas en C++
//       break;
//       case '*':
//       {
//          multiplica(........);
//       }
//       break;
//       case '/':
//       {
//          divide(........);
//       }
//       break;
//    }
//    escribir_complejo(solpr, solpi);
//    return 0;
// }
// void escribirComplejo (float pr, float pi)
// {
//    cout<<pr;
//    if (pi>=0)
//    {
//       cout<<" + ";
//    }
//    cout << pi << 'i';
// }
// void leerComplejo (........)
// {
//    cout << endl << "Introduce la parte real";
//    cin >> pr;
//    cout << endl << "Introduce la parte imaginaria";
//    cin >> pi;
// }
// void suma (........)
// {
//    sr = pr1 + pr2;
//    si = pi1 + pi2;
// }
// void resta (........)
// {
//    sr = pr1 - pr2;
//    si = pi1 - pi2;
// }
// void multiplica (........)
// {
//    sr = pr1*pr2 - pi1*pi2;
//    si = pi1*pr2 + pi2*pr1;
// }
// void divide (........)
// {
//    sr = (pr1*pr2 + pi1*pi2) / (pr2*pr2 + pi2*pi2);
//    si = (pr2*pi1 - pi2*pr1) / (pr2*pr2 + pi2*pi2);
// }
/* ======================================= */

/*
    FECHA:     04-10-2026
    AUTOR:     Iker
    DESCRIPCIÓN:
        Opera dos números complejos (suma, resta, multiplicación, división) usando subprogramas.
        Un complejo se guarda en dos variables reales (parte real y parte imaginaria), así que
        cada subprograma lleva dos parámetros por complejo.
        Hay que RELLENAR los '........' de las cabeceras y de las llamadas: decidir cuántos
        parámetros tiene cada subprograma y de qué tipo.
        (Practica 6, apartado 2.1.5 -> P6EJ5)
    ENTRADAS:  dos complejos (partes real e imaginaria) y la operación ('+', '-', '*', '/')
    SALIDAS:   el complejo resultado (solpr, solpi)
    ERRORES:
        La operación debe ser una de las cuatro válidas.
*/
#include <iostream>

using namespace std;

void escribirComplejo(float pr,float pi);
void leerComplejo(...........);
void suma(.........);
void resta(.........);
void multiplica(.........);
void divide(.........);
int main()
{
   float n1pr, n1pi, n2pr, n2pi;
   float solpr, solpi;
   char operacion;
   leerComplejo (........);
   leerComplejo (........);
   do //validamos la entrada para evitar tomar una operación no válida
   {
      cout<<"Introduce la operacion";
      cin>>operacion;
   } while((operacion!='+') && (operacion!='-') && (operacion!='*') && (operacion!='/'));
   switch (operacion)
   {
      case '+':
      {
         suma(........);
      }
      break;
      case '-':
      {
         resta(........);
      }
      break;
      case '*':
      {
         multiplica(........);
      }
      break;
      case '/':
      {
         divide(........);
      }
      break;
   }
   escribirComplejo(solpr, solpi);
   return 0;
}
void escribirComplejo (float pr, float pi)
{
   cout<<pr;
   if (pi>=0)
   {
      cout<<" + ";
   }
   cout << pi << 'i';
}
void leerComplejo (........)
{
   cout << endl << "Introduce la parte real";
   cin >> pr;
   cout << endl << "Introduce la parte imaginaria";
   cin >> pi;
}
void suma (........)
{
   sr = pr1 + pr2;
   si = pi1 + pi2;
}
void resta (........)
{
   sr = pr1 - pr2;
   si = pi1 - pi2;
}
void multiplica (........)
{
   sr = pr1*pr2 - pi1*pi2;
   si = pi1*pr2 + pi2*pr1;
}
void divide (........)
{
   sr = (pr1*pr2 + pi1*pi2) / (pr2*pr2 + pi2*pi2);
   si = (pr2*pi1 - pi2*pr1) / (pr2*pr2 + pi2*pi2);
}
