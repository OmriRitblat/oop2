#include "Gardener.h"
#include "FlowersBouquet.cpp"
#include <iostream>
#include <vector>
class Gardener {
public:
    FlowersBouquet* prepareBouquet(std::vector<std::string> flowers) {
        std::cout << "Grower asking gardener to prepare flowers\n";
        FlowersBouquet* f = new FlowersBouquet(flowers);
        return f;
    }
};