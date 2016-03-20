#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    Tall.height = 400;
    Tall.width = 100;
    Tall.r = 35;
    Tall.g = 31;
    Tall.b = 32;
    
    Short.height = 200;
    Short.width = 100;
    Short.r = 109;
    Short.g = 110;
    Short.b = 113;
    
    Medium.height = 300;
    Medium.width = 100;
    Medium.r = 88;
    Medium.g = 89;
    Medium.b = 91;
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    Tall.draw(ofGetWidth()/2, ofGetHeight() - Tall.height);
    Short.draw(ofGetWidth()/2 + Short.width, ofGetHeight() - Short.height);
    Short.draw(ofGetWidth()/2 - Short.width * 2, ofGetHeight() - Short.height);
    Medium.draw(ofGetWidth()/2 - Medium.width, ofGetHeight() - Medium.height);
    Medium.draw(ofGetWidth()/2 - Medium.width * 3, ofGetHeight() - Medium.height);


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
