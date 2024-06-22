#include "Wholesaler.h"
#include "Grower.h"
#include "FlowersBouquet.h"
#include <string>
#include <vector>
#include <iostream>
#include "Person.h"
    Wholesaler::Wholesaler(Grower* g, std::string name) :Person(name) {
        grower = g;
    }

    std::string Wholesaler::getName() {
        return "Wholesaler " + Person::getName();
    }
    
    FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string>& flowers) {
        std::cout << getName()+" forwards the request to "+grower->getName()+ "." << std::endl;
        FlowersBouquet* f=grower->prepareOrder(flowers);
        std::cout << grower->getName()+" returns flowers to "+getName()+ "." << std::endl;
        return f;
    }