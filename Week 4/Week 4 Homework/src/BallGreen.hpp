//
//  BallGreen.hpp
//  Week 4 Homework
//
//  Created by Guilherme Coelho on 2/28/16.
//
//

#ifndef BallGreen_hpp
#define BallGreen_hpp

#include <stdio.h>

#pragma once                // another and more modern way to prevent the compiler from including this file more than once

#include "ofMain.h"
#include "Ball.hpp"            // we need to include the parent class, the compiler will include the mother/base class so we have access to all the methods inherited

class BallGreen : public Ball {     // we set the class to inherit from 'Ball'
public:
    virtual void draw();       // this is the only method we actually want to be different from the parent class
};

#endif /* BallGreen_hpp */
