#pragma once

#include "ofMain.h"

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
    
    
    float cRadius, friction;
    
    int resol;
    int resolB;
    
    ofVec2f cPos;
    ofVec2f velocity;
    ofVec2f velocityB;
    ofVec2f accel;
    ofVec3f color;
    ofVec3f colorB;
    
    ofVec2f cPosB;
   
    
    const float MIN_VELOCITY = 0.1;
    

    
    
};
