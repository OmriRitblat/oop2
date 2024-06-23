#ifndef FLOWERSBOUQUET_H
#define FLOWERSBOUQUET_H
#include <vector>
#include <string>
class FlowersBouquet {
private:
    bool is_arranged;
public:
    std::vector<std::string> bouquet;
    FlowersBouquet(std::vector<std::string>& flowers);

    void arrange();
};
#endif
