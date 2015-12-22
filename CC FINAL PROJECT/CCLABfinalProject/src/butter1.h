//
//  butter1.h
//  MSfinalProject
//
//  Created by Raquel Cervantes Chacon on 12/11/15.
//
//

#ifndef butter1_h
#define butter1_h

#include <stdio.h>

#include "ofMain.h"
#include "Flock2d.h"
#include "ofxGif.h"

class butter1{
public:
    void setup();
    void update();
    void draw();
    
    ofxGIF::fiGifLoader gifloader;
    Flock2d flock;
};

#endif /* butter1_h */
