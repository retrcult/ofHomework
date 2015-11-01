//
//  particle.cpp
//  hmwk1030
//
//  Created by hu on 10/30/15.
//
//

#include "particle.h"


void particle::setup(float x, float y) {
    
    clr.set( ofRandom(240), ofRandom(80), ofRandom(160), ofRandom(128) );
    pos.set(x, y);
    vel.set( ofRandomf() * 5, ofRandomf() * 5 );
    rad = ofRandom(4, 12);
    cirRes = ofRandom(3, 60);
    fill = int( ofRandom(0, 1) * 2 );
    
}

void particle::update(int incr) {
    
    float time = ofGetElapsedTimef();
    float noise = ofSignedNoise(abs(pos.x-w/2), abs(pos.y-h/2), time);
    
    rad += 0.05 * ofNoise(rad);
    //clr.r += 1;
    
    vel.x += ofMap(ofGetMouseX(), 0, w, -1.0, 1.0) * 0.5 * noise;
    vel.y += ofMap(ofGetMouseY(), 0, h, -1.0, 1.0) * 0.5 * noise;
    pos += vel;
    
}

void particle::draw() {
    
    ofSetCircleResolution(cirRes);
    ofSetColor(clr);
    
    if (fill == 1) {
        ofFill();
    } else {
        ofNoFill();
    }
    
    ofCircle(pos, rad);
    
}

void particle::clrFade() {
    
    if (clr.a > 5) {
        clr.a -= ofRandom(1, 5);
    }

}

//void particle::setMousePos() {
//    
//    pos.set(ofGetMouseX(), ofGetMouseY());
//    
//}

void particle::bounceOffWalls() {
    
    if (pos.x + rad > w || pos.x - rad < 0) {
        vel.x *= -1.0;
        clrFade();
    }
    
    if (pos.y + rad > h || pos.y - rad < 0) {
        vel.y *= -1.0;
        clrFade();
    }

}

void particle::wrapAround() {
    
    if (pos.x > w || pos.x < 0) {
        pos.x = (pos.x >= w) ? 0 : w;
        clrFade();
    }
    
    if (pos.y > h || pos.y < 0) {
        pos.y = (pos.y >= h) ? 0 : h;
        clrFade();
    }
    
}




