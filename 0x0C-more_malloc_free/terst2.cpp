#include <iostream>
using namespace std;
string Nombre[100];
string Identificacion[100];
string Nivel_Formacion[100];
double Promedio[100];
int Cant, *P;
int Cant_primaria, Cant_Bachillerato, p1, p2;
bool Llave = false;
void Registro();
int main(int argc, char *argv[])
{
	Registro();
	return 0;
}
void Registro()
{
	cout << "BIENVENDID@ AL CENTRO EDUCATIVO MIS ANIOS DORRADOS" << endl;
	cout << "Ingresa la cantidad de estudiantes que desea registrar :";
	cin >> Cant;
	P = &Cant;
	for (int i = 0; i < *P; i++)
	{
		system("cls");
		cout << "Ingresa el nombre del estudiante NM." << i + 1 << endl;
		cin >> Nombre[i];
		cout << "Ingresa La Identificacion del estudiante " << Nombre[i] << endl;
		cin >> Identificacion[i];
		cout << "Ingresa el nivel de formacion del estudiante " << Nombre[i] << " Primaria/Bachillerato" << endl; //CREA UN IF PARA QUE INGRESEN UN NIVEL DE FORMACIO VALIDO
		cin >> Nivel_Formacion[i];
		do
		{
			cout << "Ingresa el promedio del estudieante :" << endl;
			cin >> Promedio[i];
			if (Promedio[i] >= 1 && Promedio[i] <= 10)
			{
				Llave = true;
			}
			else
			{
				cout << "El promedio tiene que estar en un rango de 1-10" << endl;
				Llave = false;
				system("pause");
				system("cls");
			}
		} while (Llave != true);
	}
	system("cls");
	if (Llave == true)
	{
		for (int i = 0; i < *P; i++)
		{
			if (Nivel_Formacion[i] == "Primaria" || Nivel_Formacion[i] == "PRIMARIA")
			{
				Cant_primaria += 1;
				p1 += Promedio[i];
			}
			if (Nivel_Formacion[i] == "Bachillerato" || Nivel_Formacion[i] == "BACHILLERATO")
			{
				Cant_Bachillerato += 1;
				p2 += Promedio[i];
			}
			if (Nivel_Formacion[i] == "Primaria" && Promedio[i] > 8 || Nivel_Formacion[i] == "PRIMARIA" && Promedio[i] > 8)
			{
				cout << "===========================================================" << endl;
				cout << "Nombre :" << Nombre[i] << endl;
				cout << "Identificacion :" << Identificacion[i] << endl;
				cout << "Promedio :" << Promedio[i] << endl;
				cout << "Categoria Principal Destacado" << endl;
				cout << "Nivel de Formacion " << Nivel_Formacion[i] << endl;
				cout << "===========================================================" << endl;
			}
			if (Nivel_Formacion[i] == "Primaria" && Promedio[i] >= 6 && Promedio[i] <= 7 || Nivel_Formacion[i] == "PRIMARIA" && Promedio[i] >= 6 && Promedio[i] <= 7)
			{
				cout << "===========================================================" << endl;
				cout << "Nombre :" << Nombre[i] << endl;
				cout << "Identificacion :" << Identificacion[i] << endl;
				cout << "Promedio :" << Promedio[i] << endl;
				cout << "Categoria Principal Aceptable" << endl;
				cout << "Nivel de Formacion " << Nivel_Formacion[i] << endl;
				cout << "===========================================================" << endl;
			}
			if (Nivel_Formacion[i] == "Primaria" && Promedio[i] < 6 || Nivel_Formacion[i] == "PRIMARIA" && Promedio[i] < 6)
			{
				cout << "===========================================================" << endl;
				cout << "Nombre :" << Nombre[i] << endl;
				cout << "Identificacion :" << Identificacion[i] << endl;
				cout << "Promedio :" << Promedio[i] << endl;
				cout << "Categoria Principal Regular" << endl;
				cout << "Nivel de Formacion " << Nivel_Formacion[i] << endl;
				cout << "===========================================================" << endl;
			}
			if (Nivel_Formacion[i] == "Bachillerato" && Promedio[i] >= 9 || Nivel_Formacion[i] == "BACHILLERATO" && Promedio[i] >= 9)
			{
				cout << "===========================================================" << endl;
				cout << "Nombre :" << Nombre[i] << endl;
				cout << "Identificacion :" << Identificacion[i] << endl;
				cout << "Promedio :" << Promedio[i] << endl;
				cout << "Categoria Principal Destacado" << endl;
				cout << "Nivel de Formacion " << Nivel_Formacion[i] << endl;
				cout << "===========================================================" << endl;
			}
			if (Nivel_Formacion[i] == "Bachillerato" && Promedio[i] >= 7 && Promedio[i] <= 8 || Nivel_Formacion[i] == "BACHILLERATO" && Promedio[i] >= 7 && Promedio[i] <= 8)
			{
				cout << "Nombre :" << Nombre[i] << endl;
				cout << "Identificacion :" << Identificacion[i] << endl;
				cout << "Promedio :" << Promedio[i] << endl;
				cout << "Categoria Principal Aceptable" << endl;
				cout << "Nivel de Formacion " << Nivel_Formacion[i] << endl;
				cout << "===========================================================" << endl;
			}
			if (Nivel_Formacion[i] == "Bachillerato" && Promedio[i] < 7 || Nivel_Formacion[i] == "BACHILLERATO" && Promedio[i] < 7)
			{
				cout << "===========================================================" << endl;
				cout << "Nombre :" << Nombre[i] << endl;
				cout << "Identificacion :" << Identificacion[i] << endl;
				cout << "Promedio :" << Promedio[i] << endl;
				cout << "Categoria Principal Regular" << endl;
				cout << "Nivel de Formacion " << Nivel_Formacion[i] << endl;
				cout << "===========================================================" << endl;
			}
		}
		cout << "La cantidad de Alumnos registrados en el nivel primaria son :" << Cant_primaria << endl;
		cout << "La cantidad de Alumnos registrados en el nivel Bachillerato son :" << Cant_Bachillerato << endl;
		cout << "El promedio total del nivel primaria es de :" << p1 / Cant_primaria << endl;
		cout << "El promedio total del nivel Bachillerato es de :" << p2 / Cant_Bachillerato << endl;
	}
