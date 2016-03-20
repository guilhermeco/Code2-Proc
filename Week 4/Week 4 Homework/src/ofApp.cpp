#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(0);
    


}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i<myBall.size(); i++) {
        myBall[i].update();
        myBlueBall[i].update();
        myRedBall[i].update();
        myGreenBall[i].update();
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    for (int i = 0 ; i<myBall.size(); i++) {
        myBall[i].draw();
        myGreenBall[i].draw();
        myRedBall[i].draw();
        myBlueBall[i].draw();
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
    
    Ball tempBall;				// create the ball object
    tempBall.setup();			// setup its initial state
    myBall.push_back(tempBall);	// add it to the vector
    
    BallBlue tempBlueBall;				// create the ball object
    tempBlueBall.setup();			// setup its initial state
    myBlueBall.push_back(tempBlueBall);	// add it to the vector
    
    BallRed tempRedBall;				// create the ball object
    tempRedBall.setup();			// setup its initial state
    myRedBall.push_back(tempRedBall);	// add it to the vector
    
    BallGreen tempGreenBall;				// create the ball object
    tempGreenBall.setup();			// setup its initial state
    myGreenBall.push_back(tempGreenBall);	// add it to the vector


}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    myBall.clear();
    myBlueBall.clear();
    myRedBall.clear();
    myGreenBall.clear();

    
    


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
