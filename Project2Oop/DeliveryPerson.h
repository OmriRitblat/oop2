#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H
#include "Person.h"
#include <iostream>
#include "FlowersBouquet.h"
class DeliveryPerson : public Person {
public:

    DeliveryPerson(std::string name);

    std::string getName();

    void deliver(Person* recipient, FlowersBouquet* bouquet);
};
#endif