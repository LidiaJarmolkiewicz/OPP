
#include "car.hpp"  
#include<iostream>
  int Car::idNumber = 1;

Car::Car(std::string brand)
{
	this->brand = brand;
	std::cout << idNumber <<" "<< brand << std::endl;
	idNumber++;
}

int Car::getIdNumber()
{
	return idNumber;
}







