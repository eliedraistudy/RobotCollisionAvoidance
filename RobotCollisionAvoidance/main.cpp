//
//  main.cpp
//  RobotCollisionAvoidance
//
//  Created by Elie Drai on 05/02/2018.
//  Copyright © 2018 Elie Drai. All rights reserved.
//

#include <iostream>
#include "Vector.hpp"

int main(int argc, const char * argv[])
{
    Vector v(1, 2);
    Vector w, x(2, 3);
    
    v.Print();
    cout << endl;
    w.Print();
    cout << endl;
    x.Print();
    return 0;
}
