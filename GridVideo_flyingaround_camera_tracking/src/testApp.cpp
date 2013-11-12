#include "testApp.h"

#define SQUARE_SIZE 60
#define NUM_SQUARE  50


//--------------------------------------------------------------
void testApp::setup(){
    
    spacing = 0;
    
    camWidth = ofGetScreenWidth();
    camHeight = ofGetScreenHeight();
    
    //camWidth 		= 320;	// try to grab at this size.
	//camHeight 	= 230;
	
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
    //ofBackground(100,100,100);
	
	vidGrabber.update();
	
	if (vidGrabber.isFrameNew()){
		int totalPixels = camWidth*camHeight*3;
		unsigned char * pixels = vidGrabber.getPixels();
	}
    
    //vid.update();
    spacing +=0.01;
    //spacing =1.1;
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    ofPushMatrix();

        for(int a=0; a<vidGrabber.getHeight(); a+=SQUARE_SIZE) {
                for(int b=0; b<vidGrabber.getWidth(); b+=SQUARE_SIZE) {
            ofTranslate(a*0.5,b*0.5);
                    ofRotateY(ofNoise(a*0.5, ofGetElapsedTimef()*0.1)*180);
                    ofRotateX(ofNoise(a*0.5, ofGetElapsedTimef()*0.1)*180);
                    ofRotateZ(ofNoise(b*0.5, ofGetElapsedTimef()*0.1)*180);
                    
            vidGrabber.getTextureReference().drawSubsection(a, b, SQUARE_SIZE, SQUARE_SIZE, a, b, SQUARE_SIZE, SQUARE_SIZE);
            vidGrabber.getTextureReference().drawSubsection(a*spacing, b*spacing, SQUARE_SIZE, SQUARE_SIZE, a/2, b/2, SQUARE_SIZE, SQUARE_SIZE);
            vidGrabber.getTextureReference().drawSubsection(a*spacing, b*spacing, SQUARE_SIZE*2, SQUARE_SIZE*2, b, a, SQUARE_SIZE, SQUARE_SIZE);
//            vidGrabber.getTextureReference().drawSubsection(a, b, SQUARE_SIZE*2, SQUARE_SIZE*2, b, a, SQUARE_SIZE*2, SQUARE_SIZE*2);
//                }
        }
    ofPopMatrix();
    
    


    //spacing = cos(ofGetElapsedTimef())*2*sin(ofGetElapsedTimef());

    //spacing = ofGetElapsedTimeMillis();
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
