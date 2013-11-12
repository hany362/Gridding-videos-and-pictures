//This application imports a picture from a file, and turns it into a grid.
//Each piece of the grid is then a separate image in a 2D array.
//Each grid piece could then be manipulated, or saved to a unique
//file, if desired.
//
//You must know the dimensions of the original file, in order
//to set the grid[][] array dimensions, and they must be divisable
//by the size of the grid you have set.
//
//As coded here, the output is the original file on the left,
//and the gridded file on the right.
//
//Sven 9/27/13

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //here is where we load the original image from a file:
    hand.loadImage("images/gridHand600x1000.jpg");
    h = hand.height;
    w = hand.width;
    
    for (line = 0; line <  h/GRIDSIZE; line++)
    {
        for (column = 0; column <  w/GRIDSIZE; column++)
        {
            //cut grid pieces from the main picture, save them in the 2D array "grid[][]":
            grid[column][line].cropFrom(hand, column*GRIDSIZE, line*GRIDSIZE, GRIDSIZE, GRIDSIZE);
            
            //here is where we put a black border on each grid sqaure:
            for (vpix = 0; vpix < GRIDSIZE; vpix++)
            {
                for (hpix = 0; hpix < GRIDSIZE; hpix++)
                {   
                    if (hpix == 0 or hpix == (GRIDSIZE-1))
                        grid[column][line].setColor(vpix,hpix,ofColor(0,0,0));
                    if (vpix == 0 or vpix == (GRIDSIZE-1))
                        grid[column][line].setColor(vpix,hpix,ofColor(0,0,0));
                }
            }
            
            //we must update the file after adding the border color:
            grid[column][line].update();
        }
    }
}

//--------------------------------------------------------------
void testApp::update(){
	ofBackground(255);	
}

//--------------------------------------------------------------
void testApp::draw(){
    //set background color to white:
	ofSetColor(255);
    
	//draw original photo on left side of window:
    hand.draw(50, 50);
    
    //now draw the outlined grid pieces on right side of window-- each piece separate:
    for (column = 0; column <  w/GRIDSIZE; column++)
    {
        for (line = 0; line <  h/GRIDSIZE; line++)
        {
            grid[column][line].draw(column*GRIDSIZE+680+(column*3), line*GRIDSIZE+39+(line*3));
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
