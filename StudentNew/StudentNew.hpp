#pragma once
#include<string>

class Adress 
{public:
	std::string street={};
	int noOfStreet=0;

	Adress(std::string street, int noOfStreet);
	Adress();
};
class Student
{
	std::string name ={};
	Adress adress;
	const int yearOfBirth=0;
public:
	
	Student(std::string name, Adress adress, const int _yearOfBirth);
	std::string getName();
	int getyearOfBirth();
	std::string getPrefferedLanguage() const;
};