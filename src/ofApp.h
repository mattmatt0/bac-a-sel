#pragma once // Permet d'éviter l'inclusion mutliple (ne vous en souciez pas)

#include "ofMain.h" // Permet d'accéder à openFrameworks
#include "rigidBody.h" // Permet d'accéder à RigidBody, que nous avons défini dans rigidBody.h
class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    private:
        RigidBody personnage; // Notre personnage
};
