//
//  Particle.cpp
//  mySketchClass2
//
//  Created by Karla Polo on 11/3/16.
//
//

#include "Particle.hpp"

Particle::Particle(ofVec2f pos){
    
    float INITIAL_LIFE_SPAN = 200.0f;
    
    myPos = pos;
    myVel = ofVec2f (ofRandom(-90,45), ofRandom(-45,180));
    myAccel = ofVec2f(0);
    myLifeSpan = INITIAL_LIFE_SPAN;
}

void Particle::applyForce(ofVec2f force){
    myAccel = force;
}

void Particle::update(float multiplier){
    myVel += myAccel;
    myPos += myVel * multiplier*2;
    
    if(myLifeSpan>0){
        myLifeSpan -= 0.5f;
    }
}

void Particle::draw (){
    float INITIAL_LIFE_SPAN = 200.0f;
    
    if(myLifeSpan>200){
        ofSetColor (0);
    } else {
        ofSetColor (ofRandom(0, 255),ofRandom(0,255),ofRandom(0, 255));
    }
    ofDrawCircle(myPos, ofMap(myLifeSpan, 5, 100, 5, 20));
}

void Particle::keyPressed(int key){
    if (key == GLFW_KEY_KP_ENTER){
        float INITIAL_LIFE_SPAN = 0;
        
    }

}
