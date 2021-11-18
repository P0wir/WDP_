// ConsoleApplication21.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
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

int suma(int a, int b)
{
	return a + b;
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
		if(!czynalezy(tab, podzbior[i]))
		{
			return false;
		}
	}
	return true;
}

int Min(std::vector<int>tab)
{
	int m=tab[0];
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

std::vector<int> Unique(std::vector<int>tab)
{
	std::vector<int>wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!czynalezy(wynik, tab[i]))
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;

}

int main()
{
	int x, y, z;
	x = 1;
	y = 2;
	z = 3;
	wypisz(suma(x, y));
	std::vector<int>tab = { 1,2,3,4,5,2,3,1,5,2,7,1,3,6,7,1,2};
	wypisz(tab);
	std::cout << "\n";
	std::vector<int>podzbior = { 1,2,3 };
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
		std::cout << "zawiera" << "\n";
	}
	else
	{
		std::cout << "nie zawiera" << "\n";
	}
	wypisz(Min(tab));
	wypisz(Unique(tab));
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
