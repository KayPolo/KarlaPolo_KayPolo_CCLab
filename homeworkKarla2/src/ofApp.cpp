#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gravity = ofVec2f(0.f, 0.f);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i< systemList.size(); i++){
        systemList[i].update(gravity);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i< systemList.size(); i++){
        systemList[i].draw();
    }
    
//    int x = ofGetWindowWidth()/2;
//    int y = ofGetWindowHeight()/2;
////    int button;
//    
//    ParticleSystem mySystem(ofVec2f(x,y));
//    systemList.push_back(mySystem);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 'p'){
        int x = ofGetWindowWidth()/2;
        int y = ofGetWindowHeight()/2;
        
        ParticleSystem mySystem(ofVec2f(x,y));
        systemList.push_back(mySystem);
    }
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
    // if we click and releasse we want to generate a particle system
    // at position x
//    ParticleSystem mySystem(ofVec2f(x,y));
//    systemList.push_back(mySystem);

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
