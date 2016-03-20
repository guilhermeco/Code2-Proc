//
//  Class.hpp
//  Tree
//
//  Created by Guilherme Coelho on 3/7/16.
//
//

#ifndef Class_hpp
#define Class_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Class_hpp */

class Class : public ofBaseApp {
    
    
    //properties
    
    
    //constructor
    
    //methods
public:
    
    void setup(float _xPos, float _yPos, float _length, float _width, float _splitPercentage, float _maxSplitAngle, float _maxSubdivisions, float _maxSegments, float _segmentsSinceStart, float _angle, float _curvature, ofColor _color);
    
    
private:
    
    float xPos, yPos;
    float length, width;
    float splitPercentage;
    float maxSplitAngle;
    float maxSubdivisions;
    float maxSegments;
    float segmentsSinceStart;
    float angle, curvature;
    ofColor color;
    bool split;
    
};
