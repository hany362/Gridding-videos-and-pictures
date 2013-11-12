#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
    myVideo.initGrabber(ofGetWidth(), ofGetHeight());
    
}

//--------------------------------------------------------------
void testApp::update(){
    myVideo.update();
    
}

//--------------------------------------------------------------
void testApp::draw(){
    //ofBackground(0);
    //ofSetColor(255);
    
    myVideo.getTextureReference().bind();
    
    int eachBoxW = ofGetWidth()/16;
    int eachBoxH = ofGetHeight()/12;
    
    for(int i = 0; i<16; i++) {
        for(int j = 0;j<12;j++) {
            
            glBegin(GL_QUADS); // draw in triangle strips
            glTexCoord2f(i* eachBoxW, j* eachBoxH);
            glVertex2f(i* eachBoxW, j* eachBoxH); // top left
            
            glTexCoord2f((i* eachBoxW) + eachBoxW, j* eachBoxH);
            glVertex2f((i* eachBoxW) + eachBoxW, j* eachBoxH); // top right
            
            glTexCoord2f((i* eachBoxW) + eachBoxW, (j* eachBoxH) + eachBoxH);
            glVertex2f((i* eachBoxW) + eachBoxW, (j* eachBoxH) + eachBoxH); //bottom right
            
            glTexCoord2f(i* eachBoxW,(j* eachBoxH) + eachBoxH);
            glVertex2f(i* eachBoxW,(j* eachBoxH) + eachBoxH);  // bottom left
            glEnd();
            
        }
    }
    
    //    int margin = 10;
    //        glBegin(GL_QUADS); // draw in triangle strips
    //        glTexCoord2f(0, 0);
    //        glVertex2f(0, 0); // top of the roof
    //
    //        glTexCoord2f(ofGetWidth()/16,0);
    //        glVertex2f(ofGetWidth()/16, 0); // left corner of the roof
    //
    //        glTexCoord2f(ofGetWidth()/16,ofGetHeight()/12);
    //        glVertex2f(ofGetWidth()/16, ofGetHeight()/12); // right corner of the roof
    //
    //        glTexCoord2f(0,ofGetHeight()/120);
    //        glVertex2f(0,ofGetHeight()/12); // bottom left corner of the house
    //        glEnd();
    //    //------------------------------
    //        glBegin(GL_QUADS); // draw in triangle strips
    //        glTexCoord2f(1*ofGetWidth()/16 + margin, 0);
    //        glVertex2f(ofGetWidth()/16 + margin, 0); // top of the roof
    //
    //        glTexCoord2f(2*ofGetWidth()/16 + margin,0);
    //        glVertex2f(2*ofGetWidth()/16 + margin, 0); // left corner of the roof
    //
    //        glTexCoord2f(2*ofGetWidth()/16 + margin, ofGetHeight()/12);
    //        glVertex2f(2*ofGetWidth()/16 + margin, ofGetHeight()/12); // right corner of the roof
    //
    //        glTexCoord2f(1*ofGetWidth()/16 + margin,ofGetHeight()/12);
    //        glVertex2f(1*ofGetWidth()/16 + margin,ofGetHeight()/12); // bottom left corner of the house
    //        glEnd();
    //    //------------------------------
    //
    //        glBegin(GL_QUADS); // draw in triangle strips
    //        glTexCoord2f(2*ofGetWidth()/16 + 2 * margin, 0);
    //        glVertex2f(ofGetWidth()/16 + 2 * margin, 0); // top of the roof
    //
    //        glTexCoord2f(3*ofGetWidth()/16 + 2 * margin,0);
    //        glVertex2f(3*ofGetWidth()/16 + 2 * margin, 0); // left corner of the roof
    //
    //        glTexCoord2f(3*ofGetWidth()/16 + 2 * margin, ofGetHeight()/12);
    //        glVertex2f(3*ofGetWidth()/16 + 2 * margin, ofGetHeight()/12); // right corner of the roof
    //
    //        glTexCoord2f(2*ofGetWidth()/16 + 2 * margin,ofGetHeight()/12);
    //        glVertex2f(2*ofGetWidth()/16 + 2 * margin,ofGetHeight()/12); // bottom left corner of the house
    //        glEnd();
    
    //    for (int i=0; i<480; i++){
    //        for (int j=0; j<320; j++){
    //            glBegin(GL_QUADS);
    //
    //            glVertex2f(0, 0); // top of the roof
    //            glTexCoord2f(0, 0);
    //
    //            glVertex2f(j, 0); // left corner of the roof
    //            glTexCoord2f(j,0);
    //
    //            glVertex2f(j, i); // right corner of the roof
    //            glTexCoord2f(j,i);
    //
    //            glVertex2f(0,i); // bottom left corner of the house
    //            glTexCoord2f(0,i);
    //            glEnd();
    //
    //        }
    //    }
    
    myVideo.getTextureReference().unbind();
    
    
    
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
