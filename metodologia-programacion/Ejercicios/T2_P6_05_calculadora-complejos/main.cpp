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
