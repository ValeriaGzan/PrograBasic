#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int o;
int c;

struct datos {
	string nombre;
	string apellido;
	string correo;
	char telefono[13];
	char matricula[10];
	int calif1;
	int	calif2;
	int calif3;
	string calle;
	char numero[5];
	string colonia;
};

int main() {
	locale::global(locale("spanish"));

	c = 0;

    cout << " \t\t\t\t AGENDA ELECTRONICA" << endl;
	cout << "Elige la opci�n deseada" << endl;
	cout << "1.- Registrar" << endl;
	cout << "2.- Mostrar" << endl;
	cout << "3.- Buscar" << endl;
	cout << "4.- Eliminar" << endl;

}

void menu() {

	string nombre;
	string apellido;
	string correo;
	char telefono[13];
	char matricula[10];
	int calif1;
	int	calif2;
	int calif3;
	string calle;
	char numero[5];
	string colonia;
	int  x;
	int Registrar;
	int Mostrar;
	int Buscar;
	int Modificar;
	int Eliminar;
	int p;
	int countAt;
	int countNum;
	int countDot;
	int cant;

	cin >> o;

	switch (o) {

	case 1:
		cout << "Ust�d eligi� Registrar" << endl;
		cout << "�Seguro que desea Registrar Alumnos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> o;

		if (o == 1)
		{
			cout << "Elige la opci�n deseada:" << endl;
			cout << "1. Ingresar Nombre(s)." << endl;
			cout << "2. Ingresar Apellidos." << endl;
			cout << "3. Ingresar Correo Electr�nico." << endl;
			cout << "4. Ingresar T�lefono." << endl;
			cout << "5. Ingresar Matr�cula." << endl;
			cout << "6. Ingresar Calificaciones." << endl;
			cout << "7. Ingresar Direcci�n." << endl;

			cin >> x;


			switch (x) {

			case 1:
				registrar();
				cout << "Secci�n para Ingresar Nombre(s)" << endl;
				cout << "�Seguro que desea ingresar Nombres?" << endl;
				cout << "\n 1. Si" << endl;
				cout << "\n 2. No" << endl;
				cin >> o;

				if (o == 1)
				{
					cout << "Ingrese los nombres del Alumno" << endl;
					cin >> nombre;
					for (int i = 0; nombre[i] != NULL; i++) {
						if (i == 0 && nombre[i] >= 'a'&& nombre[i] <= 'z') {
							nombre[i] -= 32;
						}

						else if (i > 0 && nombre[i] >= 65 && nombre[i] <= 90) {
							nombre[i] += 32;
						}

					}
					cout << nombre;
					system("PAUSE>NULL");

				}

				else
				{
					return void();
				}
				break;

			case 2:
				cout << "Secci�n para Ingresar Apellidos" << endl;
				cout << "�Seguro que desea ingresar Apellidos?" << endl;
				cout << "\n 1. Si" << endl;
				cout << "\n 2. No" << endl;
				cin >> o;

				if (o == 1)
				{
					cout << "Ingrese los Apellidos del Alumno" << endl;
					cin >> apellido;

					for (int i = 0; apellido[i] != NULL; i++) {
						if (i == 0 && apellido[i] >= 'a'&& apellido[i] <= 'z') {
							apellido[i] -= 32;
						}

						else if (i > 0 && apellido[i] >= 65 && apellido[i] <= 90) {
							apellido[i] += 32;
						}

					}
					cout << apellido;
					system("PAUSE>NULL");

				}

				else
				{
					return void();
				}

				break;

			case 3:
				cout << "Secci�n para Ingresar Correo Electr�nico" << endl;
				cout << "�Seguro que desea ingresar el Correo Electr�nico?" << endl;
				cout << "\n 1. Si" << endl;
				cout << "\n 2. No" << endl;
				cin >> o;

				if (o == 1)
				{
					cout << "Ingrese el Correo Electr�nico del Alumno" << endl;
					cin >> correo;

					for (int i = 0; correo[i] != NULL; i++) {

						if (correo[i] == '@') {
							countAt++;
						}
						if (countAt == 1 && correo[i] == '.') {
							countDot++;
						}
					}
					if (countAt == 0) {
						cout << "No hay @ " << endl;
					}
					else if (countAt > 1) {
						cout << "Hay mas de 1 @" << endl;
					}
					else if (countDot == 0) {
						cout << "falta el punto " << endl;
					}
					else if (countDot > 1) {
						cout << "Hay mas de un punto" << endl;
					}
					else {
						cout << "Todo esta correcto" << endl;
						system("PAUSE>NULL");
						break;
					}

					cout << correo; 

					system("PAUSE>NULL");
				}



				else
				{
					return void();
				}
				break;

			case 4:
				cout << "Secci�n para Ingresar T�lefono" << endl;
				cout << "�Seguro que desea ingresar el Tel�fono?" << endl;
				cout << "\n 1. Si" << endl;
				cout << "\n 2. No" << endl;
				cin >> o;

				if (o == 1)
				{
					cout << "Ingrese el T�lefono del Alumno" << endl;
					cin >> telefono;

					for (int i = 0; i < 10; i++) {

						if (telefono[i] >= 48 && telefono[i] <= 57) {
							countNum++;

						}
						if (telefono[i] != NULL) {
							cant++;
						}

					}
					if (cant != 10) {
						cout << "No son los 10 numeros" << endl;
					}
					else if (countNum != 10) { cout << "No todos son numeros" << endl; }
					else { cout << telefono << endl; }
					system("PAUSE>NULL");


				}

				else
				{
					return void();
				}
				break;

			case 5:
				cout << "Secci�n para Ingresar Matricula" << endl;
				cout << "�Seguro que desea ingresar la Matricula?" << endl;
				cout << "\n 1. Si" << endl;
				cout << "\n 2. No" << endl;
				cin >> o;

				if (o == 1)
				{
					cout << "Ingrese la Matricula del Alumno" << endl;
					cin >> matricula;
				}

				else
				{
					return void();
				}
				break;

			case 6:
				cout << "Secci�n para Ingresar Calificaciones" << endl;
				cout << "�Seguro que desea ingresar Calificaciones?" << endl;
				cout << "\n 1. Si" << endl;
				cout << "\n 2. No" << endl;
				cin >> o;

				if (o == 1)
				{
					cout << "Ingrese las Calificaciones del alumno" << endl;
					cin >> calif1;
					cin >> calif2;
					cin >> calif3;
				}

				else
				{
					return void();
				}
				break;

			case 7:
				cout << "Secci�n para Ingresar Direcci�n" << endl;
				cout << "�Seguro que desea ingresar la Direcci�n?" << endl;
				cout << "\n 1. Si" << endl;
				cout << "\n 2. No" << endl;
				cin >> o;

				if (o == 1)
				{
					cout << "Ingrese la Calle" << endl;
					cin >> calle;
					cout << "Ingrese el n�mero de Casa" << endl;
					cin >> numero;
					cout << "Ingrese la Colonia" << endl;
					cin >> colonia;
				}

				else
				{
					return void();
				}
				break;

			default:
				cout << "Ingrese una opcion valida";
				}
				
		 
		  }

        case 2:
		cout << "Ust�d eligi� Mostrar" << endl;
		cout << "�Seguro que desea ver el Registro de Alumnos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> o;

		if (o == 1)
		{
			mostrar();
		}

		else
		{
			return void ();
		}
		break;

	case 3:
		cout << "Ust�d eligi� Buscar" << endl;
		cout << "�Seguro que desea buscar Alumnos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> o;

		if (o == 1)
		{
			buscar();
		}

		else
		{
			return void ();
		}
		break;


	case 4:
		cout << "Ust�d eligi� Modificar" << endl;
		cout << "�Seguro que desea Modificar alumnos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> o;

		if (o == 1)
		{
			modificar();
		}

		else
		{
			return void ();
		}
		break;

	case 5:
		cout << "Ust�d eligi� Eliminar" << endl;
		cout << "�Seguro que desea Eliminar alumnos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> o;

		if (o == 1)
		{
			eliminar();
		}

		else
		{
			return void ();
		}
		break;

	default:
		cout << "Ingrese una opcion valida";
		}

		}


