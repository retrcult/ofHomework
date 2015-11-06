#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    bgmusic.loadSound("hook.mp3");
    bgmusic.play();
    
    //hookmv.loadMovie("hook.mv");
    //hookmv.play();
    
    f.loadFont("jl.ttf", ofRandom(16,24));

    ofFile text("string.txt");
    ofBuffer buff = text.readToBuffer();
    string t = buff;
    ofUTF8Ptr iter = ofUTF8::beginPtr(t);
    ofUTF8Ptr stop = ofUTF8::endPtr(t);
    
    while (iter<stop) {
        charSystem c;
        c.setup();
        ofUniChar x = ofUTF8::getNext(iter);
        c.s = ofTextConverter::toUTF8(x);
        chars.push_back(c);
    }
    
    // cout << chars.size() << endl;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i < chars.size(); ++i) {
        chars[i].update();
        chars[i].wrapAround();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i = 0; i < chars.size(); ++i) {
        chars[i].draw();
        f.drawString(chars[i].s, chars[i].p.x, chars[i].p.y);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == 'p'){
        if (bgmusic.getIsPlaying()) {
            bgmusic.stop();
        }
        else {
            bgmusic.play();
        }
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
