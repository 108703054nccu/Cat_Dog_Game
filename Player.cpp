#include "Player.h"
#define InitLife 10
player::player(std::string playername){
	Name = playername;
	Position = 0.0f;
	Power = 0;
	Life = 10;
}

player::~player(){;}

void player::setPosition(float now) {
	Position = now;
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

int getPower(){
	return Power;
}

int getLife(){
	return Life;
}

float getPosition(){
	return Position;
}

std::string getName(){
	return Name;
}
