//
// Created by Артем on 1/31/2025.
//

#include "Rectangle.h"

Rectangle::Rectangle(std::pair<double, double> centre, double size_y, double size_x,
                     std::pair<double, double> speed_vector) : PhysicalEntity(centre, speed_vector) {
    this->size_y = size_y;
    this->size_x = size_x;
}

EntityTypes Rectangle::get_entity_type() {
    return RECTANGLE;
}

std::pair<double, double> Rectangle::get_center() {
    return PhysicalEntity::get_center();
}

double Rectangle::get_center_y() {
    return PhysicalEntity::get_center_y();
}

double Rectangle::get_center_x() {
    return PhysicalEntity::get_center_x();
}
