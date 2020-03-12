#include <iostream>
#include <ctime>
using namespace std;

int sil, szy, zre, spo, i;


void chlop()
{
	int nK = 2;
	cout << "chlop";

	while (i <= 3)  // ustawiæ 4 losowania dla 4 statystyk ze sprawdzeniem sumy wylosowanych liczb
	{
		srand((int)time(NULL));
		unsigned nWylosowana = rand() % nK + 1;
		i++;
		cout << "\n wynik: " << nWylosowana; // w tej chwili daje wyniki takie same (za ma³a ró¿nica czasu)
		// nie wyœwietla nazw statystyk
	}

}
void wojownik()
{
	cout << "wojownik";
}
void mistrz()
{
	cout << "mistrz";
}

void main()
{
	int rodzaj;
	cout << "wybierz rodzaj postaci: \n 1. chlop \n 2. wojownik \n 3. mistrz \n Twoj wybor: ";
	cin >> rodzaj;
	switch (rodzaj)
	{
	case 1: chlop(); break;
	case 2: wojownik(); break;
	case 3: mistrz(); break;
	}
}