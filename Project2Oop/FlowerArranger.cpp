#include "FlowerArranger.h"
#include "FlowersBouquet.h"
#include "Person.h"
#include <iostream>
FlowerArranger::FlowerArranger(std::string name) :Person(name) { }

    std::string FlowerArranger::getName() {
        return "Flower Arranger " + Person::getName();
    }


    void FlowerArranger::arrangeFlowers(FlowersBouquet* bouquet) {
        std::cout << getName() + " arranges flowers" + "." << std::endl;
        bouquet->arrange();
    }