//Programacion Centro educativo "MIS AÑOS DORADOS"
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int Cant = 0;
int Cant1;
int Cant2;
int Cant3;
int Cant4;
void Menu();
int main()
{
	Menu();
	return 0;
}
void Menu()
{
	int opc;
	do
	{
		system("cls");
		cout << "Bienvenido al centro educativo Mis años dorados" << endl;
		cout << "1.-Nivel estudiante destacado" << endl;
		cout << "2.-Nivel estudiante aceptable" << endl;
		cout << "3.-Nivel estudiante regular" << endl;
		cout << "4.-Nivel de estudiante" << endl;
		cout << "5.-Salir" << endl;
		cout << "Elije la opcion de notas :";
		cin >> opc;
		switch (opc)
		{
		case 1:
			do
			{
				system("cls");
				cout << "Ingrese la cantidad de estudiantes de diferente categoria:";
				cin >> Cant1;
				if (Cant1 < 5)
				{
					cout << "la nota no puede ser mayor a 10 ni menor a 1" << endl;
					system("pause");
				}
			} while (Cant1 < 5);
			break;
		case 2:
			do
			{
				system("cls");
				cout << "Ingrese la la nota de el estudiante destacado:";
				cin >> Cant2;
				if (Cant2 > 8)
				{
					cout << "la nota del estudiante de mayor de 8 es destacado" << endl;
					system("pause");
				}
			} while (Cant2 > 8);
			break;
		case 3:
			do
			{
				system("cls");
				cout << "Ingrese la nota de el estudiante aceptable:";
				cin >> Cant3;
				if (Cant3 > 10)
				{
					cout << "El estudiante aceptable la nota es de 6y7" << endl;
					system("pause");
				}
			} while (Cant3 > 10);
			break;
		case 4:
			do
			{
				system("cls");
				cout << "Ingrese la nota del estudiante regular :";
				cin >> Cant4;
				if (Cant4 < 4)
				{
					cout << "El estudiante regular la nota es menor a 6" << endl;
					system("pause");
				}
			} while (Cant4 < 4);
			break;
		default:
			break;
		}
	} while (opc != 5);
	system("cls");
	if (Cant1 > 0)
	{
		cout << "La cantidad de estudiantes destacados segun la categoria :" << Cant1 << endl;
	}
	if (Cant2 > 0)
	{
		cout << "La cantidad de estudiantes aceptable segun la categoria :" << Cant2 << endl;
	}
	if (Cant3 > 0)
	{
		cout << "La cantidad de estudiantes regulares segun la categoria :" << Cant3 << endl;
	}
	if (Cant4 > 0)
	{
		cout << "La cantidad de estudiantes segun sus categorias :" << Cant4 << endl;
	}
}