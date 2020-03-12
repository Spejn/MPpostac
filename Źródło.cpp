#include <iostream>
#include <ctime>
using namespace std;

int i;


void chlop()
{
	int nK = 2;
	cout << " \n \n chlop \n\n\n";

	
		srand(time(NULL));
		std::cout << "sila: " << std::rand() % nK + 1 << std::endl;
		int liczba = std::rand() % nK +1;
		std::cout << "Szybkosc: " << liczba << std::endl;
		liczba = std::rand() % nK + 1;
		std::cout << "zrecznosc: " << liczba << std::endl;
		liczba = std::rand() % nK + 1;
		std::cout << "spostrzegawczosc: " << liczba << std::endl;
		
	

}
void wojownik()
{
	int nK = 4;
	cout << " \n \n wojownik \n\n\n";


	srand(time(NULL));
	std::cout << "sila: " << std::rand() % nK + 1 << std::endl;
	int liczba = std::rand() % nK + 1;
	std::cout << "Szybkosc: " << liczba << std::endl;
	liczba = std::rand() % nK + 1;
	std::cout << "zrecznosc: " << liczba << std::endl;
	liczba = std::rand() % nK + 1;
	std::cout << "spostrzegawczosc: " << liczba << std::endl;

}
void mistrz()
{
	int nK = 6;
	cout << " \n \n mistrz \n\n\n";


	srand(time(NULL));
	std::cout << "sila: " << std::rand() % nK + 1 << std::endl;
	int liczba = std::rand() % nK + 1;
	std::cout << "Szybkosc: " << liczba << std::endl;
	liczba = std::rand() % nK + 1;
	std::cout << "zrecznosc: " << liczba << std::endl;
	liczba = std::rand() % nK + 1;
	std::cout << "spostrzegawczosc: " << liczba << std::endl;

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
	default: break;
	}
}