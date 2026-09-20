/*
	  FECHA: 18-09-2026
	  AUTOR:
	  DESCRIPCI�N:
	    Calcula el valor de un polinomio de tercer grado para un valor concreto
	    de la inc�gnita x. Los coeficientes del polinomio son introducidos por
	    teclado, as� como el valor de la inc�gnita. El resultado se presenta
	    por pantalla.
	  ENTRADAS: los coeficientes del polinomio (variables a,b,c,d)
		    el valor de la inc�gnita (variable x)
	  SALIDAS:  el resultado de la expresi�n ax^3+bx^2+cx+d (almacenado en la
		      variable p)
	*/
	#include <iostream>
	using namespace std;

	int main()
	{
	  float a,b,c,d;	// variables para los coeficientes
	  float x;		// variable para la inc�gnita
	  float p;	// variable para el resultado

	  // Entrada de datos
	  cout << "Introducir los valores de: " << endl;
	  cout << "a = ? ";
	  cin >> a;
	  cout << "b = ? ";
	  cin >> b;
	  cout << "c = ? ";
	  cin >> c;

	  cout << "d = ? ";
	  cin >> d;
	  cout << "x = ? ";
	  cin >> x;

	  // Proceso
	  p = x*(x*(a*x+b)+c)+d;

	  // Salida
	  cout << "La soluci�n es p = " << p;
	  return 0;
	}
