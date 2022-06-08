
#include <iostream>
#include "StudentNew.hpp"

int main()
{
    Adress adress("Zielna", 5);
    Student first("Zuzia", adress,2001);
    Student second("Janek", adress,1955);
    std::cout << "student " << first.getName() << " adres " << adress.street << " " << adress.noOfStreet << " rok ur." << first.getyearOfBirth()<<" " << first.getPrefferedLanguage() << std::endl;
    std::cout << "student " << second.getName() << " adres " << adress.street << " " << adress.noOfStreet <<" rok ur." << second.getyearOfBirth()<<" " << second.getPrefferedLanguage() << std::endl;


}
