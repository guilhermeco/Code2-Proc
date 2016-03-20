#include "ofApp.h"

void ofApp::drawBranch(float length, float theta){
    
    ofSetColor(ofRandom(0,220),ofRandom(0,50),ofRandom(0,190));
    ofSetLineWidth(ofRandom(1,90));
    ofDrawLine(0, 0, 0, -length);
//    ofDrawEllipse(0, 0, length, -length);
    ofTranslate(0, -length);

    length = length * 0.7;
    
    if (length > 2){
        
        ofPushMatrix();
        ofRotate(theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
    }
}

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){

//    float length = 200;
    
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    drawBranch(200, cos(ofGetElapsedTimef())*50);
    
//    ofDrawLine(0,0,0,-length);
//    
//    ofTranslate(0, -length);
//    ofRotate(30);
//    ofDrawLine(0,0,0,-length);

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
