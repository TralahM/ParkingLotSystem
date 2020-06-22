#include "parkinglot.hpp"

Parkinglot::Parkinglot(int zipcode){
    zipcode=zipcode;
}
Parkinglot::Parkinglot(int zipcode,int truck_spots=0,int bus_spots=0,int car_spots=0,int motorcycle_spots=0){
    zipcode=zipcode;
    truck_spots=truck_spots;
    bus_spots=bus_spots;
    car_spots=car_spots;
    motorcycle_spots=motorcycle_spots;
}
void Parkinglot::setTruckSpots(int capacity){
    truck_spots=capacity;
}
void Parkinglot::setBusSpots(int capacity){
    bus_spots=capacity;
}
void Parkinglot::setCarSpots(int capacity){
    car_spots=capacity;
}
void Parkinglot::setMotorcycleSpots(int capacity){
    motorcycle_spots=capacity;
}
Spot Parkinglot::parkVehicle(Vehicle vehicle){
    //TODO
    //Get Available spots of that size
    //Store in Hashmap the vehicle with spot value
    //Remove Spot from available spots
    Spot spot;
    return spot;
}
