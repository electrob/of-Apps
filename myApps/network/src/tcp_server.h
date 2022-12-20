#pragma once

#include "ofMain.h"
#include "ofxNetwork.h"

class TCPServer:{

    public:
        int time_elapsed;

        void setup();
        void update();

        ofxTCPServer server;
};

