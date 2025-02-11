//
// Created by Артем on 2/2/2025.
//

#include "GravitySystem.h"

GravitySystem::GravitySystem(double g) {
    this->g = g;
}

double GravitySystem::get_g_force() const {
    return this->g;
}

bool GravitySystem::apply(PhysicalEntity &PE) {


    return true;
}
