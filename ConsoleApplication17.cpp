// ConsoleApplication17.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <vector>


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
}

bool czynalezy(std::vector<int>tab, int element)
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

bool czyzawiera(std::vector<int>tab, std::vector<int>podzbior)
{
	for (int i = 0; i < podzbior.size(); i++)
	{
		if (!czynalezy(tab, podzbior[i]))
		{
			return false;
		}
	}
	return true;
}

int Min(std::vector<int>tab)
{
	int m = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] < m)
		{
			m = tab[i];
		}
	}
	return m;
}

int Max(std::vector<int>tab)
{
	int m = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] > m)
		{
			m = tab[i];
		}
	}
	return m;
}


int suma(int a, int b)
{
	return a + b;
}
int main()
{
	int x, y, z;
	x = 5;
	y = 3;
	z = 1;
	wypisz(suma(x, y));
	std::cout << "\n";
	std::vector<int>tab = { 1,2,3,5,7,8,9,11,2137 };
	wypisz(tab);
	std::cout << "\n";
	std::vector<int>podzbior = { 5,3 };
	wypisz(podzbior);
	std::cout << "\n";
	if (czynalezy(tab, 5))
	{
		std::cout << "nalezy" << "\n";
	}
	else
	{
		std::cout << "nie nalezy" << "\n";
	}
	if (czyzawiera(tab, podzbior))
	{
		std::cout << " zawiera " << "\n";
	}
	else
	{
		std::cout << " nie zawiera" << "\n";
	}
	wypisz(Min(tab));
	wypisz(Max(tab));
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
