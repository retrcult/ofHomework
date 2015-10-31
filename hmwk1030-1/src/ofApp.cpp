#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(circleResolution);
    // ofSetBackgroundAuto(false);

    for (int i = 0; i < numCircles; i++) {
        particle myParticle;
        myParticle.setup();
        particleSystem.push_back(myParticle);
    }

}

//--------------------------------------------------------------
void ofApp::update(){

    for (int i = 0; i < particleSystem.size(); i++) {
        
        particleSystem[i].update();
        
        if (i % 2 == 0) {
            particleSystem[i].bounceOffWalls();
        } else {
            particleSystem[i].wrapAround();
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i = 0; i < particleSystem.size(); i++) {
        particleSystem[i].draw();
    }
    
    for (int i = 0; i < particlesFollowingMouse.size(); i++) {
        particlesFollowingMouse[i].draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    if (particlesFollowingMouse.size() > numCirclesFollowed) {
        particlesFollowingMouse.erase(particlesFollowingMouse.begin());
    }
    
        particle moveTrack;
        moveTrack.setup();
        moveTrack.pos.set(x, y);
        particlesFollowingMouse.push_back(moveTrack);

    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    for (int i = 0; i < ofRandom(5, 40); i++) {
        particle myParticle;
        myParticle.setup();
        myParticle.pos.set(x, y);
        particleSystem.push_back(myParticle);
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
        
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
