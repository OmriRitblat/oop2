#define FLORIST_H
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"

class Florist : public Person {
public:
    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;

    Florist(Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson, std::string name);
    void acceptOrder(Person* recipient,std::vector<std::string>& flowers);
    std::string getName();

};
