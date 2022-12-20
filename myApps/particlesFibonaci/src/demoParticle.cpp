#include "demoParticle.h"

//------------------------------------------------------------------
demoParticle::demoParticle(){
}


//------------------------------------------------------------------
void demoParticle::reset(){
	//the unique val allows us to set properties slightly differently for each particle
	uniqueVal = ofRandom(-10000, 10000);
	
	pos.x = ofRandomWidth();
	pos.y = ofRandomHeight();
	pos.z = 0; 
	
	vel.x = ofRandom(-3.9, 3.9);
	vel.y = ofRandom(-3.9, 3.9);
	vel.z = 0;
	
	frc   = glm::vec3(0,0,0);
	
	scale = ofRandom(0.5, 1.0);
	
	drag  = ofRandom(0.95, 0.998);	
}

//------------------------------------------------------------------
void demoParticle::update(){

	//1 - APPLY THE FORCES BASED ON WHICH MODE WE ARE IN 

    //cout << ofGetMouseX() << "---" << ofGetMouseY() << endl;    
    glm::vec3 attractPt(attractPtX, attractPtY, 0);
    frc = attractPt-pos; 
    
    //let get the distance and only repel points close to the mouse
    float dist = glm::length(frc);
    frc = glm::normalize(frc);
    
    vel *= drag; 
    if( dist < 150 ){
        vel += -frc * 0.6; //notice the frc is negative 
    }else{
        //if the particles are not close to us, lets add a little bit of random movement using noise. this is where uniqueVal comes in handy. 			
        frc.x = ofSignedNoise(uniqueVal, pos.y * 0.01, ofGetElapsedTimef()*0.2);
        frc.y = ofSignedNoise(uniqueVal, pos.x * 0.01, ofGetElapsedTimef()*0.2);
        vel += frc * 0.04;
    }
	//2 - UPDATE OUR POSITION
	
	pos += vel; 
	
	
	//3 - (optional) LIMIT THE PARTICLES TO STAY ON SCREEN 
	//we could also pass in bounds to check - or alternatively do this at the ofApp level
	if( pos.x > ofGetWidth() ){
		pos.x = ofGetWidth();
		vel.x *= -1.0;
	}else if( pos.x < 0 ){
		pos.x = 0;
		vel.x *= -1.0;
	}
	if( pos.y > ofGetHeight() ){
		pos.y = ofGetHeight();
		vel.y *= -1.0;
	}
	else if( pos.y < 0 ){
		pos.y = 0;
		vel.y *= -1.0;
	}	
		
}

//------------------------------------------------------------------
void demoParticle::draw(){

    ofSetColor(103, 160, 237);
			
	ofDrawCircle(pos.x, pos.y, 0.2 * 4.0);
}

