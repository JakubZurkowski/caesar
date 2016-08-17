#include "Cezar.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Cezar::Cezar()
{
}


Cezar::~Cezar()
{
}


string Cezar::szyfruj(const string &in) {
	string out;
	//cout << "\n\nPo zaszyfrowaniu: " << endl;

	for (int i = 0; i < in.length(); i++) {
		if (in[i] + 13 > 'Z') out[i] =in[i] - 13;
		else out[i] = in[i] + 13;
		//cout << out[i] << endl;
	}
	return out;
}

string Cezar::deszyfruj(const string &in) {
	string out;

	//cout << "\n\nPo rozszyfrowaniu: " << endl;

	for (int i = 0; i < in.length(); i++) {
		if (in[i] - 13 > 'A') out[i] = in[i] + 13;
		else out[i] = in[i] - 13;
		//cout << out[i] << endl;
	}
	return out;
}
