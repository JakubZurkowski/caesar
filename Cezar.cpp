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
    string out = "" ;
    out.reserve(in.length());
    int length = in.length();
    for (int i = 0; i < length; i++) {

        if (in[i] + 13 > 'Z') out += (in[i] - 13);
        else out += (in[i]+13);
        cout << out[i] << endl;
    }
    return out;
}

string Cezar::deszyfruj(const string &in) {
    string out="";

    int lenght = in.length();
    for (int i = 0; i < lenght; i++) {
        if (in[i] - 13 > 'A') out += (in[i] + 13);
        else out += (in[i] - 13);
    }
    return out;
}
