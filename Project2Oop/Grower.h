#ifndef GROWER_H
#define GROWER_H
#include "Gardener.h"
#include "FlowersBouquet.h"
#include "Person.h"
class Grower : public Person {
public:
    Gardener* gardener;

    Grower(Gardener* g, std::string name);

    std::string getName();
    FlowersBouquet* prepareOrder(std::vector<std::string>& flowers);
};
#endif