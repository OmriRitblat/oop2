#include "Wholesaler.h"
#include "Grower.h"
#include "FlowersBouquet.cpp"
#include <iostream>
class Wholesaler {
public:
    Grower grower;

    FlowersBouquet* acceptOrder(const std::vector<std::string>& flowers) {
        std::cout << "Wholesaler forwarding order to grower\n";
        return grower.prepareOrder(flowers);
    }
};