#include <string>
#include <vector>
#include "FlowerBouquet.h"

    FlowersBouquet::FlowersBouquet(std::vector<std::string>& flowers){
        bouquet = flowers;
        is_arranged = false;
    }

    void FlowersBouquet::arrange() {
        is_arranged = true;
    }