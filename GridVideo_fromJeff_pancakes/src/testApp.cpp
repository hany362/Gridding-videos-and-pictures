#include "testApp.h"

#define SQUARE_SIZE 40

//--------------------------------------------------------------
void testApp::setup(){
    vid.loadMovie("pancakes.mp4");
    vid.play();
    
    spacing = 0;
}

//--------------------------------------------------------------
void testApp::update(){
    vid.update();
    spacing = sin(ofGetElapsedTimef()) + 2;
}

//--------------------------------------------------------------
void testApp::draw(){
    
    // Center it!
    ofTranslate((ofGetWidth()/2.0)-(vid.getWidth()*spacing/2.0), (ofGetHeight()/2.0)-(vid.getHeight()*spacing/2.0));
    
    // Draw a bunch of SQUARE_SIZExSQUARE_SIZE squares of the video
    for(int y=0; y<vid.getHeight(); y+=SQUARE_SIZE) {
        for(int x=0; x<vid.getWidth(); x+=SQUARE_SIZE) {
            vid.getTextureReference().drawSubsection(x*spacing, y*spacing, SQUARE_SIZE, SQUARE_SIZE, x, y, SQUARE_SIZE, SQUARE_SIZE);
        }
    }
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
