//
// Created by Артем on 1/31/2025.
//

#ifndef DYNAMICLINKING_COLLISIONHANDLER_H
#define DYNAMICLINKING_COLLISIONHANDLER_H

#include "physical_entities/PhysicalEntity.h"

class CollisionHandler {
    CollisionHandler() = default;

    bool handle_collision(PhysicalEntity &PE1, PhysicalEntity &PE2);

};


#endif //DYNAMICLINKING_COLLISIONHANDLER_H
