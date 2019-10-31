#include <string>
#include <iostream>
using namespace std;
// Declaramos prototipos de funciones
void menu(); 
int suma();
int resta();
int multi();
int division();
void pausa();
int main()
//creamos funciones
{
	menu();
	return 0;
}
void menu()
{
	bool bandera = false;
	char tecla;
	{
		system("cls");
		cin.clear();
		cout << "Calculadora Funciones" << endl;
		cout << "---------------------" << endl;
		cout << "\t1.- Sumar" << endl;
		cout << "\t2.- Restar" << endl;
		cout << "\t3.- Multiplicar" << endl;
		cout << "\t4.- Dividir" << endl;
		cout << "\t5.- Salir" << endl;
		cout << "Elige una opcion ";
		cin >> tecla;
		switch (tecla)
		{
		case '1': 
			system("cls");
			suma();
			break; 
		case '2':
			system("cls");
			resta();
			break;
		case '3':
			system("cls");
			multi();
			break;
		case '4':
			system("cls");
			division();
			break;
		case '5':
			bandera = true;
			break; 

		default: 
			break;
			system("cls");
			cout << "Opcion no valida" << endl;
			pausa();
			break;

		} 
		while (bandera != true);

	}
}
void pausa()
{
	cout << endl << "Pausa cualquier tecla";
	getwchar();
	getwchar();
}
int suma()
{
	int a, b, suma;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor";
		cin >> b;
		suma = a + b;
		cout << "La suma es: " << suma;
		pausa();
		return 0;


}