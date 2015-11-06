//
//  charSystem.cpp
//  pychars
//
//  Created by hu on 11/6/15.
//
//

#include "charSystem.h"

void charSystem::setup(){
    
    ofSetFrameRate(20);
    time = ofGetElapsedTimef();
    p.set(ofRandom(W),ofRandom(H));
    //p.set(W/2+ofRandom(10*(ofGetMouseX()-p.y)*ofSignedNoise(time+H)),
    //      H/2+ofRandom(10*(ofGetMouseY()-p.x)*ofSignedNoise(time+W)));
    v.set(ofRandom(3), ofRandom(3));
    c.set(ofRandom(255));
    fz = ofRandom(8,16);
    
}

void charSystem::update(){
    
    //noiseX = ofSignedNoise(ofGetElapsedTimef()+W, abs(ofGetMouseX()-p.x));
    //noiseY = ofSignedNoise(ofGetElapsedTimef()+H, abs(ofGetMouseY()-p.y));
    noiseX = ofSignedNoise(time+W*0.02)*0.02;
    noiseY = ofSignedNoise(time+H*0.02)*0.02;

//    cout << "nx: " << noiseX << endl;
//    cout << "ny: " << noiseY << endl;
    v.x += noiseX;
    v.y += noiseY;
    //p.set(ofGetMouseX(), ofGetMouseY());
    p += v;
    
}

void charSystem::draw(){
    
    ofSetColor(c);
    
}

void charSystem::wrapAround(){

    if (p.x < 0) p.x = W;
    if (p.x > W) p.x = 0;
    if (p.y < 0) p.y = H;
    if (p.y > H) p.y = 0;
    
}

