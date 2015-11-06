//
//  charSystem.h
//  pychars
//
//  Created by hu on 11/6/15.
//
//

#ifndef __pychars__charSystem__
#define __pychars__charSystem__

#include <stdio.h>
#include "ofMain.h"

#endif /* defined(__pychars__charSystem__) */

#pragma once

class charSystem {

public:
    void setup();
    void update();
    void draw();
    void wrapAround();
    
    string s;
    ofPoint p;
    ofPoint v;
    ofColor c;
    float fz;

    float W = ofGetWidth(),
          H = ofGetHeight();
    
    float time, noise;
    float noiseX, noiseY;
    

};