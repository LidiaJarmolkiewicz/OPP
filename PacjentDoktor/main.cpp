#include"PacjentDoktor.hpp"
#include <iostream>

int main()
{
	Pacjent Julka;
	Doktor Judym( Julka);
	Julka.sendEmailToDoktor();
	Judym.receiveEmail();
	Julka.sendEmailToDoktor2();
	Judym.receiveEmail2();
}