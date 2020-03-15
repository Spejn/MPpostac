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

}
void staty()
{
	cout << "\n\n\t\t\tstatystyki\n:";
	cout << "\t\t\tsila: " << liczba1 << endl;
	cout << "\t\t\tszybkosc: " << liczba2 << endl;
	cout << "\t\t\tzrecznosc: " << liczba3 << endl;
	cout << "\t\t\tspostrzegawczosc: " << liczba4 << endl;
}

void kchlop()
{
	st = 2;
	cout << "\n\t\t\tumiejetnosc\n" << "\t\tuprawa pola: " << st <<"\twidly: " << st << endl;
}
void kwojownik()
{

	cout << "\n\t\t\tumiejetnosc\n" << "\t\tdlugie ostrza: " << st << "\tkrotkie ostrza: " << st << endl << "\t\tlancuchy: " <<
		st	<< "\t\twalka wrecz: " << st << endl;

}

void kstrzelec()
{

	cout << "\n\t\t\tumiejetnosc\n" << "\t\tluk: " << st << "\t\tnoze do rzucania: " << st << endl << "\t\tdmuchawki: " <<
		st << "\tbron egzotyczna: " << st << endl;
}

void ktruciciel()
{
	cout << "\n\t\t\tumiejetnosc\n" << "\t\tpodstawy lecenia: " << st << "\tpodstawy zatruwania: " << st << endl << "\t\talchemia: " <<
		st << "\tzielarstwo: " << st << endl;
}

void kdemagog()
{
	cout << "\n\t\t\tumiejetnosc\n" << "\t\tdemagogia: " << st << "\telokwencja: " << st << "\ttargowanie: " <<
		st << endl << "\t\tobycie w towarzystwie " << st << "\t\tmanipulacje: " << st << endl;
}

void kzwiadowca()
{
	cout << "\n\t\t\tumiejetnosc\n" << "\tsledzenie: " << st << "\tpodsluchiwanie: " << st << endl << "\t\ttortury: " <<
		st << "\tzbieranie informacji " << st << endl;
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
		staty();

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

		cout << "\n\nwybierz klase: \n1. wojownik\n2. strzelec\n3. truciciel\n4. demagog\n5. zwiadowca\nTwoj wybor: ";
		cin >> klasa;


		switch (klasa)
		{
		case 1: kwojownik(); break;
		case 2: kstrzelec(); break;
		case 3: ktruciciel(); break;
		case 4: kdemagog(); break;
		case 5: kzwiadowca(); break;
		default: cout << "inne klasy sa niedostepne!"; break;
		}
	} while (klasa <= 1 && klasa >= 4);
	staty();
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
		cout << "\n\nwybierz glowna klase: \n1. wojownik\n2. strzelec\n3. truciciel\n4. demagog\n5. zwiadowca\nTwoj wybor: ";
		cin >> klasa;


		switch (klasa)
		{
		case 1: kwojownik(); break;
		case 2: kstrzelec(); break;
		case 3: ktruciciel(); break;
		case 4: kdemagog(); break;
		case 5: kzwiadowca(); break;
		default: cout << "inne klasy sa niedostepne!"; break;
		}
	} while (klasa <= 1 && klasa >= 4);

	int klasa2;
	do
	{
		st = 4;
		cout << "\n\nwybierz druga klase: \n1. wojownik\n2. strzelec\n3. truciciel\n4. demagog\n5. zwiadowca\nTwoj wybor: ";
		cin >> klasa;


		switch (klasa)
		{
		case 1: kwojownik(); break;
		case 2: kstrzelec(); break;
		case 3: ktruciciel(); break;
		case 4: kdemagog(); break;
		case 5: kzwiadowca(); break;
		default: cout << "inne klasy sa niedostepne!"; break;
		}
	} while (klasa <= 1 && klasa >= 4);
	staty();
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