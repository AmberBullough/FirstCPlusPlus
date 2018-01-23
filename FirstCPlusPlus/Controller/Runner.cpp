//
//  Runner.cpp
//  FirstCPlusPlus
//
//  Created by Bullough, Amber on 1/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "iostream"
#include "Controller.hpp"

int main()
{
    //Controller app;
    //app.start();
    //Another way to do above :::::
    Controller * app = new Controller();
    //Dereference pointer
    
    (*app).start();
    // Pointer
    
    app ->start();
    //Pointer selector faster
    
    return 0;
}
