//
//  oil.cpp
//  MSfinalProject
//
//  Created by Raquel Cervantes Chacon on 12/11/15.
//
//

#include "oil.h"
#include "ofApp.h"

int counter = 0;

void oil::setup(){

    box2d.init();
    box2d.setGravity(0,0);
    box2d.setFPS(30.0);
    box2d.createBounds();
    
    ofColor color;
    color.set(0);
    particles.setParticleFlag(b2_tensileParticle);
    particles.loadImage("particle32.png");
    particles.setup(box2d.getWorld(), 10000,100.0, 6.0, 60.0,color);
   
}

void oil::update(){
    
    box2d.update();
}

void oil::draw(){
    particles.draw();
    
    
    ofSetHexColor(0xffffff);
    for(int i=0; i<5; i++) {
        float radius = ofRandom(60, 80);
        float x = cos(ofRandom(PI * 2.0)) * radius + 600;
        float y = sin(ofRandom(PI * 2.0)) * radius + 0;
        ofVec2f position = ofVec2f(x, y);
        ofVec2f velocity = ofVec2f(0, 20);
        ofColor color;
        particles.setColor(color);
        particles.createParticle(position, velocity);
      
    }
    
}

void oil::clear(){
    
}


