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
    
    ofSetColor(193, 73, 33);
    ofBeginShape();
    ofVertex(522, 135);
    ofVertex(392, 259);
    ofVertex(560, 198);
    ofVertex(576, 172);
    ofEndShape();
    
    // TriaColor1.set(38, 191, 196);
    // TriaColor2.set(232, 230, 170);
    TriaColor.r = ofMap(mouseX, 0, ofGetWidth(), 232 , 38);
    TriaColor.g = ofMap(mouseX, 0, ofGetWidth(), 230, 191);
    TriaColor.b = ofMap(mouseX, 0, ofGetWidth(), 170, 177);
    TriaColor.a = ofMap(mouseY, 0, ofGetHeight(), 138, 222);  //?
    ofSetColor(TriaColor);
    ofTriangle(649,54, 429,410, 877,422);
    ofNoFill();
    ofSetColor(55, 45, 20);
    ofBeginShape();
    ofVertex(429, 410);
    ofVertex(649, 54);
    ofVertex(877, 422);
    ofEndShape();

    ofEllipse(511,185,40,44);
    ofFill();
    ofSetColor(237, 229, 214);
    ofEllipse(511,185,40,44);
    
    ofNoFill();
    ofSetColor(55, 45, 20);
    ofLine(511, 185, 440 + ofMap(mouseX, 0, ofGetWidth(), 0, 40), 190 + ofMap(mouseY, 0, ofGetHeight(), -10, 30));
    ofLine(511, 185, 527 + ofMap(mouseX, 0, ofGetWidth(), 0, 80), 83 + ofMap(mouseY, 0, ofGetHeight(), 0, 120));

    
    ofBeginShape();
    ofCurveVertex(804, 0);
    ofCurveVertex(794, 30);
    ofCurveVertex(788, 45);
    ofCurveVertex(778, 61);
    ofCurveVertex(773, 77);
    ofCurveVertex(779, 113);
    ofCurveVertex(783, 153);
    ofCurveVertex(775, 199);
    ofCurveVertex(789, 234);
    ofEndShape();

    ofBeginShape();
    ofCurveVertex(906, 110);
    ofCurveVertex(923, 130);
    ofCurveVertex(918, 153);
    ofCurveVertex(923, 174);
    ofCurveVertex(927, 200);
    ofCurveVertex(920, 220);
    ofCurveVertex(911, 238);
    ofCurveVertex(906, 251);
    ofCurveVertex(902, 275);
    ofEndShape();

    ofBeginShape();
    ofVertex(794, 29);
    ofVertex(914, 138);
    ofVertex(924, 129);
    ofVertex(800, 20);
    ofVertex(794, 29);
    ofEndShape();
    ofFill();
    ofSetColor(170, 55, 25);
    ofBeginShape();
    ofVertex(794, 29);
    ofVertex(914, 138);
    ofVertex(924, 129);
    ofVertex(800, 20);
    ofVertex(794, 29);
    ofEndShape();
    
    ofSetColor(241, 62, 36);
    ofBeginShape();
    ofVertex(737, 128);
    ofVertex(748, 145);
    ofVertex(970, 20);
    ofVertex(961, 7);
    ofVertex(737, 128);
    ofEndShape();
    ofNoFill();
    ofSetColor(55, 45, 20);
    ofBeginShape();
    ofVertex(737, 128);
    ofVertex(748, 145);
    ofVertex(970, 20);
    ofVertex(961, 7);
    ofVertex(737, 128);
    ofEndShape();

    ofBeginShape();
    ofCurveVertex(751, 139);
    ofCurveVertex(747, 145);
    ofCurveVertex(745, 162);
    ofCurveVertex(763, 218);
    ofCurveVertex(749, 265);
    ofCurveVertex(751, 314);
    ofCurveVertex(760, 371);
    ofEndShape();

    ofBeginShape();
    ofCurveVertex(978, 9);
    ofCurveVertex(965, 24);
    ofCurveVertex(957, 52);
    ofCurveVertex(973, 145);
    ofCurveVertex(950, 210);
    ofCurveVertex(948, 241);
    //ofCurveVertex(751, 314);
    //ofCurveVertex(760, 371);
    //ofCurveVertex(906, 251);
    //ofCurveVertex(902, 275);
    ofEndShape();

    ofBeginShape();
    ofCurveVertex(165, 495);
    ofCurveVertex(130, 472);
    ofCurveVertex(109, 449);
    ofCurveVertex(101, 432);
    ofCurveVertex(96, 405);
    ofCurveVertex(103, 384);
    ofCurveVertex(127, 359);
    ofCurveVertex(219, 353);
    //ofCurveVertex(234, 346);
    //ofCurveVertex(215, 325);
    ofCurveVertex(267, 279);
    //ofCurveVertex(303, 262);
    //ofCurveVertex(267, 234);
    ofCurveVertex(400, 208);
    ofCurveVertex(526, 128);
    ofCurveVertex(596, 92);
    ofEndShape();
    
    
    ofCircle(854, 75, 1);
    
    ofLine(392, 259, 560, 198);

    ofLine(19, 334, 306, 342);
    ofLine(46, 118, 286, 400);
    
    ofLine(323, 117, 486, 116);
    ofLine(342, 78, 350, 454);

    ofLine(194, 646, 427, 454);
 
    ofNoFill();
    ofCircle(55, 170, 4);
    ofCircle(53, 192, 6);
    ofCircle(50, 227, 8);
    ofCircle(44, 270, 12);
    ofCircle(38, 315, 14);
    ofCircle(477, 105, 1);
    ofFill();
    ofSetColor(55, 45, 20, 80);
    ofCircle(55, 170, 4);
    ofCircle(53, 192, 6);
    ofCircle(50, 227, 8);
    ofCircle(44, 270, 12);
    ofCircle(38, 315, 14);
    
    ofLine(64, 43, 60, 350);
    ofLine(192, 638, 422, 444);
    
    ofSetColor(250, 100, 40);
    ofCircle(449, 103, 5);
    ofSetColor(157, 177, 48);
    ofCircle(410, 99, 10);
    ofSetColor(39, 99, 137);
    ofCircle(368, 97, 18);
    
    // ofEnableAlphaBlending();
    ofSetColor(245, 211, 52, 88);
    ofCircle(210 + ofRandom(-1.0, 1.0), 420 + ofRandom(-1.0, 3.0), 44);
    ofSetColor(46, 104, 31, 88);
    ofCircle(206 + ofRandom(-1.0, 1.0), 424 + ofRandom(-1.0, 3.0), 44);
    // ofDisableAlphaBlending();
    
    ofSetColor(217, 53, 73, 168);
    ofCircle(512, 480, 28);
    ofSetColor(11, 56, 106, 168);
    ofCircle(490 + ofMap(mouseX, ofGetWidth() / 2, 0, 0, 16), 510 + ofMap(mouseY, ofGetHeight(), 0, -5, 10), 26);
    
    ofSetColor(237, 62, 35, 222);
    ofCircle(926, 360, 22);
    
    
    ofSetColor(255, 214);
    ofBeginShape();
    ofVertex(738, 625);
    ofVertex(737, 547);
    ofVertex(ofGetWidth(), 552);
    ofVertex(ofGetWidth(), 638);
    ofEndShape();
    
    ofSetColor(51, 130, 36, 210);
    ofRect(777, 549, 43, 28);
    ofSetColor(180, 54, 34);
    ofRect(850, 581, 57, 26);
    ofSetColor(44, 29, 115);
    ofRect(951, 610, 21, 25);
    
    // ofSetLineWidth(2);
    ofSetColor(55, 45, 20);
    ofLine(738, 625, ofGetWidth(), 638);
    ofLine(738, 601, ofGetWidth(), 614);
    ofLine(738, 576, ofGetWidth(), 585);
    ofSetLineWidth(3);
    ofLine(737, 547, ofGetWidth(), 552);
    ofSetColor(189, 106, 150, 122);
    ofLine(446, 668, ofGetWidth(), 282);
    ofSetLineWidth(9);
    ofSetColor(43, 30, 123, 178);
    ofLine(430, 668, ofGetWidth(), 218);
    ofSetLineWidth(2);

    rotate += 2;
    
    ofTranslate(864, 224);
    ofRotate(-30 + rotate);
    ofSetColor(51, 164, 212, 220);
    ofRect(-40, -30, 30, 27);
    ofTranslate(-34, 12);
    ofRotate(5 + rotate);
    ofSetColor(251, 107, 36, 240);
    ofRect(0, 0, 30, 26);
    ofSetColor(182, 50, 29, 160);
    ofTranslate(-30, -20);
    ofRotate(-10 + rotate * 0.3);
    ofRect(68, 18, 29, 28);
    
    
