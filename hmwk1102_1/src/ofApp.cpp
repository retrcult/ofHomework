#include "ofApp.h"
// #include <algorithm>


//--------------------------------------------------------------
void ofApp::setup(){
    
    completeImg.loadImage("2pic.jpg");
    completeImg.resize(cImgX, cImgY);
    
    successSnd.loadSound("1034.mp3");
    warningSnd.loadSound("02028.wav");
    completeSnd.loadSound("79114.wav");
    
    for (int i = 0; i < ROW * ROW; ++i) {
        orders.push_back(i);
    }
    ofRandomize(orders);
    
    for (int i = 0; i < ROW * ROW; ++i) {
        ofImage img;
        img.loadImage("53344723.jpg");
        img.resize(W, H);
        img.crop((i/ROW)*w, (i%ROW)*h, w, h);
        slices.push_back(img);
    }
    
    recR = 0, recC = 0;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    complete = true;
    for (int i = 0; i < orders.size(); i++) {
        if (i != orders[i]) {
            complete = false;
        }
    }
    
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < ROW; j++) {
            slices[orders[i*ROW+j]].draw(i*w, j*h);
        }
    }
    
    if (complete) {
        completeSnd.play();
        completeImg.draw((W-cImgX)/2, (H-cImgY)/2);
    } else {
        ofSetColor(255);
        ofRect(recR*w,recC*h,w,h);
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'r') {
        ofRandomize(orders);
    }
    
    if (key == OF_KEY_UP) dir = 0;
    if (key == OF_KEY_LEFT) dir = 1;
    if (key == OF_KEY_DOWN) dir = 2;
    if (key == OF_KEY_RIGHT) dir = 3;
    
    if (dir < 0) return;
    int xx = recR + mvx[dir], yy = recC + mvy[dir];
    if (xx < 0 || xx >= ROW || yy < 0 || yy >= ROW) { //?!!
        warningSnd.play();
    } else {
        swap(orders[recR*ROW + recC], orders[xx*ROW + yy]);
        recR = xx; recC = yy;
        successSnd.play();
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
