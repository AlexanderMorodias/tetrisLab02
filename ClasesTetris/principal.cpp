#include <iostream>
#include "Ladrillo.h"
#include "Nivel.h"
#include "Pantalla.h"
#include "Temporizador.h"

using namespace std;

int main() {
	pantalla* pantalla01 =  nullptr;
	Nivel* nivel01 = nullptr;
	ladrillo* ladrillo01 = nullptr;
	Temporizador* ptemporizador = nullptr;

	pantalla01->Iniciar();
	nivel01->iniciarNivel();
	ptemporizador->mostrar();
	ladrillo01->crear();

	return 0;
}
