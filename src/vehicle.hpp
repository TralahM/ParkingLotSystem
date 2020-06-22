#ifndef __VEHICLE
#define __VEHICLE
#include <string>
#include "enums.hpp"

/*! \class Vehicle
 *  \brief Brief class description
 *
 *  Detailed description
 */
class Vehicle
{
public:
    std::string license_plate; /*!< Member description */
    Color color;
    Size size;
    Vehicle(const std::string& plate,Color color):license_plate{plate},color{color}{}
    ~Vehicle(){}

};
#endif /* ifndef __VEHICLE */
