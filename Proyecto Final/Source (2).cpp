#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
	locale::global(locale("spanish"));
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
	int opcion;

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
		cout << "Secci�n para Ingresar Nombre(s)" << endl;
		cout << "�Seguro que desea ingresar Nombres?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
			cout << "Ingrese los nombres del Alumno" << endl;
			cin >> nombre;
		}

		else
		{
			return main();
		}
		break;

	case 2:
		cout << "Secci�n para Ingresar Apellidos" << endl;
		cout << "�Seguro que desea ingresar Apellidos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
			cout << "Ingrese los Apellidos del Alumno" << endl;
			cin >> apellido;
		}

		else
		{
			return main();
		}

		break;

	case 3:
		cout << "Secci�n para Ingresar Correo Electr�nico" << endl;
		cout << "�Seguro que desea ingresar el Correo Electr�nico?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
			cout << "Ingrese el Correo Electr�nico del Alumno" << endl;
			cin >> correo;
		}

		else
		{
			return main();
		}
		break;

	case 4:
		cout << "Secci�n para Ingresar T�lefono" << endl;
		cout << "�Seguro que desea ingresar el Tel�fono?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
			cout << "Ingrese el T�lefono del Alumno" << endl;
			cin >> telefono;
		}

		else
		{
			return main();
		}
		break;

	case 5:
		cout << "Secci�n para Ingresar Matricula" << endl;
		cout << "�Seguro que desea ingresar la Matricula?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
			cout << "Ingrese la Matricula del Alumno" << endl;
			cin >> matricula;
		}

		else
		{
			return main();
		}
		break;

	case 6:
		cout << "Secci�n para Ingresar Calificaciones" << endl;
		cout << "�Seguro que desea ingresar Calificaciones?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
			cout << "Ingrese las Calificaciones del alumno" << endl;
			cin >> calif1;
			cin >> calif2;
			cin >> calif3;
		}

		else
		{
			return main();
		}
		break;

	case 7:
		cout << "Secci�n para Ingresar Direcci�n" << endl;
		cout << "�Seguro que desea ingresar la Direcci�n?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
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
			return main();
		}
		break;

	default:
		cout << "Ingrese una opcion valida";

	}

	system("pause");

}


