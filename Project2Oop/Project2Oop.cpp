// Project2Oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Gardener.h"
#include "Grower.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Florist.h"
#include "Person.h"
int main()
{
    Gardener* gar = new Gardener("Garett");
    Grower* grow = new Grower (gar,"Gray");
    Wholesaler* w = new Wholesaler(grow, "Watson");
    FlowerArranger* fr = new FlowerArranger("Flora");
    DeliveryPerson* dp = new DeliveryPerson("Dylen");
    Florist* fl = new Florist(w, fr, dp,"Fred");

    Person* chris = new Person("Chris");
    Person* robin = new Person("Robin");
    std::vector<std::string> flowers = { "Roses","Violets","Gladiolus" };
    chris->orderFlowers(fl, robin, flowers);
}
