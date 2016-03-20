#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(10);
    glass.setup();
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(220, 40, 120);
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    for (int newRadius = 10; newRadius <= ofGetWidth(); newRadius += 50) {
        glass.draw(newRadius, 0,0, newRadius/3);
        
    }
    
    
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
