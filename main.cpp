#include <iostream>
#include <string>
#include "Cezar.h"

using namespace std;

int main() {
	string word;
	cout << "Cezar Rot 13: " << endl;
	Cezar c = Cezar();

	cout << "Podaj ciag znakow do zaszyfrowania: ";
	cin >> word;

	cout << "Podany tekst:" << word << endl;
	word = c.szyfruj(word);
	cout << "Zaszyfrowany tekst: " << word << endl;

	word = c.deszyfruj(word);
	cout << "Rozszyfrowany tekst: " << word << endl;

	cout << "\n\n\n";
	system("pause");
	return 0;
}
