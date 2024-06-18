class Florist {
public:
    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;

    Florist(Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson)
        : wholesaler(wholesaler), flowerArranger(flowerArranger), deliveryPerson(deliveryPerson) {}

    void acceptOrder(Person* recipient, const std::vector<std::string>& flowers) {
        std::cout << "Florist accepting order\n";
        FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);
        flowerArranger->arrangeFlowers(bouquet);
        deliveryPerson->deliver(recipient, bouquet);
    }
};

void Person::orderFlowers(Florist* florist, Person* recipient, const std::vector<std::string>& flowers) {
    std::cout << name << " is ordering flowers\n";
    florist->acceptOrder(recipient, flowers);
}

void Person::acceptFlowers(FlowersBouquet* bouquet) {
    std::cout << name << " received flowers\n";
    if (bouquet->is_arranged) {
        std::cout << "The flowers are beautifully arranged!\n";
    }
    else {
        std::cout << "The flowers are not arranged yet!\n";
    }
}