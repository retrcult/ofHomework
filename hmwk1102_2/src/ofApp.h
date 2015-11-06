#pragma once

#include "ofMain.h"
#include "charSystem.h"

#include "ofUTF8.h"
#include "ofUnicode.h"
#include "ofTextConverter.h"
#include "ofxTrueTypeFontUC.h"

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
    
    //vector<string> pychars;
    
    float W = ofGetWidth(),
          H = ofGetHeight();

//    vector<ofPoint> p;
//    vector<ofPoint> v;
    
    ofxTrueTypeFontUC f;
    vector<charSystem> chars;
    
    ofSoundPlayer bgmusic;
    ofVideoPlayer hookmv;
    
		
};
