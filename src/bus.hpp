#ifndef __BUS
#define __BUS
#include "vehicle.hpp"

/*! \class Bus : public Vehicle
 *  \brief Brief class description
 *
 *  Detailed description
 */
class Bus : public Vehicle
{
public:
    Bus(const std::string& plate, Color color):Vehicle{plate,color}{}
    ~Bus(){}
protected:
    Size size=L;

};
#endif /* ifndef __BUS */
