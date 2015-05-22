// ConsoleApplication4.cpp: define el punto de entrada de la aplicación de consola.
//
#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));

	ArbolBinario a;
	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoInt(rand() % 100));
	}

	ArbolBinario b;
	for (int i = 0; i < 10; ++i) {
		b.insertarElemento(new ElementoDouble(2.1));
		b.insertarElemento(new ElementoDouble(3.5));
		b.insertarElemento(new ElementoDouble(4.8));
		}

	ArbolBinario c;
	for (int i = 0; i < 10; ++i) {
		b.insertarElemento(new ElementoPersona(5, "juan"));
		b.insertarElemento(new ElementoPersona(3, "pedro"));
		b.insertarElemento(new ElementoPersona(7,"jorge"));
     }


	cout << a << endl;
	cout << b << endl;
	// cout << c << endl;
	
	
	return 0;



}

