#include <iostream>
#include <ctime>
using namespace std;

void chlop()
{
	cout << "chlop";
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