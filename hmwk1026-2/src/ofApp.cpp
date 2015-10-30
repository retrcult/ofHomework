#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    bgColorTop.set(252,236,155);
    bgColorBottom.set(251,233,208);
    
    circleResolution = 120;
    
    ofSetCircleResolution(circleResolution);
    // ofSetLineWidth(2);

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
    
    
    drawCircleGroup(15, 100, 200, 35, 20, true, true, true);
    drawCircleGroup(15, 400, 500, 10, 40, false, true, true);
    
    
}

//--------------------------------------------------------------


//--------------------------------------------------------------
void ofApp::drawCircleGroup(float circleNumber, float circleX, float circleY, float circleR, float increment, bool vertical, bool fill, bool randomColor) {
    
    float varX, varY;
    float noise, distance;
    
    float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 0.999);
    
    if (fill) {
        ofFill();
    } else {
        ofNoFill();
    }
    
    for (int i = 0; i < circleNumber; i++) {
        
        noise = ofSignedNoise(i*scale)*i*mouseX;
        distance = ofSignedNoise(i*scale)*mouseY;
        
        if (randomColor) {
            circleColor.r = ofNoise(i*scale, ofGetElapsedTimef())*i;
            circleColor.g = ofNoise(i*scale)*i*255;
            circleColor.b = ofNoise(i*scale)*255;
            circleColor.a = ofNoise(i*scale)*50;

//            circleColor.r = ofRandom(i*scale)*i;
//            circleColor.g = ofRandom(i*scale)*255;
//            circleColor.b = ofRandom(i*scale)*i*25;

        }
        
        ofSetColor(circleColor);
        
        if (vertical) {
            ofCircle(circleX + noise, circleY + distance, circleR + increment * i);
        
        } else {
            ofCircle(circleX + distance, circleY + noise, circleR + increment * i);
        }
        
        //ofCircle(circleX + noise, circleY + distance, circleR+30*i);
        
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == 'r') {
        circleColor.r = ofRandom(1)*255;
        circleColor.r = ofNoise(ofGetElapsedTimef());
        drawCircleGroup(5, mouseX, mouseY, 40, 30, true, true, false);
        

    }
    
    if (key == 'g') {
        circleColor.g = ofRandom(1)*255;
        
    }
    
    if (key == 'b') {
        circleColor.b = ofRandom(1)*255;
        
    }


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
