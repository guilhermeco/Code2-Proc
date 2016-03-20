//
//  Ball.cpp
//  Week 4 Homework
//
//  Created by Guilherme Coelho on 2/28/16.
//
//

#include "Ball.hpp"

Ball::Ball(){
}

void Ball::setup(){
    
    x = ofGetWidth()*.5;
    y = ofGetHeight()*.5;
    dim = ofRandom(10,15);
    
    speedX = ofRandom(-1, 1);
    speedY = ofRandom(-1, 1);
    
    color.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void Ball::update(){
    if(x < 0 ){
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }
    
    x+=speedX;
    y+=speedY;
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(x, y, dim);
}
