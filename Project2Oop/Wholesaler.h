#ifndef WHOLESALER_H
#define WHOLESALER_H
#include "Grower.h"
#include "FlowersBouquet.h"
#include <string>
#include <vector>
#include <iostream>
#include "Person.h"
class Wholesaler : public Person {
private: 
    Grower* grower;
public:
    Wholesaler(Grower* g, std::string name);
    std::string getName();
    FlowersBouquet* acceptOrder(std::vector<std::string>& flowers);
};
#endif