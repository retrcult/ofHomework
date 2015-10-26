#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
        void aLine(int x1, int y1, int x2, int y2, string shape);
        void drawCurve(float pointNumber, float startPointX, float startPointY, float endPointX, float endPointY, float ctrlPointX1, float ctrlPointY1, float ctrlPointX2, float ctrlPointY2);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    ofColor bgColorTop, bgColorBottom,
            TriaColor;
    
    ofPath angleArc = ofPath();

    float angle, random, rotate;
    // float circX, circY;

    
		
};
