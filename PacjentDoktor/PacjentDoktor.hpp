#pragma once
#include <string>
#include<iostream>

class Pacjent;
class Doktor
{
	Pacjent& pacjent;
	std::string name;
public:
	void setName(std::string name);
	Doktor(Pacjent& pacjent):pacjent(pacjent){};
	void receiveEmail();
	void receiveEmail2();


};
class Pacjent
{
	Doktor* doktor=nullptr;
	std::string name;
public:
	void setName(std::string name);
	void setDoktor(Doktor* doktor);
	void sendEmailToDoktor();
	void sendEmailToDoktor2();
};