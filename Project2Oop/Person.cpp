

#include "Person.h"
#include <string>
#include <vector>
#include <iostream>
#include "FlowersBouquet.h"
#include "Florist.h"

    Person::Person(std::string n) : name(n) {}
    std::string Person::getName() {
        return name;
    }
    void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string>& flowers) {
        std::cout << name + " orders flowers to " + recipient->getName() + " from " + florist->getName();
        std::cout << ": ";
        for (size_t i = 0; i < flowers.size(); i++) {
            if (i != flowers.size() - 1)
                std::cout << flowers[i] + ", ";
            else
                std::cout << flowers[i] + "." << std::endl;

        }
        florist->acceptOrder(recipient, flowers);
    }
    void Person::acceptFlowers(FlowersBouquet* b)
    {
        std::cout << name + " accepts the flowers: ";
        for (size_t i = 0; i < b->bouquet.size(); i++) {
            if(i!= b->bouquet.size()-1)
                std::cout << b->bouquet[i]+", ";
            else
                std::cout << b->bouquet[i];
        }
        std::cout <<"." << std::endl;
    }
