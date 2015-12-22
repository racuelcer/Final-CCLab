//
//  butter1.cpp
//  MSfinalProject
//
//  Created by Raquel Cervantes Chacon on 12/11/15.
//
//

#include "butter1.h"
#include "ofApp.h"

int in = 0;

void butter1::setup(){
    //flock setup
    
    for(int i=0; i<10; i++){
        float x = ofRandom(ofGetWidth());
        float y = ofRandom(ofGetHeight());
        float force = ofRandom(-250,-250);
        float dist = ofRandom(-100,-200);
        flock.addAttractionPoint(x,y,force,-dist);
    }
    // num, center x, center y, dev
    flock.setup(80, ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/4 );
    
    flock.setBounds(0,0,ofGetWidth(), ofGetHeight());
    flock.setBoundmode(0);
    //gif
    gifloader.load("buttermonarc.gif");
    
}

void butter1::update(){
    flock.update();
    if (ofGetFrameNum()%1000==0){
        flock.removeBoid(0);
    }
    if(ofGetElapsedTimeMillis()%3){
        in++;
        if(in>gifloader.pages.size()-1) in=0;
    }
    
}

void butter1::draw(){
    for (int i=0; i<flock.size(); i++){
        Boid2d* b= flock.get(i);
        
       
        gifloader.pages[in].draw(b->x, b->y, 50, 50);
        
    }
}