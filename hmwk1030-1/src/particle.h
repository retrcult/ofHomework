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
    void setup();
    void update();
    void draw();

    void setMousePos();
    void bounceOffWalls();
    void wrapAround();

    
    ofColor col;
    ofPoint pos, vel;
    float rad;
    
    float w = ofGetWidth(),
          h = ofGetHeight();
    
};
