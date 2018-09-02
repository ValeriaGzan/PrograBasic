#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void main() {
	int opcion;

	cout << "Selecciona tu opcion" << endl;
	cout << "1.Piedra" << endl;
	cout << "2.Papel" << endl;
	cout << "3.Tijera" << endl;

	cin >> opcion;

	srand(time(NULL));
	int r = rand() % 3;

	switch (opcion) {
	case 1:
		if (r == 0)
			cout << "La computadora eligio piedra, Es Empate";
		if (r == 1)
			cout << "La computadora eligio papel, Perdiste";
		if (r == 2)
			cout << "La computadora eligio Tijera, Ganaste";
		break;

	case 2:
		if (r == 0)
			cout << "La computadora eligio piedra, Ganaste";
		if (r == 1)
			cout << "La computadora eligio papel,Empate";
		if (r == 2)
			cout << "La computadora eligio tijera, Perdiste";
		break;

	case 3:
		if (r == 0)
			cout << "La computadora eligio piedra, Perdiste";
		if (r == 1)
			cout << "La computadora eligio papel, Ganaste";
		if (r == 2)
			cout << "La computadora eligio tijera, empate";
		break;

	default:
		cout << "Opcion no valida";
		break;
	}

	system("pause");

}