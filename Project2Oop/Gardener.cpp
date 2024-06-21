#include "Gardener.h"
#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
#include "Person.h"

    Gardener::Gardener(std::string name) :Person(name) {}

    std::string Gardener::getName() {
        return "Gardener " + Person::getName();
    }

    FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers) {
        std::cout << getName()+" prepares flowers""." << std::endl;
        FlowersBouquet* f = new FlowersBouquet(flowers);
        return f;
    }