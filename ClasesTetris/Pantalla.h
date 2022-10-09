#pragma once
class pantalla
{
private:
	int ancho;
	int alto;
	pantalla();
public:
	void Iniciar();
	void comprobarLinea();
	void eliminarLineaCompleta();
	void combinarLadrillos();
};

