
#include "car.hpp"  
#include<iostream>
  int Car::idNumber = 0;

Car::Car(std::string brand)
{
	this->brand = brand;
}

int Car::getIdNumber()
{
	return idNumber;
}
Car::Car()
{
	idNumber++;

}

void Car::printCar()
{
	std::cout << idNumber<< " " << brand << std::endl;
}







