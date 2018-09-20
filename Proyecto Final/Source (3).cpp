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
	int Registrar;
	int Mostrar;
	int Buscar;
	int Modificar;
	int Eliminar;


	void registrar();
	void mostrar();
	void buscar();

	cout << " \t\t\t\t AGENDA ELECTRONICA" << endl;
	cout << "Elige la opción deseada" << endl;
	cout << "1.- Registrar" << endl;
	cout << "2.- Mostrar" << endl;
	cout << "3.- Buscar" << endl;
	cout << "4.- Eliminar" << endl;

	cin >> o;

	switch (o) {

	case 1:
		cout << "Ustéd eligió Registrar" << endl;
		cout << "¿Seguro que desea Registrar Alumnos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		if (opcion == 1)
		{
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
				registrar();
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
		}

		else
		{
			return main();
		}
		break;

	case 2:
		cout << "Ustéd eligió Mostrar" << endl;
		cout << "¿Seguro que desea ver el Registro de Alumnos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		mostrar();

		break;

	case 3:
		cout << "Ustéd eligió Buscar" << endl;
		cout << "¿Seguro que desea buscar Alumnos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;

		buscar();

		break;

	case 4:
		cout << "Ustéd eligió Modificar" << endl;
		cout << "¿Seguro que desea Modificar alumnos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;


		break;

	case 4:
		cout << "Ustéd eligió Eliminar" << endl;
		cout << "¿Seguro que desea Eliminar alumnos?" << endl;
		cout << "\n 1. Si" << endl;
		cout << "\n 2. No" << endl;
		cin >> opcion;


		break;
		
	default:
		cout << "Ingrese una opcion valida";

	}


	void registrar() {
		system("cls");
		cout << "Ustéd está en el Registro" << endl;
		
		cout << "Nombre:" << endl;
		getline (cin,  p[c].nombre);

		cout << "Apellido (s): " << endl;
		getline (cin, p[c].apellido);

		cout << "Correo : " << endl;
		cin >> p[c].correo;

		cout << "Teléfono : " << endl;
		cin >> p[c].telefono;

		cout << "Matrícula : " << endl;
		cin >> p[c].matricula;

		cout << "Calificación 1: " << endl;
		cin >> p[c].calif1;

		cout << "Calificación 2: " << endl;
		cin >> p[c].calif2;

		cout << "Calificación 3: " << endl;
		cin >> p[c].calif3;

		cout << "Dirección: " << endl;
		cout << "Ingrese calle: "
		cin >> p[c].calle;
		cin >> p[c].numero;
		cin >> p[c].colonia;
	}

	void mostrar() {
		system("cls");
		cout << "Mostrar Alumnos" << endl;
		for (int i = 0; i < c; i++) {
			cout << "Nombre y Apellido: " << p[i].nombre << "" << p[i].apellido << endl;
			cout << "Matícula: " << p[i].matricula << endl;
			cout << "Calificaciónes: " << p[i].calif1 << "" << p[i].calif2 << "" << p[i].calif3 << endl;
			cout << "Dirección: " << p[i].calle << "" << p[i].numero << "" << p[i].colonia << endl;
		}

		void buscar() {
			system("cls");
			cout << "Buscador de Alumnos" << endl;
			cout << "¿Qué matrícula desea buscar?" << endl;
			cin >> o;

			bool encontrado = false;
			for (int i = 0; i < c; i++)
			{
				if (p[i].id == o) {
					cout << "Alumno encontrado: " << endl;
					cout << "Nombre y Apellido: " << p[i].nombre << "" << p[i].apellido << endl;
					cout << "Matícula: " << p[i].matricula << endl;
					cout << "Calificaciónes: " << p[i].calif1 << "" << p[i].calif2 << "" << p[i].calif3 << endl;
					cout << "Dirección: " << p[i].calle << "" << p[i].numero << "" << p[i].colonia << endl;

					encontrado = true;
					break;
					
				}
			}

			if (!encontrado) {
				cout << "No hay registro de ese Alumno." << endl;
			}
		}
	}

	system("pause > nul");

}
 

