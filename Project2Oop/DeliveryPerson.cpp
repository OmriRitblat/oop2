#include "Person.h"
#include <iostream>
#include "DeliveryPerson.h"
#include "FlowersBouquet.h"

    DeliveryPerson::DeliveryPerson(std::string name) :Person(name) { }

    std::string DeliveryPerson::getName() {
        return "Delivery Person " + Person::getName();
    }

    void DeliveryPerson::deliver(Person* recipient, FlowersBouquet* bouquet) {
        std::cout << getName()+" deliveres flowers "+recipient->getName()+"." << std::endl;
        recipient->acceptFlowers(bouquet);}