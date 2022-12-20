#pragma once

#include "ofMain.h"
#include "ofxNetwork.h"

class ofApp : public ofBaseApp{

    public:
        int time_elapsed;

        void setup();
        void update();
        
        ofxUDPManager udpConnection;
};

