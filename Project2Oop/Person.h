#pragma once
#include <string>
class Person
{
public:
    std::string name;
    Person(std::string n) : name(n) {}
    std:: string getName();
    void orderFlowers(class Florist* florist, Person* recipient, std::vector<std::string> flowers);
    void acceptFlowers(FlowersBouquet* bouquet);
};

