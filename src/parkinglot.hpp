#ifndef __PARKINGLOT__
#define __PARKINGLOT__
#include "vehicle.hpp"
#include "spot.hpp"

/*! \class Parkinglot
 *  \brief Brief class description
 *
 *  Detailed description
 */
class Parkinglot
{
public:
    Parkinglot(int zipcode);
    Parkinglot(int zipcode,int truck_spots,int bus_spots,int car_spots,int motorcycle_spots);
    void setTruckSpots(int capacity);
    void setBusSpots(int capacity);
    void setCarSpots(int capacity);
    void setMotorcycleSpots(int capacity);
    Spot parkVehicle(Vehicle vehicle);
    virtual ~Parkinglot();

protected:
    int zipcode;
    int truck_spots;
    int bus_spots;
    int car_spots;
    int motorcycle_spots;
};

#endif /* ifndef __PARKINGLOT__ */
