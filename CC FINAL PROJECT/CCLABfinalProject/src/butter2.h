//
//  butter2.h
//  MSfinalProject
//
//  Created by Raquel Cervantes Chacon on 12/11/15.
//
//

#ifndef butter2_h
#define butter2_h

#include <stdio.h>

#include "ofMain.h"
#include "Flock2d.h"
#include "ofxGif.h"

class butter2{
public:
    void setup();
    void update();
    void draw();
    
    ofxGIF::fiGifLoader gifloader1;
    Flock2d flock1;
};

#endif /* butter2_h */