void registrar() {
	int p;

	system("cls");
	cout << "Ust�d est� en el Registro" << endl;

	cout << "Nombre:" << endl;
	cin >> (p[c].nombre);

	cout << "Apellido (s): " << endl;
	cin >> (cin, p[c].apellido);

	cout << "Correo : " << endl;
	cin >> p[c].correo;

	cout << "Tel�fono : " << endl;
	cin >> p[c].telefono;

	cout << "Matr�cula : " << endl;
	cin >> p[c].matricula;

	cout << "Calificaci�n 1: " << endl;
	cin >> p[c].calif1;

	cout << "Calificaci�n 2: " << endl;
	cin >> p[c].calif2;

	cout << "Calificaci�n 3: " << endl;
	cin >> p[c].calif3;

	cout << "Direcci�n: " << endl;
	cout << "Ingrese calle: ";
	cin >> p[c].calle;
	cin >> p[c].numero;
	cin >> p[c].colonia;

	c++;
	int();
}

void mostrar() {
	system("cls");
	cout << "Mostrar Alumnos" << endl;
	for (int i = 0; i < c; i++) {
		cout << "Nombre y Apellido: " << p[i].nombre << "" << p[i].apellido << endl;
		cout << "Mat�cula: " << p[i].matricula << endl;
		cout << "Calificaci�nes: " << p[i].calif1 << "" << p[i].calif2 << "" << p[i].calif3 << endl;
		cout << "Direcci�n: " << p[i].calle << "" << p[i].numero << "" << p[i].colonia << endl;

		c++;
		int();
	}
}


