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
	int matricula;
	int calif1;
	int	calif2;
	int calif3;
	string direccion;
	char numero[15];
	string colonia;
};
datos alumnos[100];
int c = 0;
int o,i;
void menu();
void registrar();
void mostrar();
void buscar();
void editar();
void eliminar();
bool respuesta;

void main() {
	menu();
}

void menu() {
	locale::global(locale("spanish"));
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
		case 4:
			editar();
			break;
		case 5:
			eliminar();
			break;
		}
		system("pause");
}

void registrar() {
	respuesta = true; 
	while (respuesta) {
		cin.ignore();
		system("cls");
		cout << "Ustéd está en el Registro" << endl;

		cout << "Nombre:" << endl;
		getline(cin, alumnos[c].nombre);

		cout << "Apellido (s): " << endl;
		getline(cin, alumnos[c].apellido);

		cout << "Correo : " << endl;
		cin >> alumnos[c].correo;

		cout << "Teléfono : " << endl;
		cin >> alumnos[c].telefono;

		cout << "Matrícula : " << endl;
		cin >> alumnos[c].matricula;
		cin.ignore();

		cout << "Calificación 1: " << endl;
		cin >> alumnos[c].calif1;

		cout << "Calificación 2: " << endl;
		cin >> alumnos[c].calif2;

		cout << "Calificación 3: " << endl;
		cin >> alumnos[c].calif3;
		cin.ignore();

		cout << "Ingrese Dirección " << endl;
		cout << "Calle, Numero de Casa y Colonia " << endl;
		getline(cin, alumnos[c].direccion);
		c++;

		cout << "¿Quieres registrar a otro Alumno ?" << endl;
		cout << "1. NO " << endl;
		cout << "2. Si " << endl;

		cin >> o;
		if (o == 1) {
			respuesta = false;
		}
	}
	menu();
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
		cout << "Direccion:" << alumnos[i].direccion << endl;

	}
	system("pause > nul");
	menu();
}

void buscar() {
	system("cls");
	cout << "Usted esta en el buscador de Alumnos" << endl;
	cout << "Ingrese la matricula que desea buscar" << endl;

	cin >> o;

	bool encontrado = false;
	for (int i = 0; i < c; i++)
	{
		if (alumnos[i].matricula == o) {
			cout << "Alumno Encontrado Exitosamente!" << endl;
			cout << "Nombre Completo: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
			cout << "Correo Electronico: " << alumnos[i].correo << endl;
			cout << "Telefono:" << alumnos[i].telefono << endl;
			cout << "Matricula:" << alumnos[i].matricula << endl;
			cout << "Calificacion 1:" << alumnos[i].calif1 << endl;
			cout << "Calificacion 2:" << alumnos[i].calif2 << endl;
			cout << "Calificacion 3:" << alumnos[i].calif3 << endl;
			cout << "Direccion:" << alumnos[i].direccion << endl;
			encontrado = true;
			break;
		}
	}

	if (!encontrado) {
		cout << "Alumno no encontrado." << endl;
	}

	system("pause > nul");

	menu();
}

