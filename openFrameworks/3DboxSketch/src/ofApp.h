/*
Project Title:
Description:
©Daniel Buzzo 2021
dan@buzzo.com
http://buzzo.com
https://github.com/danbz
http://youtube.com/danbuzzo
*/

#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);

    vector<ofBoxPrimitive> boxes;
    ofEasyCam cam;
    ofLight light;
    int spaceRange ;

};
