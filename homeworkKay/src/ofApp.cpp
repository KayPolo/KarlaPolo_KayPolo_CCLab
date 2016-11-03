#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cPos = ofVec2f (ofGetWidth()*0.5, ofGetHeight()*0.5);
    cRadius = 90;
    cPosB = ofVec2f (ofGetWidth()*0.25, ofGetHeight()*0.25);
    friction = 0.99999;
    ofSetBackgroundColor(0, 0, 20);
    resol = 6;
    resolB = 3;
    
    color = ofVec3f(int(ofRandom(0,255)),int(ofRandom(0,255)),int(ofRandom(0,255)));
    
    colorB = ofVec3f(int(ofRandom(0,255)),int(ofRandom(0,255)),int(ofRandom(0,255)));
}

//--------------------------------------------------------------
void ofApp::update(){
    cPos += velocity;
    
    if(velocity.length()>0){
        velocity *= ofVec2f(friction);
        cPos += velocity;
    }
    if(velocity.length()<MIN_VELOCITY){
        velocity = ofVec2f(0);
    }
    if(cPos.x > ofGetWidth() || cPos.x < (0)){
        velocity.x=velocity.x* (-1);
         ofSetCircleResolution(int(ofRandom(3,10)));
    }
    
    
    if(cPos.y > ofGetHeight() || cPos.y < (0)){
        velocity.y=velocity.y* (-1);
         ofSetCircleResolution(int(ofRandom(3,10)));
    }
    
    
    cPosB += velocityB;
    if(velocity.length()>0){
        velocityB *= ofVec2f(friction);
        cPosB += velocityB;
    }
    if(velocityB.length()<MIN_VELOCITY){
        velocityB = ofVec2f(0);
    }
    if(cPosB.x > ofGetWidth() || cPosB.x < (0)){
        velocityB.x=velocityB.x* (-1);
        ofSetCircleResolution(int(ofRandom(4,15)));
    }
    
    
    if(cPosB.y > ofGetHeight() || cPosB.y < (0)){
        velocityB.y=velocityB.y* (-1);
        ofSetCircleResolution(int(ofRandom(4,15)));
    }

    
    
    
//    if(cPos.x == 0 || cPos.x == ofGetWidth() || cPos.y ==0 || cPos.y== ofGetHeight()){
////        resol= ofRandom(3,5);
//       
//    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(color.x,color.y,color.z);
    ofDrawCircle(cPos, cRadius);
    
    ofSetColor(colorB.x,colorB.y,colorB.z);
    ofDrawCircle(cPosB, cRadius);

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
    ofVec2f mousePos = ofVec2f(x,y);
    color = ofVec3f(int(ofRandom(0,255)),int(ofRandom(0,255)),int(ofRandom(0,255)));
    colorB = ofVec3f(int(ofRandom(0,255)),int(ofRandom(0,255)),int(ofRandom(0,255)));
    cout << mousePos<<endl;
    
    accel = cPos - mousePos;
    accel = cPosB + mousePos;
    accel = accel.getNormalized();
    cout <<"accel:"<< accel<<endl;
    
    velocity += accel;
    velocityB += accel;

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



