#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);
    
	int num = 70000;
	p.assign(num, demoParticle());
    
    resetParticles();
}

void ofApp::resetParticles(){

	//these are the attraction points used in the forth demo


	for(unsigned int i = 0; i < p.size(); i++){
		p[i].reset();
	}
}

//--------------------------------------------------------------
void ofApp::update(){
    time_elapsed++;
    //cout << time_elapsed << "---";
    if(time_elapsed > 10) {
        time_elapsed = 0;
        demoParticle::attractPtX = ofRandom(0, ofGetHeight());
        demoParticle::attractPtY = ofRandom(0, ofGetWidth());
    }
	
    for(unsigned int i = 0; i < p.size(); i++){
		p[i].update();
	}
	
	//lets add a bit of movement to the attract points
	for(unsigned int i = 0; i < attractPointsWithMovement.size(); i++){
		attractPointsWithMovement[i].x = attractPoints[i].x + ofSignedNoise(i * 10, ofGetElapsedTimef() * 0.7) * 12.0;
		attractPointsWithMovement[i].y = attractPoints[i].y + ofSignedNoise(i * -10, ofGetElapsedTimef() * 0.7) * 12.0;
	}	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackgroundGradient(ofColor(60,60,60), ofColor(10,10,10));

	for(unsigned int i = 0; i < p.size(); i++){
		p[i].draw();
	}
	
	ofSetColor(190);
	ofSetColor(230);	
	ofDrawBitmapString("My Particles", 10, 20);
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
