//
//  butter2.cpp
//  MSfinalProject
//
//  Created by Raquel Cervantes Chacon on 12/11/15.
//
//

#include "butter2.h"
#include "ofApp.h"

int xi = 0;

void butter2::setup(){
    //flock setup
    for(int i=0; i<10; i++){
        float x = ofRandom(ofGetWidth());
        float y = ofRandom(ofGetHeight());
        float force = ofRandom(250,250);
        float dist = ofRandom(100,200);
        flock1.addAttractionPoint(x,y,force,dist);
    }
    // num, center x, center y, dev
    flock1.setup(80, ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/4 );
    
    flock1.setBounds(0,0,ofGetWidth(), ofGetHeight());
    flock1.setBoundmode(1);

    
    gifloader1.load("butterB12.gif");

}

void butter2::update(){
    flock1.update();
    if(ofGetFrameNum()%1000==0){
        flock1.removeBoid(0);
    }
    if(ofGetElapsedTimeMillis()%3){
        xi++;
        if(xi>gifloader1.pages.size()-1) xi=0;
    }
}

void butter2::draw(){
    for(int i=0; i<flock1.size(); i++){
        Boid2d * b= flock1.get(i);
        
        
        gifloader1.pages[xi].draw(b->x, b->y, 50, 50);
   
    }
}