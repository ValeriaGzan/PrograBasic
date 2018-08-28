#include<iostream>
#include<math.h>
using namespace std;

void main() {

	cout << "\t\t\t Calcule las coordenadas X y Y dados el radio y su angulo sexagesimal alpha" << endl;

	float r;
	float alpha;

	cout << "Radio=";
	cin >> r;

	cout << "Angulo=";
	cin >> alpha;


	float coseno;
	float seno;
	float x;
	float y;

	x = r * cos(alpha);
	y = r * sin(alpha);

	cout << "El valor de tu punto en X es:" << x << endl;
	cout << "Y el valor de tu punto en Y es:" << y << endl;


	system("pause");
}

