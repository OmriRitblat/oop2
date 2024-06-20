#include "FlowerArranger.h"
#include "FlowersBouquet.cpp"
#include <iostream>
class FlowerArranger {
public:
    void arrangeFlowers(FlowersBouquet* bouquet) {
        std::cout << "Flower Arranger arranging flowers\n";
        bouquet->arrange();
    }
};