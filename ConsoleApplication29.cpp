// ConsoleApplication29.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include<map>

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

void wypisz(std::map<int, int>mapa)
{
	for (auto const& pair : mapa)
	{
		std::cout << pair.first << " :" << pair.second << "\n";
	}
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

bool CzyNalezyKlucz(std::map<int, int>m, int klucz)
{
	for (auto const& item : m)
	{
		if (item.first == klucz)
			return true;
	}
	return false;
}

int min(std::vector<int>tab)
{
	int wynik = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] < wynik)
		{
			wynik = tab[i];
		}
	}
	return wynik;
}

bool CzyZawiera(std::vector<int>tab, std::vector<int>podzbior)
{
	for (int i = 0; i < podzbior.size(); i++)
	{
		if (!CzyNalezy(tab, podzbior[i]))
		{
			return false;
		}
	}
	return true;
}

std::vector<int>unikalnosc(std::vector<int>tab)
{
	std::vector<int>wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!CzyNalezy(wynik,tab[i]))
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}

std::map<int, int>czestosc(std::vector<int>tab)
{
	std::map<int, int>wynik;
	{
		for (int i = 0; i < tab.size(); i++)
		{
			if (!CzyNalezyKlucz(wynik, tab[i]))
			{
				wynik.insert({ tab[i], 1 });
			}
			else
			{
				wynik[tab[i]]++;
			}
			
		}
	}
	return wynik;
}

bool Polindrom(std::vector<int>tab)
{
int koniec = tab.size() - 1;

	for (int i = 0; i < tab.size()/2; i++)
	{
		if (tab[i] != tab[koniec - i]);
		{
			return false;
		}
	}
	return true;
}

std::vector<int>podzielne(std::vector<int>tab, int dzielnik)
{
	std::vector<int>wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i]%dzielnik==0)
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}

std::vector<int>generuj(int n, int max=50, int min=0)
{
	std::vector<int>wynik;
	for (int i = 0; i < n; i++)
	{
		wynik.push_back(rand() % (max - min) + min);
	}
	return wynik;
}

int main()
{
	int w = 5;
	std::vector<int>tab = { 2,1,3,7,9,12,1,5 };
	wypisz(tab);
	std::cout << "\n";
	std::vector<int>tab2 = { 1,2,3 };
	wypisz(tab2);
	std::cout << "\n";
	if (CzyNalezy(tab, 1))
	{
		std::cout << "nalezy" << "\n";
	}
	else
	{
		std::cout << "nie nalezy" << "\n";
	}
	wypisz(min(tab));
	std::map<int, int>m;
	m.insert({ 8,4 });
	m.insert({ 3,7 });
	m.insert({ 1,2 });
	m.insert({ 3,4 });
	wypisz(czestosc(tab));
	wypisz(unikalnosc(tab));
	std::cout << "\n";

	if (Polindrom(tab))
	{
		std::cout << "jest polindromem" << "\n";
	}
	else
	{
		std::cout << "nie jest" << "\n";
	}
	wypisz(podzielne(tab, 3));
	srand(time(NULL));
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
