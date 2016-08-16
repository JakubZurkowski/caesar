#include "Cezar.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

Cezar::Cezar()
{
	start();
}


Cezar::~Cezar()
{
}

void Cezar::start() {
	char tab[500];

	cout << "Wpisz ciag znakow: " << endl;
	cin >> tab;

	szyfruj(tab);
	deszyfruj(tab);
}

void Cezar::szyfruj(char tab[]) {
	int dlugosc = strlen(tab);

	cout << "\n\nPo zaszyfrowaniu: " << endl;

	for (int i = 0; i < dlugosc; i++) {
		if (tab[i] + 13 > 'Z') tab[i] -= 13;
		else tab[i] += 13;
		cout << tab[i];
	}
}

void Cezar::deszyfruj(char tab[]) {
	int dlugosc = strlen(tab);

	cout << "\n\nPo rozszyfrowaniu: " << endl;

	for (int i = 0; i < dlugosc; i++) {
		if (tab[i] - 13 > 'A') tab[i] += 13;
		else tab[i] -= 13;
		cout << tab[i];
	}
}
