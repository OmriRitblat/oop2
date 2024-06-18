#include "Person.cpp"
#include "FlowersBouquet.cpp"
#include <iostream>
class DeliveryPerson {
public:
    void deliver(Person* recipient, FlowersBouquet* bouquet) {
        std::cout << "Delivery Person delivering flowers to " << recipient->name << "\n";
        recipient->acceptFlowers(bouquet);
    }
};