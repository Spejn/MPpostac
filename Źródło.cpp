// wersja alpha dalej dodac umiejetnosci dodatkowe (losowe - zalezne w pewnym stopniu od klasy
#include <iostream>
#include <ctime>
using namespace std;

int nK; // ko
int sprawdzenie;
int Ws;  //wartosc do sprawdzenia
int liczba1, liczba2, liczba3, liczba4;
int st; // statystyki ogólnie

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
	st = 2;
	cout << "\numiejetnosc\n" << "uprawa pola: " << st << endl << "widly: " << st << endl;
}
void kwojownik()
{

	cout << "\numiejetnosc\n" << "dlugie ostrza: " << st << endl << "krotkie ostrza: " << st << endl << "lancuchy: " <<
		st	<< endl << "walka wrecz: " << st << endl;

}

void kstrzelec()
{

	cout << "\numiejetnosc\n" << "luk: " << st << endl << "noze do rzucania: " << st << endl << "dmuchawki: " <<
		st << endl << "bron egzotyczna: " << st << endl;
}

void ktruciciel()
{
	cout << "\numiejetnosc\n" << "podstawy lecenia: " << st << endl << "podstawy zatruwania: " << st << endl << "alchemia: " <<
		st << endl << "zielarstwo: " << st << endl;
}

void kdemagog()
{
	cout << "\numiejetnosc\n" << "demagogia: " << st << endl << "elokwencja: " << st << endl << "targowanie: " <<
		st << endl << "obycie w towarzystwie " << st << endl << "manipulacje: " << st << endl;
}

void kzwiadowca()
{
	cout << "\numiejetnosc\n" << "sledzenie: " << st << endl << "podsluchiwanie: " << st << endl << "tortury: " <<
		st << endl << "zbieranie informacji " << st << endl;
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
	st = 4;
	nK = 4;
	Ws = 10;
	losowaniestatystyk();

	int klasa;
	do
	{

		cout << "\n\nwybierz klase: \n1. wojownik\n2. strzelec\n3. truciciel\n4. demagog\nTwoj wybor: ";
		cin >> klasa;


		switch (klasa)
		{
		case 1: kwojownik(); break;
		case 2: kstrzelec(); break;
		case 3: ktruciciel(); break;
		case 4: kdemagog(); break;
		default: cout << "inne klasy sa niedostepne!"; break;
		}
	} while (klasa >= 1 && klasa <= 4);

}
void mistrz()
{

	cout << " \n \n mistrz \n\n\n";
	nK = 6;
	Ws = 15;
	losowaniestatystyk();

	int klasa;
	do
	{
		st = 6;
		cout << "\n\nwybierz glowna klase: \n1. wojownik\n2. strzelec\n3. truciciel\n4. demagog\nTwoj wybor: ";
		cin >> klasa;


		switch (klasa)
		{
		case 1: kwojownik(); break;
		case 2: kstrzelec(); break;
		case 3: ktruciciel(); break;
		case 4: kdemagog(); break;
		default: cout << "inne klasy sa niedostepne!"; break;
		}
	} while (klasa <= 1 && klasa >= 4);

	int klasa2;
	do
	{
		st = 4;
		cout << "\n\nwybierz druga klase: \n1. wojownik\n2. strzelec\n3. truciciel\n4. demagog\nTwoj wybor: ";
		cin >> klasa;


		switch (klasa)
		{
		case 1: kwojownik(); break;
		case 2: kstrzelec(); break;
		case 3: ktruciciel(); break;
		case 4: kdemagog(); break;
		default: cout << "inne klasy sa niedostepne!"; break;
		}
	} while (klasa <= 1 && klasa >= 4);

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