#include "ofApp.h"

void ofApp::setup()
{

    //create the socket and bind to port 11999
    udpConnection.Create();
    udpConnection.Bind(1234);
    udpConnection.SetNonBlocking(true);
}

void ofApp::update()
{
    char udpMessage[1000];
    udpConnection.Receive(udpMessage,1000);
    string message=udpMessage;
    cout << message << endl;
}

