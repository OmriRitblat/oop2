class Gardener {
public:
    FlowersBouquet* prepareBouquet(const std::vector<std::string>& flowers) {
        std::cout << "Gardener preparing flowers\n";
        return new FlowersBouquet(flowers);
    }
};