#pragma once
#include<string>
class Car
{
	std::string brand;
	static int idNumber;;
public:
	Car(std::string brand);
	int getIdNumber();
	Car();
	void printCar();
	
};