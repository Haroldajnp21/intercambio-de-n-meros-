// Crisscross.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//algoritmo que lee 2 valores a y b, y los intercambie. Por ejemplo si a=2 y b=3 debe hacer que a=3 y b=2

#include <iostream>
using namespace std;
int main()
{
	//asingnado variables 
	int a, b, t;                     
	cout << "ingrese a:";            //leer a y b 
	cin >> a;
	cout << "ingrese b:";
	cin >> b;
	// aqui ocurre el cambio de variable 
	t = a;
	a = b;
	b = t;
	//imprime el cambio 
	cout << "los valores de intercanmbio son:"<<endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
