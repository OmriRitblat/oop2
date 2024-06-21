#ifndef FLOWERARRANGER_H
#define FLOWERARRANGER_H
#include "FlowersBouquet.h"
#include "Person.h"
#include <iostream>
class FlowerArranger : public Person {
public:

    FlowerArranger(std::string name);

    std::string getName();


    void arrangeFlowers(FlowersBouquet* bouquet);
};
#endif