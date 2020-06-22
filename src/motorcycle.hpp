#ifndef __MOTORCYCLE
#define __MOTORCYCLE
#include "vehicle.hpp"

/*! \class Motorcycle : public Vehicle
 *  \brief Brief class description
 *
 *  Detailed description
 */
class Motorcycle : public Vehicle
{
public:
    Motorcycle(const std::string& plate, Color color):Vehicle{plate,color}{}
    ~Motorcycle(){}

protected:
    Size size=S;
};
#endif /* ifndef __MOTORCYCLE */
