#include <iostream>
#include <string>
#include <stdio.h>
#include "Cezar.h"

using namespace std;

void czekajNaEnter()
{
    int c;
    cout << "Wcisnij ENTER by kontynuowac..." << endl << flush;
    do {c = getchar();  cout << "znak" << c;} while ((c != '\n') && (c != EOF));
}

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

    czekajNaEnter();
	return 0;
}
