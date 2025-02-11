//
// Created by Артем on 1/31/2025.
//

#include "CollisionHandler.h"
#include "physical_entities/Circle.h"

bool CollisionHandler::handle_collision(PhysicalEntity &PE1, PhysicalEntity &PE2) {
    bool res = false;

    EntityTypes T1 = PE1.get_entity_type(), T2 = PE2.get_entity_type();

    /*
     * Transforming to the unique non-decreasing form of our pair of entity types
     */
    if (T1 > T2) {
        std::swap(T1, T2);
        std::swap(PE1, PE2);
    }

    switch (T1) {
        case CIRCLE:
            switch (T2) {
                case CIRCLE: {

                    auto C1 = dynamic_cast<Circle &>(PE1);
                    auto C2 = dynamic_cast<Circle &>(PE2);

                    double y_dist = C1.get_center_y() + C2.get_center_y();
                    double x_dist = C1.get_center_x() + C2.get_center_x();
                    double radius_sum = C1.get_radius() + C2.get_radius();
                    double distance = y_dist * y_dist + x_dist * x_dist;

                    if (radius_sum * radius_sum >= distance) {
                        std::cerr << "Circle on circle collision detected.\n";
                        return true;
                    }
                    break;
                }

                case RECTANGLE:
                    break;
                case PHYSICAL_ENTITY:
                    break;
                default:
                    break;
            }
        case RECTANGLE:;
            switch (T2) {
                case RECTANGLE:
                    break;
                case PHYSICAL_ENTITY:
                    break;
                default:
                    break;
            }
        case PHYSICAL_ENTITY:
            break;
        default:;
    }


    return res;
}
