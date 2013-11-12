#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetVerticalSync(true);
	//img.loadImage("indispensable.jpg");
	//ofSetLineWidth(2);
    
    camWidth = ofGetScreenWidth();
    camHeight = ofGetScreenHeight();
    
    //we can now get back a list of devices.
	vector<ofVideoDevice> devices = vidGrabber.listDevices();
	
    for(int i = 0; i < devices.size(); i++){
		cout << devices[i].id << ": " << devices[i].deviceName;
        if( devices[i].bAvailable ){
            cout << endl;
        }else{
            cout << " - unavailable " << endl;
        }
	}
    
    vidGrabber.setDeviceID(0);
	vidGrabber.setDesiredFrameRate(20);
	vidGrabber.initGrabber(camWidth,camHeight);
	
	ofSetVerticalSync(true);
    
}

//--------------------------------------------------------------
void testApp::update(){
    vidGrabber.update();
	
	if (vidGrabber.isFrameNew()){
		int totalPixels = camWidth*camHeight*3;
		unsigned char * pixels = vidGrabber.getPixels();
	}
}

//--------------------------------------------------------------
void testApp::draw(){
    
	
    ofBackground(ofColor::black);
	
	// draw the original image
	//ofSetColor(ofColor::white);
	//img.draw(0, 0);
	
	// draw the red rectangles that move with the mouse
//	ofNoFill();
//	ofSetColor(ofColor::red);
//	ofRect(mouseX, mouseY, 40, 40);
	
	// draw the four corresponding subsections
	//ofTranslate(427, 0);
//    ofSetHexColor(0xffffff);
	
    //vidGrabber.draw(0,0);   //draw the original 

    for (int a=0; a<ofGetScreenWidth();a+=60){
        for (int b=0;b<ofGetScreenHeight(); b+=60 ){
          	vidGrabber.getTextureReference().drawSubsection(a, b, 50, 50, a,b);
        }
    }
    

    //draw squares
//    for(int i=0; i<100; i+=50){
//        for(int j=0; j<100; j+=50){
//            ofRect(i, j, 40, 40);
//        }
//    }

    

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