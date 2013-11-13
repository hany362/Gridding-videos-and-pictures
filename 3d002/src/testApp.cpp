#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(0, 0, 0);
    
    ofEnableNormalizedTexCoords();
    
    marble.loadImage("moon.jpg");
    
    vector<ofPoint> vertices;
    //vector<ofColor> colors;
   // vector<ofFloatColor> colors;   // go from 0-1
    vector<ofVec2f> texCoods;// vec has 2 floats in it
    
    float nSlices = 30;
    float angle = 0;
    for(int i=0; i<nSlices; i++){
        vertices.push_back(ofPoint(0,0));
        texCoods.push_back(ofVec2f(0.5, 0.5));
        //texCoods.push_back(ofVec2f(marble.getWidth()/2, marble.getHeight()/2));
        //normalize means 0-1
        
        float x = cos(angle);
        float y = sin(angle);
        vertices.push_back(ofPoint(x,y));
        x=0.5+cos(angle)*0.5;
        y=0.5+sin(angle)*0.5;
        texCoods.push_back(ofVec2f(x, y));

        
        angle += M_TWO_PI /(float)nSlices; //mtwopi = 360
        
        
        x=cos(angle);
        y=sin(angle);
        
        vertices.push_back(ofPoint(x,y));
        x=0.5+cos(angle)*0.5;
        y=0.5+sin(angle)*0.5;
        texCoods.push_back(ofVec2f(x, y));
    }
    
    circle.addVertices(vertices);
    circle.addTexCoords(texCoods);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    ofScale(100,100);
//    ofRotateX(ofGetElapsedTimef()*20);
//    ofRotateY(ofGetElapsedTimef()*20);
//    ofRotateZ(ofGetElapsedTimef()*20);

    cam.begin();
    
    
    marble.bind();// textured with the pic
    ofScale(100,100);

    //circle.drawWireframe();
    circle.draw();
    marble.unbind();

    cam.end();

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
