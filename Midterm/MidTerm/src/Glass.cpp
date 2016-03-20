//
//  Glass.cpp
//  MidTerm
//
//  Created by Guilherme Coelho on 3/5/16.
//
//

#include "Glass.hpp"

Glass::Glass(){
    
}

    void Glass:: setup(){
        
        radius = 0;
        increment = 5;
        
    }
    
    void Glass:: draw(float radius, float xPos, float yPos, float increment){
        
        ofSetLineWidth(ofRandom(1, 3));
        ofNoFill();
        ofSetColor(0, 50);
        ofDrawCircle(xPos, yPos, radius);
        
        ofDrawCircle(xPos + increment, yPos + increment, radius);
        ofDrawCircle(xPos - increment, yPos - increment, radius);
        ofDrawCircle(xPos + increment, yPos - increment, radius);
        ofDrawCircle(xPos - increment, yPos + increment, radius);

        
        
    }