void editar() {
	cin.ignore();
	system("cls");
	cout << "Editor de Alumnos" << endl << endl;
	cout << "¿Qué alumno deseas Editar? " << endl;
	cout << "Ingresa la matricula del Alu " << endl;
	cin >> o;

	int i = 0;
	while (i < c) {
		if (alumnos[i].matricula == o) {
			cout << "Encontré a: " << endl;
			cout << "Nombre Completo: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
			cout << "Correo Electronico: " << alumnos[i].correo << endl;
			cout << "Telefono:" << alumnos[i].telefono << endl;
			cout << "Matricula:" << alumnos[i].matricula << endl;
			cout << "Calificacion 1:" << alumnos[i].calif1 << endl;
			cout << "Calificacion 2:" << alumnos[i].calif2 << endl;
			cout << "Calificacion 3:" << alumnos[i].calif3 << endl;
			cout << "Direccion:" << alumnos[i].direccion << endl;

			cout << "¿Qué desea Editar?" << endl;
			cout << "1. Nombre" << endl;
			cout << "2. Apellido" << endl;
			cout << "3. Matricula" << endl;
			cout << "4. Correo Electronico" << endl;
			cout << "5. Telefono" << endl;
			cout << "6. Calificacion 1" << endl;
			cout << "7. Calificacion 2" << endl;
			cout << "8. Calificacion 3" << endl;
			cout << "9. Direccion" << endl;
			cout << "0. Nada" << endl;
			cin >> o;

			switch (o)
			{
			case 1:
				cout << "Ingrese el Nombre Correcto: ";
				getline(cin, alumnos[i].nombre);
				break;
			case 2:
				cout << "Ingresa el Apellido Correcto: ";
				getline(cin, alumnos[i].apellido);
				break;
			case 3:

				cout << "Ingresa la matricula Correcta: ";
				cin >> alumnos[i].matricula;
				break;
			case 4:
				cout << "Ingresa el Correo Electronico Correcto: ";
				cin >> alumnos[i].correo;
				break;
			case 5:
				cout << "Ingresa el Telefono Correcto: ";
				cin >> alumnos[i].telefono;
				break;
			case 6:
				cout << "Ingresa la Calificacion 1 Correcta: ";
				cin >> alumnos[i].calif1;
				break;
			case 7:
				cout << "Ingresa la Calificacion 2 Correcta: ";
				cin >> alumnos[i].calif2;
				break;
			case 8:
				cout << "Ingresa la Calificacion 3 Correcta: ";
				cin >> alumnos[i].calif3;
				break;
			case 9:
				cout << "Ingresa la Direccion Correcta: ";
				cout << "Ingresa la Calle: " << endl;
				cin >> alumnos[i].direccion;
				cout << "Ingresa el Numero: " << endl;
				cin >> alumnos[i].numero;
				cout << "Ingresa la Colonia: " << endl;
				cin >> alumnos[i].colonia;
				break;
			default:
				break;
			}

			if (o != 0) {
				cout << "Tu registro ha sido actualizado: " << endl;
				cout << "Nombre Completo: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
				cout << "Correo Electronico: " << alumnos[i].correo << endl;
				cout << "Telefono:" << alumnos[i].telefono << endl;
				cout << "Matricula:" << alumnos[i].matricula << endl;
				cout << "Calificacion 1:" << alumnos[i].calif1 << endl;
				cout << "Calificacion 2:" << alumnos[i].calif2 << endl;
				cout << "Calificacion 3:" << alumnos[i].calif3 << endl;
				cout << "Direccion:" << alumnos[i].direccion << endl;

				cout << "¿Qué deseas modificar?" << endl;
				cout << "1. Nombre" << endl;
				cout << "2. Apellido" << endl;
				cout << "3. Matricula" << endl;
				cout << "4. Correo Electronico" << endl;
				cout << "5. Telefono" << endl;
				cout << "6. Calificacion 1" << endl;
				cout << "7. Calificacion 2" << endl;
				cout << "8. Calificacion 3" << endl;
				cout << "9. Direccion" << endl;
				cout << "0. Nada" << endl;
			}
			else {
				cout << "No modificaste nada." << endl;
			}

			break;
		}
		i++;
	}

	system("pause > nul");
	menu();
}


void eliminar() {
	cin.ignore();
	system("cls");
	cout << "¿Qué alumno deseas eliminar?" << endl << endl;
	cout << "Ingresa la matricula " << endl;
	cin >> o;

	int i = 0;
	while (i < c) {
		if (alumnos[i].matricula == o) {
			cout << "Encontré a: " << endl;
			cout << "Encontré a: " << endl;
			cout << "Nombre Completo: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
			cout << "Correo Electronico: " << alumnos[i].correo << endl;
			cout << "Telefono:" << alumnos[i].telefono << endl;
			cout << "Matricula:" << alumnos[i].matricula << endl;
			cout << "Calificacion 1:" << alumnos[i].calif1 << endl;
			cout << "Calificacion 2:" << alumnos[i].calif2 << endl;
			cout << "Calificacion 3:" << alumnos[i].calif3 << endl;
			cout << "Direccion:" << alumnos[i].direccion << endl;


			cout << "¿Eliminar a " << alumnos[i].matricula << "?" << endl;
			cout << "1. Sí \n2. No" << endl;
			cin >> o;

			if (o == 1 && c != 0) {
				for (int j = i; j < c; j++)
				{
					alumnos[j] = alumnos[j + 1];
				}
				c--;
			}
			break;
		}
		if (i == c) {
			cout << "No encontré nada" << endl;
		}
		i++;
	}

	system("pause > nul");
	main();
}

