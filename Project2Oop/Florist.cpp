
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Florist.h"
#include <string>
#include <vector>
#include "Person.h"
#include "FlowerArranger.h"
#include <iostream>
#include "FlowersBouquet.h"
#include "DeliveryPerson.h"

    Florist::Florist(Wholesaler* w, FlowerArranger* f, DeliveryPerson* d, std::string name):Person(name) {
        wholesaler = w;
        flowerArranger = f;
        deliveryPerson = d;
    }

    std::string Florist::getName() {
        return "Florist " + Person::getName();
    }

    void Florist::acceptOrder(Person* recipient, std::vector<std::string>& flowers) {
        std::cout << getName()+" forwards request to "+ wholesaler->getName()+"." << std::endl;
        FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);
        std::cout << wholesaler->getName()+" returns flowers to " +getName()+"." << std::endl;
        std::cout << getName() + " request flowers arrangement from " + flowerArranger->getName()+"." << std::endl;
        flowerArranger->arrangeFlowers(bouquet);
        std::cout << flowerArranger->getName() + " returns arranged flowers to "+getName() + "." << std::endl;
        std::cout << getName() + " fowards flowers to " + deliveryPerson->getName()+ "." << std::endl;
        deliveryPerson->deliver(recipient, bouquet);
    }
