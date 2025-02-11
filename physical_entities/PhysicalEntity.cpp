//
// Created by Артем on 1/31/2025.
//

#include "PhysicalEntity.h"

PhysicalEntity::PhysicalEntity(std::pair<double, double> centre, std::pair<double, double> speed_vector) {
    this->centre = centre;
    this->speed_vector = speed_vector;
}

EntityTypes PhysicalEntity::get_entity_type() {
    return PHYSICAL_ENTITY;
}

std::pair<double, double> PhysicalEntity::get_center() {
    return this->centre;
}

double PhysicalEntity::get_center_y() {
    return this->centre.first;
}

double PhysicalEntity::get_center_x() {
    return this->centre.second;
}

std::pair<double, double> PhysicalEntity::get_speed_vector() {
    return this->speed_vector;
}

double PhysicalEntity::get_speed_vector_y() {
    return this->speed_vector.first;
}

double PhysicalEntity::get_speed_vector_x() {
    return this->speed_vector.second;
}