#include "Person.h"
#include <string>
#include <string>
#include <vector>
#include "FlowersBouquet.cpp"
#include <iostream>
#include "florist.h"
class Person
{
private:
    std::string name;

public:
    Person(std::string n) : name(n) {}
    std::string getName() {
        return name;
    }
    void orderFlowers(class Florist* florist, Person* recipient, std::vector<std::string> flowers) {
        std::cout << name + "order flowers to" + recipient->getName() + "from florist " + florist->getName();
        florist->acceptOrder(recipient, flowers);
    }
    void acceptFlowers(FlowersBouquet* bouquet)
    {
        for (size_t i = 0; i < bouquet->bouquet.size(); ++i) {
            std::cout << bouquet->bouquet[i]+", ";
        }
        std::cout <<"" << std::endl;
    }
};