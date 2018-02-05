//
//  Line.hpp
//  RobotCollisionAvoidance
//
//  Created by Elie Drai on 05/02/2018.
//  Copyright © 2018 Elie Drai. All rights reserved.
//

#ifndef Line_hpp
#define Line_hpp

#include <stdio.h>
#include <iostream>
#include "Vector.hpp"
using namespace std;

class Line
{
protected:
    //  FIELDS
    Vector direction;
    Vector point;
    
public:
    //  Properties
    Vector Point() { return point; }
    Vector Direction() { return direction; }
    double Slope() { return direction.Y()/ direction.X();}
    double Y_Intercept() { return Point().Y() - Slope()*Point().X(); }
    /////////////////////////////
    
    //  Constructors
    Line(Vector d = Vector::UnitX(), Vector p = Vector::Null())
        : direction(d.Unit()), point(p.Unit()) {}
    Line(const Line& l) : Line(l.direction, l.point) {}
    ~Line() {}
    /////////////////////////////

    //  Methods
    /////////////////////////////

    //  Static methods
    static bool AreParallels(const Line& l, const Line& m)
    { return Vector::Collinears(l.direction, m.direction); }
    static Vector IntersectionPoint(Line l, Line m);
    static double AngleBetween(Line l, Line m)
    { return Vector::AngleBetween(l.direction, m.direction); }
    /////////////////////////////
    
    //  Operators
    bool operator==(Line l) { return (l.Slope() == Slope() && l.Y_Intercept() == Y_Intercept()); }
    /////////////////////////////


};

#endif /* Line_hpp */
