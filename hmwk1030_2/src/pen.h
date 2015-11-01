//
//  pen.h
//  hmwk_1030_2
//
//  Created by hu on 10/31/15.
//
//

#ifndef __hmwk_1030_2__pen__
#define __hmwk_1030_2__pen__

#include <stdio.h>
#include "ofMain.h"

#endif /* defined(__hmwk_1030_2__pen__) */

#pragma once

class penTool {

public:
    void setup();
    void update();
    void drawCircle();
    void drawCurveVertex();
    void change(int key);
//    void setColor(int r, int g, int b, int a);
//    void setPosition(float x, float y);
//    void setRadius(float r);

    ofPoint pos;
    ofColor clr;
    float rad;
    
    vector<ofPoint> curvePos;
    
};