//
//  ParticleSystem.cpp
//  mySketchClass2
//
//  Created by Karla Polo on 11/3/16.
//
//

#include "ParticleSystem.hpp"

ParticleSystem::ParticleSystem(ofVec2f pos){
    myPos = pos;
    emitRate = 5;
}

void ParticleSystem::update(ofVec2f force){
    if(particleList.size() < SIZE_LIMIT){
        for(int i = 0; i< emitRate; i++){
        Particle myParticle(myPos);
            particleList.push_back(myParticle);
        }
    }
    for(int i=0; i < particleList.size(); i++){
        particleList[i].applyForce(force);
        
        float distance = (particleList[i].myPos - myPos).length();
        float velMultiplier = ofMap(distance, 0,150,4,0);
        particleList[i].update(velMultiplier);
        
        particleList[i].update(4);
    }
}

void ParticleSystem::draw(){
    for(int i = 0; i< particleList.size(); i ++){
        particleList[i].draw();
    }

}
