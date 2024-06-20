#include "FlowerBouquet.h"
#include <vector>
#include <string>
class FlowersBouquet {
public:
    std::vector<std::string> bouquet;
    bool is_arranged;

    FlowersBouquet(const std::vector<std::string>& flowers) : bouquet(flowers), is_arranged(false) {}

    void arrange() {
        is_arranged = true;
    }
};