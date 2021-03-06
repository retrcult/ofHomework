#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    bgColorTop.set(252,236,155);
    bgColorBottom.set(251,233,208);
    TriaColor.set(32, 176, 183, 243);

    ofSetCircleResolution(120);
    // ofSetLineWidth(2);

    rotate = 0;
    
    angleArc.setStrokeColor(ofColor::rosyBrown);
    angleArc.setStrokeWidth(5);
    angleArc.setFilled(false);
    angleArc.setCurveResolution(200);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackgroundGradient(bgColorTop, bgColorBottom, OF_GRADIENT_LINEAR);
    
    ofFill();
    ofSetColor(255);
    ofCircle(mouseX, mouseY, 6);
    
    
    drawCircleGroup(5, 100, 200, 40, true, true, true);

    

}

//--------------------------------


void ofApp::drawCircleGroup(float circleNumber, float circleX, float circleY, float circleR, bool vertical, bool fill, bool randomColor) {
    
    float varX, varY;
    float noise, distance;
    ofColor circleColor;
    
    float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 0.9);

    if (fill) {
        ofFill();
    } else {
        ofNoFill();
    }
    
    for (int i = 0; i < circleNumber; i++) {
        
        noise = ofSignedNoise(i*scale)*i*40;
        distance = ofSignedNoise(i*scale)*mouseY;
        
        if (randomColor) {
            circleColor.r = ofNoise(i)*i*25;
            circleColor.g = ofNoise(i)*i*35;
            circleColor.b = ofNoise(i)*i*15;
            circleColor.a = ofNoise(i)*i*15;
        }
        
        ofSetColor(circleColor);
//        
//        if (vertical) {
//            ofCircle(circleX + noise, circleY + 5*i, circleR + 3*i);
//            
//        } else {
//            ofCircle(circleX + 5*i, circleY + noise, circleR + 3*i);
//        }

        ofCircle(circleX + noise, circleY + distance, circleR+30*i);

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

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
