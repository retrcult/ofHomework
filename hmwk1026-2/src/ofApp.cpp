#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //bgColorTop.set(252,236,155);
    //bgColorBottom.set(251,233,208);
    
    circleResolution = 120;
    
    ofSetCircleResolution(circleResolution);
    // ofSetLineWidth(2);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //ofBackgroundGradient(bgColorTop, bgColorBottom, OF_GRADIENT_LINEAR);
    
    ofFill();
    ofSetColor(255);
    ofCircle(mouseX, mouseY, 6);
    
    float circNum, numIncr;
    
    circNum = 6;
    numIncr = 25;
    
    
    
//    drawCircleGroup(15, 100, 200, 35, 20, true, true, true);
//    drawCircleGroup(5, 400, 500, 10, 40, false, true, true);
//    drawCircleGroup(5, 340, 450, 10, 40, false, true, true);
//    drawCircleGroup(7, 300, 300, 20, 340, false, true, true);
//    
    for (int i = 0; i < circPoint.size(); i++) {
        
        ofSetColor(circColor[i]);
        
        drawCircleGroup(ofNoise(i+1)*10*i, circPoint[i], 5, 5, true, true, true);
    }


}

//--------------------------------------------------------------


//--------------------------------------------------------------

void ofApp::drawCircleGroup(float circleNumber, ofPoint circleOrigin, float circleR, float increment, bool vertical, bool fill, bool randomColor) {
    
    float varX, varY;
    float noiseX, noiseY;
    
    float scale = ofMap(ofNoise(mouseX, mouseY)*100, 0, ofNoise(ofGetWidth(), ofGetHeight())*100, 0, 1);
    
    if (fill) {
        ofFill();
    } else {
        ofNoFill();
    }
    
    for (int i = circleNumber; i > 0; i--) {
        
        noiseX = ofSignedNoise(i*scale)*i*mouseX;
        noiseY = ofSignedNoise(i*scale)*i*mouseY;

        // noiseX = ofRandom(50);
        // noiseY = ofRandom(50);
        
//        if (randomColor) {
//            circleColor.r = ofMap(ofNoise(mouseX, mouseY), 0, ofNoise(ofGetWidth(), ofGetHeight()), 0, 255);
//            circleColor.g = ofMap(ofNoise(mouseX), 0, ofNoise(ofGetWidth()), 0, 255);
//            circleColor.b = ofMap(ofNoise(mouseY), 0, ofNoise(ofGetHeight()), 0, 255);
//            circleColor.a = ofMap(mouseX, 0, ofGetWidth(), 0, 120);
//            // circleColor.r = ofMap(mouseX, 0, ofGetWidth(), 0, 255);
//            circleColor.g = ofMap(mouseY, 0, ofGetHeight(), 0, 255);
//            circleColor.b = ofMap(mouseY, 0, ofGetHeight(), 0, 255);
//            circleColor.a = ofMap(mouseX, 0, ofGetWidth(), 0, 50);

//        }
        
        //ofSetColor(circleColor);
        
        
//        if (vertical) {
//            ofCircle(circleOrigin.x + noise, circleOrigin.y + distance, circleR + increment * i);
//        
//        } else {
//            ofCircle(circleOrigin.x + distance, circleOrigin.y + noise, circleR + increment * i);
//        }
//        

        if (i % 5 == 0) {
            ofCircle(circleOrigin.x + noiseX, circleOrigin.y + noiseY, circleR + increment * i);
        } else if (i % 5 == 1) {
            ofCircle(circleOrigin.x + 10*ofNoise(i*noiseX), circleOrigin.y + 10*ofNoise(i*noiseY), circleR + increment * i);
        } else {
            ofCircle(circleOrigin.x + noiseX*0.4, circleOrigin.y + noiseY*0.6, circleR + increment * i);
        }
        
        
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == 'r') {
        circleColor.r = ofRandom(1)*255;
        // circleColor.r = ofNoise(ofGetElapsedTimef());
        //drawCircleGroup(5, , 40, 30, true, true, false);
        

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
    
    circPoint.push_back(ofPoint(x, y));
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    circColor.push_back(ofColor(ofMap(x, 0, ofGetWidth(), 0, 255)));
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
