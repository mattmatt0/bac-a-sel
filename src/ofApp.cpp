#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    RigidBody body(20,800,200,200); // On crée un RigidBody, body
    this->personnage = body; // Qui devient notre personnage
    // "this->..." signifie que l'on accède à un attribut (variable) ou à une
    // méthode de la classe (ici ofApp)
}

//--------------------------------------------------------------
void ofApp::update()
{
    // On a créé une méthode qui permet à chaque objet de type RigidBody de
    // gérer la gravité/ses mouvements: RigidBody::update()
    if (ofGetKeyPressed('q')){
        this->personnage.moveX(-1);
    } else  if (ofGetKeyPressed('d')){
        this->personnage.moveX(1);
    }

    if (ofGetKeyPressed(' ')){
        this->personnage.jump();
    }

    this->personnage.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,0,0,255); // Pour dessiner en rouge
    ofDrawRectangle(this->personnage.getRectangle(ofGetScreenHeight())); // On dessine le rectangle correspondant à notre personnage
}

// Cette fonction est exécutée dès que l'on appuie sur une touche
void ofApp::keyPressed(int key){
	// Afficher le code associé à la touche appuyée

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
