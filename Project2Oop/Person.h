#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include <iostream>

class Florist;
class FlowersBouquet;

class Person {
private:
    std::string name;

public:
    Person(std::string n);
    virtual std::string getName();
    void orderFlowers(Florist* florist, Person* recipient, std::vector<std::string>& flowers);
    void acceptFlowers(FlowersBouquet* b);
};
#endif // !PERSON_H

