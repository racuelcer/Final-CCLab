#pragma once

#include "ofMain.h"
#include "butter1.h"
#include "butter2.h"
#include "oil.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    butter1 butter1;
    butter2 butter2;
    
    oil oili;
    
    vector<oil> oily;
    
    ofSoundPlayer birds;
    ofSoundPlayer traffic;
    ofImage fundo;
    
    ofVideoPlayer video;
    
    string msg;
    ofSerial serial;
    
    
    ofParameter<bool> fullScreen;
    
  
    
		
};
