#include<iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

struct datos {
	string nombre;
	string apellido;
	char correo[100];
	char telefono[12];
	int matricula;
	int calif1;
	int	calif2;
	int calif3;
	string direccion;
};

datos alumnos[100];
int c = 0;
int o, i;
int countNum;
int cant;
int countAt, countDot;
void menu();
void registrar();
void mostrar();
void buscar();
void editar();
void eliminar();
void salir();
bool respuesta;

void main() {
	ifstream archivo;
	string a;

	archivo.open("Registro.txt", ios::in);
	if (archivo.fail()) {
		cout << "Error al abrir archivo.";
		exit(1);
	}
	cout << "Alumnos Guardados:" << endl;
	while (!archivo.eof()) {
		getline(archivo, a);
		cout << a << endl;
	}
	system("pause>nul");
	archivo.close();
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
		for (int i = 0; alumnos[i].correo != NULL; i++) {

			if (alumnos[i].correo[i] == 64) {
				countAt++;
			}
			if (countAt == 1 && alumnos[i].correo[i] == '.') {
				countDot++;
			}
		}
		if (countAt == 0) {
			cout << "Falta un @ " << endl;
		}
		else if (countAt > 1) {
			cout << "Hay mas de 1 @" << endl;
		}
		else if (countDot == 0) {
			cout << "Falta el punto " << endl;
		}
		else if (countDot > 1) {
			cout << "Hay mas de un punto" << endl;
		}
		else {
			cout << "Correo Electonico correcto" << endl;
			system("PAUSE>NULL");
			break;
		}


		cout << "Teléfono : " << endl;
		cin >> alumnos[c].telefono;
		for (int i = 0; i < 12; i++) {

			if (alumnos[i].telefono[i] >= '0' && alumnos[i].telefono[i] <= '9') {
				c++;
			}
			if (alumnos[i].telefono != NULL) {
				countNum++;
			}

		}
		if (cant != 12) {
			cout << "No son 12 digitos" << endl;
		}
		else if (countNum != 10) { cout << "No todos son numeros" << endl; }
		else { cout << "Todos son numeros e ingreso celular" << endl; }
		system("PAUSE>NULL");
		system("CLS");
		while (1) {
			countAt = 0;
			countDot = 0;
		}





		cout << "Matricula : " << endl;
		cin.ignore();
		int numero, cont = 0;
		bool continuar;

		do {
			continuar = false;
			cin.clear();
			if (cont > 0) cin.ignore(1024, '\n');
			cin >> alumnos[c].matricula;
			cont++;
			if (cin.fail() && cin.rdstate()) {
				cout << "Matricula Incorrecta. Ingresa solo números" << endl;
				continuar = true;
			}
		} while (continuar);

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
			cout << "Direccion:" << alumnos[i].direccion << endl << endl;
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
	cout << "Ingresa la matricula del Alumno " << endl;
	cin >> o;

	system("cls");
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
				cin.ignore();
				cout << "Ingrese el Nombre Correcto: ";
				getline(cin, alumnos[i].nombre);

				break;
			case 2:
				cout << "Ingresa el Apellido Correcto: ";
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
				break;
			default:
				break;
			}
			system("cls");
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

			}
			else {
				cout << "No modificaste nada." << endl;
			}

			break;
		}
		i++;

		cout << "¿Quieres editar a otro Alumno ?" << endl;
		cout << "1. NO " << endl;
		cout << "2. Si " << endl;

		cin >> o;
		if (o == 1) {
			respuesta = false;
		}
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


			cout << "¿Eliminar a " << alumnos[i].nombre << "?" << endl;
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

void salir() {
	ofstream archivo;
	archivo.open("Registro.txt");
	for (int i = 0; i < c; i++) {
		archivo << to_string(alumnos[i].matricula) << endl;
		archivo << alumnos[i].nombre << endl;
		archivo << alumnos[i].apellido << endl;
		archivo << alumnos[i].correo << endl;
		archivo << to_string(alumnos[i].calif1) << endl;
		archivo << to_string(alumnos[i].calif2) << endl;
		archivo << to_string(alumnos[i].calif3) << endl;
		archivo << alumnos[i].telefono << endl;
		archivo << alumnos[i].direccion << endl;
		int j = 0;
	}
	archivo.close();
}