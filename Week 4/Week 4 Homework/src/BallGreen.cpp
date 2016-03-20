//
//  BallGreen.cpp
//  Week 4 Homework
//
//  Created by Guilherme Coelho on 2/28/16.
//
//

#include "BallGreen.hpp"

void BallGreen::draw(){
    ofSetColor(ofColor::green);    // this is a shortcut for full blue color ;)
    ofDrawCircle(x, y, dim);
}