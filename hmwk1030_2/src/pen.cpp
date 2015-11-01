//
//  pen.cpp
//  hmwk_1030_2
//
//  Created by hu on 10/31/15.
//
//

#include "pen.h"


//----- setup


void penTool::setup(){
    
    clr.set(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
    pos.set(ofGetMouseX(), ofGetMouseY());
    rad = ofRandom(5, 12);
    
}


//----- update


void penTool::update(){
    
}


//----- draw


void penTool::drawCircle(){
    
    ofSetColor(clr);
    ofCircle(pos, rad);
    
}

void penTool::drawCurveVertex(){
    
    ofBeginShape();
    for (int i = 0; i < curvePos.size(); i++) {
        ofCurveVertex(curvePos[i]);
    }
    ofEndShape();

}


void penTool::change(int key) {
    
    if (key == '[') {
        if(rad > 3) {
            rad -= 3;
        }
    }
    
    if (key == ']') {
        if(rad < 300) {
            rad += 3;
        }
    }

    if (key == 'r') {
        if (clr.r <= 230) {
            clr.r += 25;
        } else if (clr.r > 230 && clr.r < 255) {
            clr.r = 255;
        }
    }
    
    if (key == 'R') {
        if (clr.r >= 25) {
            clr.r -= 25;
        } else if (clr.r < 25 && clr.r > 0) {
            clr.r = 0;
        }
    }
    
    if (key == 'g') {
        if (clr.g <= 230) {
            clr.g += 25;
        } else if (clr.g > 230 && clr.g < 255) {
            clr.g = 255;
        }
    }
    
    if (key == 'G') {
        if (clr.g >= 25) {
            clr.g -= 25;
        } else if (clr.g < 25 && clr.g > 0) {
            clr.g = 0;
        }
    }
    
    if (key == 'b') {
        if (clr.b <= 230) {
            clr.b += 25;
        } else if (clr.b > 230 && clr.b < 255) {
            clr.b = 255;
        }
    }
    
    if (key == 'B') {
        if (clr.b >= 25) {
            clr.b -= 25;
        } else if (clr.b < 25 && clr.b > 0) {
            clr.b = 0;
        }
    }
    
    if (key == 'a') {
        if (clr.a <= 230) {
            clr.a += 25;
        } else if (clr.a > 230 && clr.a < 255) {
            clr.a = 255;
        }
    }
    
    if (key == 'A') {
        if (clr.a >= 25) {
            clr.a -= 25;
        } else if (clr.a < 25 && clr.a > 0) {
            clr.a = 0;
        }
    }
    
    if (key == 'x') {
        clr.set(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
    }
    
}

//void penTool::setColor(int r, int g, int b, int a) {
//    
//    clr.set(r, g, b, a);
//    // clr.set( ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255) );
//    
//}
//
//void penTool::setPosition(float x, float y) {
//    
//    pos.set(x, y);
//    
//}
//
//void penTool::setRadius(float r) {
//    
//    rad = r;
//    
//}
