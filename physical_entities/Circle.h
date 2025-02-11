//
// Created by Артем on 1/31/2025.
//

#ifndef DYNAMICLINKING_CIRCLE_H
#define DYNAMICLINKING_CIRCLE_H

#include "PhysicalEntity.h"

class Circle : PhysicalEntity {
public:
    Circle(std::pair<double, double> centre, double radius, std::pair<double, double> speed_vector = {0, 0});

    EntityTypes get_entity_type() override;

    std::pair<double, double> get_center() override;

    double get_center_y() override;

    double get_center_x() override;

    double get_radius() const;

protected:
    double radius;
};


#endif //DYNAMICLINKING_CIRCLE_H
