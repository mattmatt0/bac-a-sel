#pragma once // Vous occupez pas de ça
#include "ofMain.h" // Pour pouvoir accéder à openFrameworks, plus particulièrement ofRectangle

class RigidBody
{
 public:
     RigidBody(); // Constructeur vide
     RigidBody(float posX, float posY, float width, float height); // Constructeur plus utile
     ofRectangle getRectangle(int screenHeight); // Pour obtenir le rectangle associé
     void update(); // Pour la gravité

     void moveX(float x);
     void jump();

     float posX; 
 private:
     float width;
     float height;
     float posY; 
     float speedX;
     float speedY;
     float accelX;
     float accelY;
};
