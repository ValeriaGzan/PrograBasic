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

	cout << "Elige la opción deseada:" << endl;
	cout << "1. Ingresar Nombre(s)." << endl;
	cout << "2. Ingresar Apellidos." << endl;
	cout << "3. Ingresar Correo Electrónico." << endl;
	cout << "4. Ingresar Télefono." << endl;
	cout << "5. Ingresar Matrícula." << endl;
	cout << "6. Ingresar Calificaciones." << endl;
	cout << "7. Ingresar Dirección." << endl;

	cin >> x;
	

	switch (x) {

	case 1:
		cout << "Sección para Ingresar Nombre(s)" << endl;
		cout << "¿Seguro que desea ingresar Nombres?" << endl;
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
		cout << "Sección para Ingresar Apellidos" << endl;
		cout << "¿Seguro que desea ingresar Apellidos?" << endl;
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
		cout << "Sección para Ingresar Correo Electrónico" << endl;
		cout << "¿Seguro que desea ingresar el Correo Electrónico?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
			cout << "Ingrese el Correo Electrónico del Alumno" << endl;
			cin >> correo;
		}

		else
		{
			return main();
		}
		break;

	case 4:
		cout << "Sección para Ingresar Télefono" << endl;
		cout << "¿Seguro que desea ingresar el Teléfono?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
			cout << "Ingrese el Télefono del Alumno" << endl;
			cin >> telefono;
		}

		else
		{
			return main();
		}
		break;

	case 5:
		cout << "Sección para Ingresar Matricula" << endl;
		cout << "¿Seguro que desea ingresar la Matricula?" << endl;
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
		cout << "Sección para Ingresar Calificaciones" << endl;
		cout << "¿Seguro que desea ingresar Calificaciones?" << endl;
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
		cout << "Sección para Ingresar Dirección" << endl;
		cout << "¿Seguro que desea ingresar la Dirección?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
			cout << "Ingrese la Calle" << endl;
			cin >> calle;
			cout << "Ingrese el número de Casa" << endl;
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


