#pragma once

#include "ofMain.h"

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
    
        void drawCircleGroup(float circleNumber, float circleX, float circleY, float circleR, float increment, bool vertical, bool fill, bool randomColor);
    
    ofColor bgColorTop, bgColorBottom;
    ofColor circleColor;
    float circleResolution;
    
		
};
