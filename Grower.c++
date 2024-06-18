class Grower {
public:
    Gardener gardener;

    FlowersBouquet* prepareOrder(const std::vector<std::string>& flowers) {
        std::cout << "Grower asking gardener to prepare flowers\n";
        return gardener.prepareBouquet(flowers);
    }
};