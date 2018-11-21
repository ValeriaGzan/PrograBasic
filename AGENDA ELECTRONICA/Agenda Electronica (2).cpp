#include<iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <iomanip>
using namespace std;

struct datos {
	string nombre;
	string apellido;
	char correo[100];
	char telefono[12];
	int matricula;
	float calif1;
	float calif2;
	float calif3;
	string direccion;
};

datos alumnos[100];
int c = 0;
int o, i;
int cant;
int countAt, countDot, countNum;
float califinal;
void menu();
void registrar();
void mostrar();
void buscar();
void editar();
void eliminar();
void salir();
bool respuesta;
bool correovalidado = false;
bool telefonovalidado = false;
bool califvalidado = false;
bool matrivalidado = false;


int main() {
	locale::global(locale("spanish"));
	ifstream archivo;
	string a;

	archivo.open("Registro.txt", ios::in);
	if (archivo.fail()) {
		cout << "No hay archivo disponible.";
	}

	archivo.close();

	menu();

	return 0;
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
	cout << "6.- Salir" << endl;
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
	case 6:
		salir();
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

		correovalidado = false;
		do {
			countAt = 0;
			countDot = 0;
		cout << "Correo : " << endl;
			cin >> alumnos[c].correo;
			for (int i = 0; alumnos[c].correo[i] != NULL; i++) {

				if (alumnos[c].correo[i] == 64) {
					countAt++;
				}
				if (countAt == 1 && alumnos[c].correo[i] == '.') {
					countDot++;
				}
			}
			if (countAt == 0) {
				cout << "Falta @ " << endl;
			}
			else if (countAt > 1) {
				cout << "Hay mas de 1 @" << endl;
			}
			else if (countDot == 0) {
				cout << "Falta el .com " << endl;
			}
			else if (countDot > 1) {
				cout << "Hay mas de un punto" << endl;
			}
			else {
				cout << "Correo Electonico valido" << endl;
				correovalidado = true;
				system("PAUSE>NULL");
				break;
			}
		} while (correovalidado == false);

		telefonovalidado = false;
		do {
			countNum = 0;
			cout << "Teléfono : " << endl;
			cin >> alumnos[c].telefono;
			for ( i = 0; alumnos[c].telefono[i] != NULL; i++) {

				if (alumnos[c].telefono[i]>='0' && alumnos[c].telefono[i] <='9') {
					countNum++;
				}
			}
			countNum++;

			if (i < 8 || i > 12) {
				cout << "Tu telefono es incorrecto" << endl;
			}
			else if (i == countNum) { cout << "No todos son numeros" << endl; }
			else {
				cout << "Telefono valido" << endl;
				telefonovalidado = true;
			}
			system("PAUSE>NULL");
			
		} while (telefonovalidado == false);

		
		do {
		matrivalidado = false;
		cout << "Matricula : " << endl;
		cin >> alumnos[c].matricula;
		cin.ignore();

		for (int j = 0; j < c; j++) {
			if (alumnos[j].matricula == alumnos[c].matricula && j != c) {
				cout << "Matricula existente. Ingresa una nueva" << endl;
				matrivalidado = true;
				break;
			}
		}
	} while (matrivalidado == true);


		califvalidado = false;
		do {
			countNum = 0;
			cout << "Calificacion 1 : " << endl;
			cin >> alumnos[c].calif1;

			if (alumnos[c].calif1 >= 0 && alumnos[c].calif1 <= 100) {
				califvalidado = true;
			}

		} while (califvalidado == false);



		califvalidado = false;
		do {
			countNum = 0;
			cout << "Calificacion 2 : " << endl;
			cin >> alumnos[c].calif2;

			if (alumnos[c].calif2 >= 0 && alumnos[c].calif2 <= 100) {
				califvalidado = true;
			}

		} while (califvalidado == false);

		califvalidado = false;
		do {
			countNum = 0;
			cout << "Calificacion 3 : " << endl;
			cin >> alumnos[c].calif3;

			if (alumnos[c].calif3 >= 0 && alumnos[c].calif3 <= 100) {
				califvalidado = true;
			}

		} while (califvalidado == false);

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

		cout << fixed;
		cout << setprecision(2);
		cout << "Calificacion 1:" << alumnos[i].calif1 << endl;
		cout << "Calificacion 2:" << alumnos[i].calif2 << endl;
		cout << "Calificacion 3:" << alumnos[i].calif3 << endl;

		califinal = (alumnos[i].calif1 * .30) + (alumnos[i].calif2 * .45) + (alumnos[i].calif3 * .25);
		if (alumnos[i].calif1 == 0 || alumnos[i].calif2 == 0 || alumnos[i].calif3 == 0) {
			califinal = 0;
		}

		cout << "Calificacion Final:" << califinal << endl;

		cout << "Direccion:" << alumnos[i].direccion << endl;

		cout << "............................................................................................" << endl;

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
			system("cls");
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
				system("cls");
				cout << "Ingrese el Nombre Correcto: ";
				getline(cin, alumnos[i].nombre);
				break;
	
			case 2:
				cin.ignore();
				system("cls");
				cout << "Ingresa el Apellido Correcto: ";
				getline(cin, alumnos[i].apellido);
				break;
			case 3:
				system("cls");
				cout << "Ingresa la matricula Correcta: ";
				do {
					matrivalidado = false;
					cout << "Matricula : " << endl;
					cin >> alumnos[c].matricula;
					cin.ignore();

					for (int j = 0; j < c; j++) {
						if (alumnos[j].matricula == alumnos[c].matricula && j != c) {
							cout << "Matricula existente. Ingresa una nueva" << endl;
							matrivalidado = true;
							break;
						}
					}
				} while (matrivalidado == true);
				break;
			case 4:
				system("cls");
				cout << "Ingresa el Correo Electronico Correcto: ";
				correovalidado = false;
				do {
					countAt = 0;
					countDot = 0;
					cout << "Correo : " << endl;
					cin >> alumnos[c].correo;
					for (int i = 0; alumnos[c].correo[i] != NULL; i++) {

						if (alumnos[c].correo[i] == 64) {
							countAt++;
						}
						if (countAt == 1 && alumnos[c].correo[i] == '.') {
							countDot++;
						}
					}
					if (countAt == 0) {
						cout << "Falta @ " << endl;
					}
					else if (countAt > 1) {
						cout << "Hay mas de 1 @" << endl;
					}
					else if (countDot == 0) {
						cout << "Falta el .com " << endl;
					}
					else if (countDot > 1) {
						cout << "Hay mas de un punto" << endl;
					}
					else {
						cout << "Correo Electonico valido" << endl;
						correovalidado = true;
						system("PAUSE>NULL");
						break;
					}
				} while (correovalidado == false);
				break;
			case 5:
				system("cls");
				cout << "Ingresa el Telefono Correcto: ";
				telefonovalidado = false;
				do {
					countNum = 0;
					cout << "Teléfono : " << endl;
					cin >> alumnos[c].telefono;
					for (i = 0; alumnos[c].telefono[i] != NULL; i++) {

						if (alumnos[c].telefono[i] >= '0' && alumnos[c].telefono[i] <= '9') {
							countNum++;
						}
					}
					countNum++;

					if (i < 8 || i > 12) {
						cout << "Tu telefono es incorrecto" << endl;
					}
					else if (i == countNum) { cout << "No todos son numeros" << endl; }
					else {
						cout << "Telefono valido" << endl;
						telefonovalidado = true;
					}
					system("PAUSE>NULL");

				} while (telefonovalidado == false);
				break;
			case 6:
				system("cls");
				cout << "Ingresa la Calificacion 1 Correcta: ";
				califvalidado = false;
				do {
					countNum = 0;
					cin >> alumnos[c].calif1;

					if (alumnos[c].calif1 >= 0 && alumnos[c].calif1 <= 100) {
						califvalidado = true;
					}

				} while (califvalidado == false);
				break;
			case 7:
				system("cls");
				cout << "Ingresa la Calificacion 2 Correcta: ";
				califvalidado = false;
				do {
					countNum = 0;
					cin >> alumnos[c].calif2;

					if (alumnos[c].calif2 >= 0 && alumnos[c].calif2 <= 100) {
						califvalidado = true;
					}

				} while (califvalidado == false);
				break;
			case 8:
				system("cls");
				cout << "Ingresa la Calificacion 3 Correcta: ";
				califvalidado = false;
				do {
					countNum = 0;
					cin >> alumnos[c].calif3;

					if (alumnos[c].calif3 >= 0 && alumnos[c].calif3 <= 100) {
						califvalidado = true;
					}

				} while (califvalidado == false);
				break;
			case 9:
				system("cls");
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
		}
		i++;

		system("pause > nul");
		menu();
	}
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
		archivo << "Matricula: " << to_string(alumnos[i].matricula) << endl;
		archivo << "Nombre Completo: " << alumnos[i].nombre << " " <<  alumnos[i].apellido << endl;
		archivo << "Correo Electronico: " << alumnos[i].correo << endl;
		cout << fixed;
		archivo << setprecision(2);
		archivo << "Calificacion 1: " << alumnos[i].calif1 << endl;
		archivo << "Calificacion 2: " << alumnos[i].calif2 << endl;
		archivo << "Calificacion 3: " << alumnos[i].calif3 << endl;
		califinal = (alumnos[i].calif1 * .30) + (alumnos[i].calif2 * .45) + (alumnos[i].calif3 * .25);
		if (alumnos[i].calif1 == 0 || alumnos[i].calif2 == 0 || alumnos[i].calif3 == 0) {
			califinal = 0;
		}
		archivo << "Calificacion Final: " << califinal << endl;
		archivo << "Telefono: " << alumnos[i].telefono << endl;
		archivo << "Direccion: " << alumnos[i].direccion << endl;
	}
	archivo.close();

	int si;
	cout << "¿Desea borrar los alumnos que ya tiene registrados?\n1. si\n2. No" << endl;
	cout << "1. si "<< endl;
	cout << "2. No" << endl;
	cin >> si;
	if (si == 1) {
		remove("Alumnos.txt");
	}
	else {
		exit(1);
	}
}