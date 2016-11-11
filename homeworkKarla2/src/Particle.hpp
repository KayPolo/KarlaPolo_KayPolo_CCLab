//
//  Particle.hpp
//  mySketchClass2
//
//  Created by Karla Polo on 11/3/16.
//
//

#pragma once
#include "ofMain.h"

class Particle {
public:
    Particle(ofVec2f pos);
    
    void applyForce(ofVec2f force);
    void update(float multiplier);
    void draw ();
    void keyPressed(int key);
    
    ofVec2f myPos, myVel, myAccel;
    float myLifeSpan;
    const float INITIAL_LIFE_SPAN = 0;

};
