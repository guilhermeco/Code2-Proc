//
//  BallBlue.cpp
//  Week 4 Homework
//
//  Created by Guilherme Coelho on 2/28/16.
//
//

#include "BallBlue.hpp"

void BallBlue::draw(){
    ofSetColor(ofColor::blue);    // this is a shortcut for full blue color ;)
    ofDrawCircle(x, y, dim);
}
