#include <iostream>
#include "Pantalla.h"
using namespace std;
void pantalla::Iniciar()
{
	cout << "se esta mostrando la pantalla del nivel" << endl;
	
}

void pantalla::comprobarLinea()
{
	cout << "Se esta comprobando si la linea esta llena para ser eliminada" << endl;
}

void pantalla::eliminarLineaCompleta()
{
	cout << "Se elimino la linea completada" << endl;
}

void pantalla::combinarLadrillos()
{
	cout << "se recibio nuevos ladrillos a la fila" << endl;
}
