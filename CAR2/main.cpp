
#include "car.hpp"  
#include<iostream>

int main()
{
    Car car1("opel");
    Car car2("audi");
    Car car3("fiat");
    Car car4("toyota");

    car1.printCar();
    car2.printCar();
    car3.printCar();
    car4.printCar();

    std::cout << car3.getIdNumber();//testowo ale te¿ nie dzia³a
}