void buscar() {
	int p;
	int i;

	system("cls");
	cout << "Buscador de Alumnos" << endl;
	cout << "�Qu� matr�cula desea buscar?" << endl;
	cin >> o;

	bool encontrado = false;
	for (int i = 0; i < c; i++)
	{
		if (p[i].id == o) {
			cout << "Alumno encontrado: " << endl;
			cout << "Nombre y Apellido: " << p[i].nombre << "" << p[i].apellido << endl;
			cout << "Mat�cula: " << p[i].matricula << endl;
			cout << "Calificaci�nes: " << p[i].calif1 << "" << p[i].calif2 << "" << p[i].calif3 << endl;
			cout << "Direcci�n: " << p[i].calle << "" << p[i].numero << "" << p[i].colonia << endl;

			encontrado = true;
			break;

		}
	}

	if (!encontrado) {
		cout << "No hay registro de ese Alumno." << endl;
	}

	system("pause > nul");

	int();
}

void modificar() {
	system("cls");
	cin.ignore();
	system("cls");
	cout << "Buscador" << endl << endl;
	cout << "�Qu� matr�cula buscas? " << endl;
	cin >> o;

	int p;

	int i = 0;

	while (i < c) {
		if (p[i].id == o) {
			cout << "Encontr� a: " << endl;
			cout << "Nombre y apellido: " << p[i].nombre << " " << p[i].apellido << endl;
			cout << "Altura" << ": " << p[i].altura << endl << endl;

			cout << "�Qu� deseas modificar?" << endl;
			cout << "1. Matr�cula \n2. Nombre \n3. Apellido \n4. Altura \n0. Nada" << endl;
			cin >> o;

			switch (o)
			{
			case 1:
				cout << "Ingresa nueva m�tricula: ";
				cin >> p[i].id;
			break;
		case 2:
			cout << "Ingresa nuevo nombre: ";
			cin >> (p[i].nombre);
				break;
			case 3:
			cout << "Ingresa nuevo apellido: ";
			cin >> (p[i].apellido);
			break;
		case 4:
				cout << "Ingresa nueva altura: ";
		cin >> (p[i].altura);
			break;
		default:
			break;
		}

		if (o != 0) {
			cout << "Registro modificado: " << endl;
			cout << "Nombre y apellido: " << p[i].nombre << " " << p[i].apellido << endl;
			cout << "Altura" << ": " << p[i].altura << endl << endl;

			cout << "�Qu� deseas modificar?" << endl;
				cout << "1. Matr�cula \n2. Nombre \n3. Apellido \n4. Altura \n0. Nada" << endl;
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
	system("cls");

}