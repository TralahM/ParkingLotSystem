#include <iostream>
#include "vehicle.hpp"
#include "car.hpp"
#include "bus.hpp"
#include "motorcycle.hpp"
#include "truck.hpp"

int main(int argc, char *argv[])
{
    const Car benz{"KAK542T",Blue};
    const Truck canter{"KAK542T",White};
    std::cout<<"Car with plate: "<<benz.license_plate<<" Color: "<<benz.color<<std::endl;
    std::cout<<"Truck with plate: "<<canter.license_plate<<" Color: "<<canter.color<<std::endl;
    return 0;
}
