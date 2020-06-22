#ifndef __PARKINGSPOT
#define __PARKINGSPOT

#include "enums.hpp"

/*! \class Spot
 *  \Representation of a Parking Spot
 *
 *  Detailed description
 */
class Spot
{
public:
    Spot(long id=0,int level=0);
    virtual ~Spot();

protected:
    long id;
    int level=0;
    Size size;
};
#endif /* ifndef __PARKINGSPOT */
