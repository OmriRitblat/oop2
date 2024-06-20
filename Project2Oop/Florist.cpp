#include "Wholesaler.cpp"
#include "FlowerArranger.cpp"
#include "DeliveryPerson.cpp"
#include "Florist.h"
class Florist {
private:
    std::string name;
public:
    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;
    std::string getName() {
        return name;
    }

    Florist(Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson)
        : wholesaler(wholesaler), flowerArranger(flowerArranger), deliveryPerson(deliveryPerson) {}

    void acceptOrder(Person* recipient, const std::vector<std::string>& flowers) {
        std::cout << "Florist accepting order\n";
        FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);
        flowerArranger->arrangeFlowers(bouquet);
        deliveryPerson->deliver(recipient, bouquet);
    }
};