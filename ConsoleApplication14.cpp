// ConsoleApplication14.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

void wypisz(int w)
{
	std::cout << w << "\n";
}

void wypisz(std::vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		std::cout << tab[i] << " ";
	}
	std::cout << "\n";
}

bool CzyNalezy(std::vector<int>tab, int element)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == element)
		{
			return true;
		}
	}
	return false;
}


bool CzyZawiera(vector<int>tab, vector<int>podzbior)
{
	for (int i = 0; i < podzbior.size(); i++)
	{
		if (!CzyNalezy(tab,podzbior[i]))
		{
			return false;
		}
	}
	return true;
}

int suma(int a, int b)
{
	return a + b;
}
int main()
{
	int x, y, i;
	x = 5;
	y = 3;
	i = 0;
	wypisz (suma(x, y));
	std::vector<int>tab = { 5,3,1 };
	wypisz(tab);
	std::cout << "\n";
	if (CzyNalezy(tab, 30))
	{
		std::cout << "nalezy" << "\n";
	}
	else
	{
		std::cout << "niestety nie nalezy" << "\n";
	}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
