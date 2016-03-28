#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(50);
    ofSetCircleResolution(50);
    ofEnableAntiAliasing();
    
    ofSetBackgroundAuto(false);
    ofBackground(0);
    
    ofEnableAlphaBlending();

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofBackground(0);  // Clear the screen with a black color
//    ofSetColor(255);  // Set the drawing color to white
//    
//    // Draw some shapes
//    ofFill();
//    ofDrawRectangle(50, 50, 100, 100); // Top left corner at (50, 50), 100 wide x 100 high
//    ofDrawCircle(250, 100, 50); // Centered at (250, 100), radius of 50
//    ofDrawEllipse(400, 100, 80, 100); // Centered at (400 100), 80 wide x 100 high
//    ofDrawTriangle(500, 150, 550, 50, 600, 150); // Three corners: (500, 150), (550, 50), (600, 150)
//    ofDrawLine(700, 50, 700, 150); // Line from (700, 50) to (700, 150)
//    
//    ofPushMatrix();
//    ofTranslate(0,120,0);
//    ofNoFill();
//    ofDrawRectangle(50, 50, 100, 100); // Top left corner at (50, 50), 100 wide x 100 high
//    ofDrawCircle(250, 100, 50); // Centered at (250, 100), radius of 50
//    ofDrawEllipse(400, 100, 80, 100); // Centered at (400 100), 80 wide x 100 high
//    ofDrawTriangle(500, 150, 550, 50, 600, 150); // Three corners: (500, 150), (550, 50), (600, 150)
//    ofDrawLine(700, 50, 700, 150); // Line from (700, 50) to (700, 150)
//    ofPopMatrix();
//    
//    ofPushMatrix();
//    ofTranslate(0,240,0);
//    ofNoFill();
//    ofDrawRectRounded(50, 50, 100, 100, 15);
//    ofDrawCurve(50, 50, 250, 100, 500, 100, 50, 50);
//    ofDrawBezier(250, 50, 500, 0, 500, 500, 250, 200);
//    ofPopMatrix();
    
//    float randomColor = ofRandom(50, 255);
//    
//    
//    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {  // If the left mouse button is pressed...
//        ofSetColor(randomColor);
//        ofSetRectMode(OF_RECTMODE_CENTER);
//        ofDrawRectangle(ofGetMouseX(), ofGetMouseY(), 50, 50);  // Draw a 50 x 50 rect centered over the mouse
//    }
//    
//    if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)) {  // If the right mouse button is pressed...
//        ofBackground(0);  // Draw a black background over the screen
//    }
    
//    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {  // If the left mouse button is pressed...
//        ofSetRectMode(OF_RECTMODE_CENTER);
//        int numRects = 10;
//        for (int r=0; r<numRects; r++) {
//            ofSetColor(ofRandom(50, 255));
//            float width = ofRandom(5, 20);
//            float height = ofRandom(5, 20);
//            float xOffset = ofRandom(-40, 40);
//            float yOffset = ofRandom(-40, 40);
//            ofDrawRectangle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, width, height);
//        }
//    }
    
//    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {  // If the left mouse button is pressed...
//        ofSetRectMode(OF_RECTMODE_CENTER);
//        int numRects = 10;
//        for (int r=0; r<numRects; r++) {
//            ofSetColor(ofRandom(50, 255));
//            float width = ofRandom(5, 20);
//            float height = ofRandom(5, 20);
//            float distance = ofRandom(35);
//            
//            // Formula for converting from polar to Cartesian coordinates:
//            //  x = cos(polar angle) * (polar distance)
//            //  y = sin(polar angle) * (polar distance)
//            
//            // We need our angle to be in radians if we want to use sin() or cos()
//            // so we can make use of an openFrameworks function to convert from degrees
//            // to radians
//            float angle = ofRandom(ofDegToRad(360.0));
//            
//            float xOffset = cos(angle) * distance;
//            float yOffset = sin(angle) * distance;
//            ofDrawRectangle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, width, height);
//        }
//    }
    
//    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {  // If the left mouse button is pressed...
//        ofSetRectMode(OF_RECTMODE_CENTER);
//        int maxRadius = 100;  // Increase for a wider brush
//        int radiusStepSize = 5;  // Decrease for more circles (i.e. a more opaque brush)
//        int alpha = 3;  // Increase for a more opaque brush
//        int maxOffsetDistance = 100;  // Increase for a larger spread of circles
//        // draw smaller and smaller circles and layering (increasing) opaqueness
//        for (int radius=maxRadius; radius>0; radius-=radiusStepSize) {
//            float angle = ofRandom(ofDegToRad(360.0));
//            float distance = ofRandom(maxOffsetDistance);
//            float xOffset = cos(angle) * distance;
//            float yOffset = sin(angle) * distance;
//            
//            ofColor myPink(190, 50, 150, alpha);
//            ofColor myPurple(200, 80, 250, alpha);
//            ofColor inBetween = myPink.getLerped(myPurple, ofRandom(2.0));
//            ofSetColor(inBetween);
//            
//            ofDrawCircle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, radius);
//        }
//    }
    
//    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {  // If the left mouse button is pressed...
//        ofSetRectMode(OF_RECTMODE_CENTER);
//        
//        int numLines = 30;
//        int minRadius = 25;
//        int maxRadius = 125;
//        for (int i=0; i<numLines; i++) {
//            float angle = ofRandom(ofDegToRad(360.0));
//            float distance = ofRandom(minRadius, maxRadius);
//            float xOffset = cos(angle) * distance;
//            float yOffset = sin(angle) * distance;
//            float alpha = ofMap(distance, minRadius, maxRadius, 50, 0);  // Make shorter lines more opaque
//            ofSetColor(255, alpha);
//            ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX()+xOffset, ofGetMouseY()+yOffset);
//        }
//        
//    }
    
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {  // If the left mouse button is pressed...
        ofSetRectMode(OF_RECTMODE_CENTER);
        
        // Code for the final version of the brush
        
        int numTriangles = 10;
        int minOffset = 5;
        int maxOffset = 70;
        int alpha = 150;
        
        for (int t=0; t<numTriangles; ++t) {
            float offsetDistance = ofRandom(minOffset, maxOffset);
            
            ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
            
            // Define a triangle at the origin (0,0) that points to the right
            ofVec2f p1(0, 6.25);
            ofVec2f p2(25, 0);
            ofVec2f p3(0, -6.25);
            
            float rotation = ofRandom(360); // The rotate function uses degrees!
            p1.rotate(rotation);
            p2.rotate(rotation);
            p3.rotate(rotation);
            
            ofVec2f triangleOffset(offsetDistance, 0.0);
            triangleOffset.rotate(rotation);
            
            p1 += mousePos + triangleOffset;
            p2 += mousePos + triangleOffset;
            p3 += mousePos + triangleOffset;
            
            ofColor aqua(0, 252, 255, alpha);
            ofColor purple(198, 0, 205, alpha);
            ofColor inbetween = aqua.getLerped(purple, ofRandom(1.0));
            ofSetColor(inbetween);
            
            ofDrawTriangle(p1, p2, p3);
        }
        
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
