#include "Grower.h"
#include "Gardener.h"
#include "FlowersBouquet.h"
#include "Person.h"

    Grower::Grower(Gardener* g,std::string name):Person(name){
        gardener = g;
    }
    std::string Grower::getName() {
        return "Grower " + Person::getName();
    }
    FlowersBouquet* Grower::prepareOrder(std::vector<std::string>& flowers) {
        std::cout << "forwards the request to "+gardener->getName()+ "." << std::endl;
        FlowersBouquet* f=gardener->prepareBouquet(flowers);
        std::cout << gardener->getName()+" returns flowers to " +getName()+ "." << std::endl;
        return f;
    }