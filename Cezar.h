#pragma once

#include <string>

class Cezar
{
public:
	Cezar();
	~Cezar();
    std::string szyfruj(const std::string &in);
    std::string deszyfruj(const std::string &in);
};

