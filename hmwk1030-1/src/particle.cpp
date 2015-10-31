//
//  particle.cpp
//  hmwk1030
//
//  Created by hu on 10/30/15.
//
//

#include "particle.h"


void particle::setup() {
    
    col.set(ofRandom(240), ofRandom(80), ofRandom(160), ofRandom(128));
    pos.set(w/2, h/2);
    vel.set(ofRandomf()*5, ofRandomf()*5);
    rad = ofRandom(6, 21);

}

void particle::update() {
    
    pos += vel;
    
}

void particle::draw() {
    
    ofSetColor(col);
    ofCircle(pos, rad);
    
}

void particle::setMousePos() {
    
    pos.set(ofGetMouseX(), ofGetMouseY());
    
}

void particle::bounceOffWalls() {
    
    if (pos.x + rad > w || pos.x - rad < 0) {
        vel.x *= -1.0;
    }
    
    if (pos.y + rad > h || pos.y - rad < 0) {
        vel.y *= -1.0;
    }

}

void particle::wrapAround() {
    
    if (pos.x > w || pos.x < 0) {
        pos.x = (pos.x >= w) ? 0 : w;
    }
    
    if (pos.y > h || pos.y < 0) {
        pos.y = (pos.y >= h) ? 0 : h;
    }
    
}



