//
//  Line.cpp
//  RobotCollisionAvoidance
//
//  Created by Elie Drai on 05/02/2018.
//  Copyright © 2018 Elie Drai. All rights reserved.
//

#include "Line.hpp"

Vector Line::IntersectionPoint(Line l, Line m)
{
    if(AreParallels(l, m)) throw "ERROR, parallels lines - no intersection point";
    double x = (l.Y_Intercept() - m.Y_Intercept())/(m.Slope() - l.Slope());
    double y = l.Slope() * x + l.Y_Intercept();
    return Vector(x, y);
}
