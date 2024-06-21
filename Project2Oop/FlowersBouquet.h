#ifndef FLOWERSBOUQUET_H
#define FLOWERSBOUQUET_H
#include <vector>
#include <string>
class FlowersBouquet {
public:
    std::vector<std::string> bouquet;
    bool is_arranged;

    FlowersBouquet(std::vector<std::string>& flowers);

    void arrange();
};
#endif
