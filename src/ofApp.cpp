#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    text = "Bac - a - sel";
    font.load("pixelFont.ttf",20);
    position = {200,200};
    direction = {25,-15};
    last = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    position += direction*(ofGetElapsedTimeMillis() - last)/1000;
    ofRectangle r = font.getStringBoundingBox(text,position.x,position.y);
    if (r.x < 0 || r.x + r.width > ofGetWidth()){
        direction.x = -direction.x;
        direction.y += ofRandom(-2,2);
    }
    if (r.y < 0 || r.y + r.height > ofGetHeight()){
        direction.y = -direction.y;
        direction.x += ofRandom(-2,2);
    }
    last = ofGetElapsedTimeMillis();
}

//--------------------------------------------------------------
void ofApp::draw(){
    font.drawString(text,position.x,position.y);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
