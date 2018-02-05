//
//  SemiLine.hpp
//  RobotCollisionAvoidance
//
//  Created by Elie Drai on 05/02/2018.
//  Copyright © 2018 Elie Drai. All rights reserved.
//

#ifndef SemiLine_hpp
#define SemiLine_hpp

#include <stdio.h>
#include "Line.hpp"
using namespace std;

class SemiLine : public Line
{
public:
    //  Constructor
    SemiLine(Vector d = Vector::UnitX(), Vector p = Vector::Null()) : Line(d, p) {}
    SemiLine(const SemiLine& s) : SemiLine(s.direction, s.point) {}
    
    //  Methods
    
};

#endif /* SemiLine_hpp */
