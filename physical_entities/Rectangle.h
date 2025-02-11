//
// Created by Артем on 1/31/2025.
//

#ifndef DYNAMICLINKING_RECTANGLE_H
#define DYNAMICLINKING_RECTANGLE_H

#include "PhysicalEntity.h"

class Rectangle : PhysicalEntity {
public:
    Rectangle(std::pair<double, double> centre, double size_y, double size_x,
              std::pair<double, double> speed_vector = {0, 0});

    EntityTypes get_entity_type() override;

    std::pair<double, double> get_center() override;

    double get_center_y() override;

    double get_center_x() override;

protected:
    double size_y, size_x;
};


#endif //DYNAMICLINKING_RECTANGLE_H
