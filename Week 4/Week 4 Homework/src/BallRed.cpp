//
//  BallRed.cpp
//  Week 4 Homework
//
//  Created by Guilherme Coelho on 2/28/16.
//
//

#include "BallRed.hpp"

void BallRed::draw(){
    ofSetColor(ofColor::red);    // this is a shortcut for full blue color ;)
    ofDrawCircle(x, y, dim);
}