#include "PacjentDoktor.hpp"


void Doktor::setName(std::string name)
{
	this->name = name;
}



void Doktor::receiveEmail()
{
	std::cout << "dr Judym-jutro wypisze recepte " << std::endl;
}

void Doktor::receiveEmail2()
{
	std::cout << "dr Judym-zycze zdrowia " << std::endl;
}


void Pacjent::setName(std::string name)
{
	this->name = name;
}

void Pacjent::setDoktor(Doktor* doktor)
{
	this->doktor = doktor;
}

void Pacjent::sendEmailToDoktor()
{
	std::cout << "Julka-potrzebuje recepty " << std::endl;
}

void Pacjent::sendEmailToDoktor2()
{
	std::cout << "Julka-dziekuje " << std::endl;
}
