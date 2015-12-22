#include "ofApp.h"

int byteData;

//--------------------------------------------------------------
void ofApp::setup(){
    
    //setting serial
    
    serial.setup("/dev/tty.usbmodem1421", 9600);
    
    //setting music
    
    birds.load("birds2.mp3");
    birds.play();
    birds.setLoop(true);
    
    traffic.load("Drill Press.wav");
    traffic.play();
    traffic.setLoop(true);
    traffic.setVolume(0);
    
    //setting background
    ofSetBackgroundAuto(true);
    fundo.load("background.jpg");
    
    //setting classes
    butter1.setup();
    butter2.setup();
    
    oili.setup();
    
 

}

//--------------------------------------------------------------
void ofApp::update(){
   
    //update serial
    if(serial.available()>0){
        byteData = serial.readByte();
    }
    else{
        while(serial.available()>0){
            byteData = serial.readByte();
        }
    }
    
    if(int(byteData)<20){
        birds.setVolume(0);
        traffic.setVolume(1);
         oili.update();
    }else{
        traffic.setVolume(0);
        birds.setVolume(1);
        oily.clear();
       
    
       }
    
    butter1.update();
    butter2.update();
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
     ofSetFullscreen(fullScreen);
    
    fundo.draw(0,0, ofGetWindowWidth(), ofGetWindowHeight());
   
    
    if(int(byteData)<20){
        oili.draw();
    }else{
        butter1.draw();
        butter2.draw();
        oily.clear();
        
    }
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case 'f':
            ofToggleFullscreen();
            break;
            
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
