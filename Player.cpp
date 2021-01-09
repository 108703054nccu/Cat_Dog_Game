#include "Player.h"
#define InitLife 10
player::player(){
	Name = "";
	Position = 0.0f;
	Power = 0;
	Life = 10;
}

player::~player(){;}

void player::setPosition(float x){
	Position = x;	
}
void player::setOPosition(int x,int y) {
	OPositionX = x;
	OPositionY = y;
}

void player::setName(std::string name){
	Name = name;
}

void player::setLife(int l){ 
	Life = l;
}

void player::setPower(int p){ 
	Power=p;
}

int player::getPower(){
	return Power;
}

int player::getLife(){
	return Life;
}

float player::getPosition(){
	return Position;
}

std::string player::getName(){
	return Name;
}

int player::getOPositionX(){
	return OPositionX;
}

int player::getOPositionY(){
	return OPositionY;
}
