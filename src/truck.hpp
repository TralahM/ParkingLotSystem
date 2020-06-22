#ifndef __TRUCK
#define __TRUCK
#include "vehicle.hpp"

/*! \class Truck : public Vehicle
 *  \brief Brief class description
 *
 *  Detailed description
 */
class Truck : public Vehicle
{
public:
    Truck(const std::string& plate, Color color):Vehicle{plate,color}{}
    ~Truck(){}

protected:
    Size size=XL;
};
#endif /* ifndef __TRUCK */
