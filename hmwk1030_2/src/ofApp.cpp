#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    curveMode = false;
    pen.setup();

}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    pen.pos.set(mouseX, mouseY);
    pen.drawCircle();
    
    //if (curveMode) {
    ofBeginShape();
        for (int i = 0; i < curveGroup.size(); i++) {
            ofSetColor(ofColor(curveGroup[i].clr));
            curveGroup[i].drawCurveVertex();
        }
    ofEndShape();

    //} else {
        for (int i = 0; i < trail.size(); i++) {
            trail[i].drawCircle();
        }
    //}
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == ' ') {
        trail.clear();
        curveGroup.clear();
    }
    
    if (key == 'z') {
        if (curveMode) {
            curveGroup.erase(curveGroup.begin()+curveGroup.size()-1);
        } else {
            trail.erase(trail.begin()+trail.size()-1);
        }
    }
    if (key == 'Z') {
        if (curveMode) {
            curveGroup.erase(curveGroup.begin()+curveGroup.size()-2);
        }
    }

    if (key == ',') {
        curveMode = false;
    } else if (key == '.') {
        curveMode = true;
    }
    
    pen.change(key);
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

    if (curveMode) {
        curve.clr.set(ofColor(pen.clr));
        curve.curvePos.push_back(ofPoint(x,y));
    } else {
        penTool point;
        point.clr.set(ofColor(pen.clr));
        point.pos.set(x, y);
        point.rad = pen.rad;
        trail.push_back(point);
    }

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    curveGroup.push_back(curve);
    curve.curvePos.clear();
    
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
