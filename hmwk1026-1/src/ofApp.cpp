#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int triangleNumPerLine = 10;
    float w = ofGetWidth() / triangleNumPerLine;
    float h = ofGetHeight() / triangleNumPerLine;
    float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 0.618);
    float noise;
    ofColor triangleColor;
    ofPoint a, b, c, d;

    // vertical
    for (int i=0;i<triangleNumPerLine;++i) {
        
        // horizontal
        for (int j=0;j<triangleNumPerLine;++j){
            
            noise = ofNoise(scale*sqrt((i+1)*(j+1)), ofGetFrameNum()/20);
            
            a = ofPoint(w*i, h*j);
            b = ofPoint(w*i, h*j+h);
            c = ofPoint(w*i+w, h*j+h);
            d = ofPoint(w*i+w, h*j);
            
            if ((i + j) % 2 == 0){
                randomColor(triangleColor, noise);
                ofTriangle(a, b, c);
                randomColor(triangleColor, noise*ofRandom(0.618));
                ofTriangle(a, c, d);
            } else {
                randomColor(triangleColor, noise);
                ofTriangle(a, b, d);
                randomColor(triangleColor, noise*0.618);
                ofTriangle(b, c, d);
            }
        }
    }
    
    
}

//--------------------------------------------------------------


//--------------------------------------------------------------
void ofApp::randomColor(ofColor color, float x){
    
    color.r = ofMap(x*mouseX, 0, ofGetWidth(), 10, 80);
    color.g = ofMap(x*mouseY, 0, ofGetHeight(), 80, 210);
    color.b = ofMap(x*mouseY, 0, ofGetHeight(), 100, 220);
    color.a = ofMap(x*mouseX, 0, ofGetWidth(), 90, 240);
    ofSetColor(color);
    
};

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
