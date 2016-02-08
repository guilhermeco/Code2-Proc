#include "testApp.h"

void testApp::circles(int diam){
    ofSetColor(ofRandom(0, 180), ofRandom(0, 60), ofRandom(0, 200));
    ofDrawEllipse(ofRandom(0, ofGetWidth()),ofRandom(0, ofGetHeight()), diam, diam);
    ofDrawEllipse(ofRandom(0, ofGetWidth()),ofRandom(0, ofGetHeight()), diam, diam);
    ofDrawEllipse(ofRandom(0, ofGetWidth()),ofRandom(0, ofGetHeight()), diam, diam);
    
}

void testApp::rectangles(int diam){
    
    ofSetColor(ofRandom(0, 100), ofRandom(0, 70), ofRandom(0, 220));
    ofDrawRectangle(ofRandom(0, ofGetWidth()),ofRandom(0, ofGetHeight()), diam, diam);
    ofDrawRectangle(ofRandom(0, ofGetWidth()),ofRandom(0, ofGetHeight()), diam, diam);
    ofDrawRectangle(ofRandom(0, ofGetWidth()),ofRandom(0, ofGetHeight()), diam, diam);
    
}

void testApp::triangles(int diam){
    ofSetColor(ofRandom(0, 200), ofRandom(0, 50), ofRandom(0, 220), 70);
    ofDrawTriangle(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
      ofDrawTriangle(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
    
}

//void testApp::diamond(ofPoint center, float length, float width){
//    // line 1 (x1, y1, x2, y2)
//    ofDrawLine(center.x - width/2, center.y + length/2, center.x, center.y-length/2);
//    
//    //
//    ofDrawLine(center.x, center.y-length/2, center.x + width/2, center.y + length/2);
//    ofDrawLine(center.x + width/2, center.y + length/2, center.x, center.y+length);
//    ofDrawLine(center.x, center.y + length, center.x-width/2, center.y+length/2);
//    
//}

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(5);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    circles(ofRandom(1, 100));
    rectangles(ofRandom(1, 100));
    triangles(ofRandom(0, 100));
    
    
//    ofSetColor(100, 90, 50);
//    ofFill();
//    ofDrawEllipse(ofGetWidth()/2, ofGetHeight()/2, 100, 100);
//    ofDrawLine(0, 0, ofGetWidth(), ofGetHeight());
//    ofPoint bob;
//    bob.x = ofGetWidth()/2;
//    bob.y = ofGetHeight()/2;
//    float length = ofGetHeight()/4;
//    float width = ofGetHeight()/4;
//    diamond(bob, length, width);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
