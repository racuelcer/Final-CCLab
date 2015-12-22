//
//  oil.h
//  MSfinalProject
//
//  Created by Raquel Cervantes Chacon on 12/11/15.
//
//

#ifndef oil_h
#define oil_h

#include <stdio.h>

#include "ofMain.h"
#include "ofxLiquidFun.h"


class oil{
public:
    void setup();
    void update();
    void draw();
    void clear();
   
    ofxBox2d box2d;
    ofxBox2dParticleSystem particles;
    
    
};


#endif /* oil_hpp */