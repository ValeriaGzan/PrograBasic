#include <iostream>
using namespace std;

void main() {

	int n;
	cout << "Escribe el numero de lados de un poligono regular:";
	cin >> n;

	int anguloAlpha;

	anguloAlpha = 180 * (n - 2) / n;

	cout << "La medida del angulo Alpha de el poligono es: " << anguloAlpha << "°." << endl;

	system("pause");

}
