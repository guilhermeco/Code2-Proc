//
//  Glass.hpp
//  MidTerm
//
//  Created by Guilherme Coelho on 3/5/16.
//
//

#ifndef Glass_hpp
#define Glass_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Glass_hpp */

class Glass{
public:
    
    //properties
    float radius;
    float increment;
    
    //constructor
    Glass();
    
    //methods
    void setup();
    void draw(float radius, float xPos, float yPos, float increment);
    
    
};
