#pragma once
#include <string>

using namespace std;
class ladrillo
{
private:
	string color;
	string forma;
	ladrillo();
public:
	void crear();
	float ubicacionX;
	float ubicacionY;
	void cambiarLado();
	void aumentarVelocidad();
};

