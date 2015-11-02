#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    sound.loadSound("mistress.mp3");
    sound.play();
    
    ofBackground(250);

    for (int i = 0; i < numCirclesInit; i++) {
        particle myParticle;
        myParticle.setup(w/2, h/2);
        particleSystem.push_back(myParticle);
    }

}

//--------------------------------------------------------------
void ofApp::update(){

    for (int i = 0; i < particleSystem.size(); i++) {
        
        particleSystem[i].update(i);
        
        //if (i % 2 == 0) {
            particleSystem[i].bounceOffWalls();
        //} else {
        //    particleSystem[i].wrapAround();
        //}
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
    
    if (key == ' ') {
        particleSystem.clear();
    }
    
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
    moveTrack.setup(x, y);
    particlesFollowingMouse.push_back(moveTrack);
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

    particle myParticle;
    myParticle.setup(x, y);
    particleSystem.push_back(myParticle);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    particlesFollowingMouse.clear();
    
    for (int i = 0; i < ofRandom(5, 40); i++) {
        particle myParticle;
        myParticle.setup(x, y);
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
