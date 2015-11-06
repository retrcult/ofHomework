#pragma once

#include "ofMain.h"

#define ROW 3

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    vector<ofImage> slices;
    vector<int> orders;
    
    int recR, recC;
    
    int mvx[4] = {0, 1, 0, -1},
        mvy[4] = {1, 0, -1, 0};
    
    int dir = -1;

    bool complete = false;

    ofImage completeImg;
    float cImgX = 360, cImgY = 294;
    
    ofSoundPlayer successSnd, warningSnd;
    ofSoundPlayer completeSnd;
    
    vector<ofPoint> p;

    float W = ofGetWidth(),
          H = ofGetHeight();
    float w = W / ROW,
          h = H / ROW;
    
};
