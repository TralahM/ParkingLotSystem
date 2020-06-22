#ifndef __CAR
#define __CAR

#include "vehicle.hpp"

/*! \class Car : public Vehicle
 *  \brief Brief class description
 *
 *  Detailed description
 */
class Car : public Vehicle
{
public:
    Car(const std::string& plate, Color color):Vehicle{plate,color}{}
    ~Car(){}

protected:
    Size size=M;
};
#endif /* ifndef __CAR */
