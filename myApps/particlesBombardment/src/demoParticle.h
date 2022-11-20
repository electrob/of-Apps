#pragma once
#include "ofMain.h"

class demoParticle{

	public:
		demoParticle();

		void reset();
		void update();
		void draw();		
		
		glm::vec3 pos;
		glm::vec3 vel;
		glm::vec3 frc;
		
		float drag; 
		float uniqueVal;
		float scale;
        inline static int attractPtX = 200;
        inline static int attractPtY = 200;
};

