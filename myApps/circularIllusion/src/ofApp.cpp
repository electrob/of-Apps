#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
	
	ofVec3f v1; // v1.x is 0, v1.y is 0, v1.z is 0
	v1.set(350, 250, 0); 
	//getTilePosition (1, 1) + offset;
	circles.clear(); 
	circles.setColor(ofColor::white);
	circles.setCircleResolution(80);
	int radius = 300;
	//while(radius>5){
	//	circles.circle(v1, radius);
	//	radius-=5;
	//}

	circles.circle(v1, radius);    
	radius-=5;
	circles.circle(v1, radius);
}


void ofApp::draw(){

	circles.draw();
}
