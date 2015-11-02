//
//  particle.h
//  hmwk1030
//
//  Created by hu on 10/30/15.
//
//

#ifndef __hmwk1030__particle__
#define __hmwk1030__particle__

#include <stdio.h>
#include "ofMain.h"

#endif /* defined(__hmwk1030__particle__) */

#pragma once


// class is a definition of an object (how to make the object??

class particle {
    
public:
    void setup(float x, float y);
    void update(int incr);
    void draw();
    void clrFade();

    void bounceOffWalls();
    void wrapAround();

    ofColor clr;
    ofPoint pos, vel;
    float rad;
    int cirRes;
    int fill;

    float w = ofGetWidth(),
          h = ofGetHeight();
    
};
