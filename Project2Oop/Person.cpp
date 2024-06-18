class Person
{
public:
    std::string name;

    Person(std::string n) : name(n) {}

    void orderFlowers(class Florist* florist, Person* recipient, std::vector<std::string> flowers);
    void acceptFlowers(FlowersBouquet* bouquet)
    {
        std::cout << name << " received flowers." << std::endl;
    }
}