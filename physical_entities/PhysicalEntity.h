//
// Created by Артем on 1/31/2025.
//

#ifndef DYNAMICLINKING_PHYSICALENTITY_H
#define DYNAMICLINKING_PHYSICALENTITY_H

#include <iostream>

enum EntityTypes {
    PHYSICAL_ENTITY,
    CIRCLE,
    RECTANGLE,
};

class PhysicalEntity {
public:
    explicit PhysicalEntity(std::pair<double, double> centre, std::pair<double, double> speed_vector = {0, 0});

    virtual ~PhysicalEntity() = default;

    virtual EntityTypes get_entity_type();

    virtual std::pair<double, double> get_center();

    virtual double get_center_y();

    virtual double get_center_x();

    virtual std::pair<double,double> get_speed_vector();

    virtual double get_speed_vector_y();

    virtual double get_speed_vector_x();

protected:
    std::pair<double, double> centre, speed_vector;
};


#endif //DYNAMICLINKING_PHYSICALENTITY_H