//    ofTranslate(-800, -216);
//    ofRotate(35 - rotate * 2.3);
//    ofFill();
//    ofSetColor(255);
//    ofCircle(mouseX, mouseY, 6);
//    
//    aLine(109,222,234,439,"dashed");
//    ofFill();
//    ofPolyline b;
//    float angle = 0;
//    while (angle < TWO_PI ) {
//        b.curveTo(100*cos(angle), 0, 100*sin(angle));
//        b.curveTo(300*cos(angle), 300, 300*sin(angle));
//        angle += TWO_PI / 30;
//    }
//    b.draw();
//    
//    ofCurve(200, 500, 230, 140, 340, 260, 400, 360);
//    ofBezier(0, 0, 100, 100, 500, 400, 800, 640);
//    
//    angleArc.curveTo(200,100);
//    angleArc.curveTo(260,160);
//    angleArc.curveTo(300,240);
//    angleArc.curveTo(340,100);
//    angleArc.draw();
    

}

void ofApp::aLine(int x1, int y1, int x2, int y2, string shape) {
    
    cout << ofDist(x1, y1, x2, y2) << endl;
    
}

void drawCurve(float pointNumber, float startPointX, float startPointY, float endPointX, float endPointY, float ctrlPointX1, float ctrlPointY1, float ctrlPointX2, float ctrlPointY2) {
    
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
