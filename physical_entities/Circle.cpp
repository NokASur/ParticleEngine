//
// Created by Артем on 1/31/2025.
//

#include "Circle.h"


Circle::Circle(std::pair<double, double> centre, double radius, std::pair<double, double> speed_vector)
        : PhysicalEntity(centre, speed_vector) {
    this->radius = radius;
}


EntityTypes Circle::get_entity_type() {
    return CIRCLE;
}

double Circle::get_radius() const {
    return this->radius;
}

std::pair<double, double> Circle::get_center() {
    return PhysicalEntity::get_center();
}

double Circle::get_center_y() {
    return PhysicalEntity::get_center_y();
}

double Circle::get_center_x() {
    return PhysicalEntity::get_center_x();
}
