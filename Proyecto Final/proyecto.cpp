#include<iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct datos {
	string nombre;
	string apellido;
	char correo [100];
	char telefono[13];
	char matricula[10];
	int calif1;
	int	calif2;
	int calif3;
	string calle;
	char numero[15];
	string colonia;
};
datos alumnos[100];
int c = 0;
int o,i;
void registrar();
void mostrar();
void buscar();
//void editar();
//void eliminar();

void main() {
	locale::global(locale("spanish"));
	while (true) {
		system("cls");
		cout << " \t\t\t\t AGENDA ELECTRONICA" << endl;
		cout << "Elige la opción deseada" << endl;
		cout << "1.- Registrar Alumno" << endl;
		cout << "2.- Mostrar Alumno" << endl;
		cout << "3.- Buscar Alumno" << endl;
		cout << "4.- Editar Alumno" << endl;
		cout << "5.- Eliminar Alumno" << endl;
		cin >> o;
		switch (o) {
		case 1:
			registrar();
			break;
		case 2:
			mostrar();
			break;
		case 3:
			buscar();
			break;
		/*case 4:
			editar();
			break;
		case 5:
			eliminar();
			break;*/
		}
		system("pause");
	}
}


void registrar() {

	system("cls");
	cout << "Ustéd está en el Registro" << endl;

	cout << "Nombre:" << endl;
	getline (cin, alumnos[c].nombre);
	cin.ignore();

	cout << "Apellido (s): " << endl;
	getline (cin, alumnos[c].apellido);
	cin.ignore();

	cout << "Correo : " << endl;
	cin >>alumnos[c].correo;
	cin.ignore();

	cout << "Teléfono : " << endl;
	cin >> alumnos[c].telefono;
	cin.ignore();

	cout << "Matrícula : " << endl;
	cin >> alumnos[c].matricula;
	cin.ignore();

	cout << "Calificación 1: " << endl;
	cin >> alumnos[c].calif1;


	cout << "Calificación 2: " << endl;
	cin >> alumnos[c].calif2;


	cout << "Calificación 3: " << endl;
	cin >> alumnos[c].calif3;

	cout << "Ingrese Dirección " << endl;
	cout << "Calle: " << endl;
	getline (cin, alumnos[c].calle);
	cin.ignore();
	cout << "Numero de casa: " << endl;
	cin >> alumnos[c].numero;
	cout << "Colonia: " << endl;
	getline (cin, alumnos[c].colonia);
	cin.ignore();

	c++;
}

void mostrar() {
	system("cls");
	for (i = 0; i < c; i++) {
		cout << "Nombre Completo: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
		cout << "Correo Electronico: " << alumnos[i].correo << endl;
		cout << "Telefono:" << alumnos[i].telefono << endl;
		cout << "Matricula:" << alumnos[i].matricula << endl;
		cout << "Calificacion 1:" << alumnos[i].calif1 << endl;
		cout << "Calificacion 2:" << alumnos[i].calif2 << endl;
		cout << "Calificacion 3:" << alumnos[i].calif3 << endl;
		cout << "Direccion:" << alumnos[i].calle << " " << alumnos[i].numero << " " << alumnos[i].colonia << endl << endl;

	}
}

void buscar() {
	system("cls");

}