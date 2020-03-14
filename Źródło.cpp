#include <iostream>
#include <ctime>
using namespace std;

int nK;
int sprawdzenie;
int Ws;  //wartosc do sprawdzenia
int liczba1, liczba2, liczba3, liczba4;

void losowaniestatystyk()
{
	do
	{
		srand(time(NULL));
		liczba1 = rand() % nK + 1;
		liczba2 = rand() % nK + 1;
		liczba3 = rand() % nK + 1;
		liczba4 = rand() % nK + 1;
		sprawdzenie = liczba1 + liczba2 + liczba3 + liczba4;
	} while (sprawdzenie <= Ws);

	
	cout << "sila: " << liczba1 << endl;
	cout << "szybkosc: " << liczba2 << endl;
	cout << "zrecznosc: " << liczba3 << endl;
	cout << "spostrzegawczosc: " << liczba4 << endl;
}

void kchlop()
{
	int st = 2;
	cout << "\numiejetnosc " << "uprawa pola: " << st << endl << "umiejetnosc " << "widly: " << st << endl;
}

void chlop()
{


	cout << " \n \n chlop \n\n\n";

	nK = 2;
	Ws = 5;
	losowaniestatystyk();

	
		
		int klasa;
		do
		{
		
		cout << "\n\nwybierz klase: \n 1. chlop\nTwoj wybor: ";
		cin >> klasa;

		
			switch (klasa)
			{
			case 1: kchlop(); break;
			default: cout << "inne klasy sa niedostepne!"; break;
			}
		} while (klasa != 1);
	

}
void wojownik()
{

	cout << " \n \n wojownik \n\n\n";

	nK = 4;
	Ws = 10;
	losowaniestatystyk();


}
void mistrz()
{

	cout << " \n \n mistrz \n\n\n";
	nK = 6;
	Ws = 15;
	losowaniestatystyk();

}

void main()
{
	int rodzaj;
	cout << "stworz przeciwnika lub towarzysza dla Twoich graczy!";
	do
	{ 
		cout << "\n\n\n\nwybierz rodzaj postaci: \n 1. chlop \n 2. wojownik \n 3. mistrz \n\n Twoj wybor: ";
		cin >> rodzaj;
		switch (rodzaj)
		{
		case 1: chlop(); break;
		case 2: wojownik(); break;
		case 3: mistrz(); break;
		}
	} while (rodzaj >= 1 && rodzaj <= 3);
}