//
//  Ball.hpp
//  Week 4 Homework
//
//  Created by Guilherme Coelho on 2/28/16.
//
//

#ifndef Ball_hpp
#define Ball_hpp

#include <stdio.h>
#include <ofMain.h>

class Ball {
public: // place public functions or variables declarations here
    
    void setup();
    void update();
    void draw();
    
    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int dim;
    
    ofColor color;
    
    Ball();
    
private:
};


#endif /* Ball_hpp */
