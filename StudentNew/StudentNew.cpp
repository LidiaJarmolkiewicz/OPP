#include "StudentNew.hpp"
Adress::Adress(std::string street, int noOfStreet)
{
	this->street = street;
	this->noOfStreet = noOfStreet;
}
Adress::Adress()
{

}
Student::Student(std::string name, Adress adress, const int _yearOfBirth): yearOfBirth(_yearOfBirth)
{
	this->name = name;
	this->adress = adress;
	
}

std::string Student::getName()
{
	return name;
}

int Student::getyearOfBirth()
{
	return yearOfBirth;
}

std::string Student::getPrefferedLanguage() const
{
	if (yearOfBirth < 1970)
	{
	return "preferowany jezyk rosyjski";
	}
	else
	{
		return "preferowany jezyk angielski";
	}
	
}
