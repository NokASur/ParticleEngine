//
// Created by Артем on 2/2/2025.
//

#ifndef DYNAMICLINKING_GRAVITYSYSTEM_H
#define DYNAMICLINKING_GRAVITYSYSTEM_H

#include "physical_entities/PhysicalEntity.h"

class GravitySystem {
public:
    explicit GravitySystem(double g = 9.8);

    bool apply(PhysicalEntity &PE);

    double get_g_force() const;

private:
    double g;
};


#endif //DYNAMICLINKING_GRAVITYSYSTEM_H
