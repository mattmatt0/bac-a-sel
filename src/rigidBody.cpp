#include "rigidBody.h" // On définit les fonctions/classes déclarées dans rigidBody.h
// Déclaration d'une méthode: "type classe::nomMéthode(type1 argument1, type2 argument 2)
//{<code de la fonction>}"

ofRectangle RigidBody::getRectangle(int screenHeight)
{
	//                             ↓↓ Pour avoir un système de coordonnées intuitif
	return ofRectangle(this->posX, screenHeight - this->posY - this->height,this->width, this->height);
}
// Constructeurs: pas de type, juste nomClasse::nomClasse(arguments...)
RigidBody::RigidBody(float posX, float posY, float height, float width)
{
	this->posX=posX; 
	this->posY=posY;
	this->width=width;
	this->height=height;
	this->accelX = 0;
	this->accelY = 0;
	this->speedX = 0;
	this->speedY = 0;
}

RigidBody::RigidBody()
{
	this->posX=0;
	this->posY=0;
	this->width=0;
	this->height=0;
	this->accelX = 0;
	this->accelY = 0;
}

void RigidBody::moveX(float x)  {
    if(this->posY <= 0) {
        this->speedX += x;
    }
}

void RigidBody::jump() {
    if(this->posY <= 0) {
        this->speedY += 15;
    }
}

void RigidBody::update()
{
	// Au départ notre accélération est nulle
	this->accelX = 0;
	this->accelY = 0;
	// Mise à jour des conditions physiques
	// (rien pour le moment)
	
	// Calcul de l'accélération grâce aux lois de Newton 
	// (juste la pesanteur pour le moment)
    if(this->posY > 0) {
		this->accelY += -0.981;
        this->accelX = -this->speedX/100;
    } else {
        this->accelX = -this->speedX/10;

		// Ça signifie qu'il est par terre
		// Sa vitesse est convertie en frottements (il arrête de tomber quoi)

		// Pour corriger si le cube tombe "dans le bas de l'écran"
        if (this->speedY<0){
            this->speedY = 0;
        }
		this->posY = 0;
	}
	
	// Vitesse
	this->speedX += this->accelX;
	this->speedY += this->accelY;
	
	// Position
	this->posX += this->speedX;
	this->posY += this->speedY;
}
