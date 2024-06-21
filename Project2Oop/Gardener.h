#ifndef Gardener_H
#define Gardener_H
#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
#include "Person.h"
class Gardener : public Person {
public:
    Gardener(std::string name);
    std::string getName();
    FlowersBouquet* prepareBouquet(std::vector<std::string> flowers);
};
#endif