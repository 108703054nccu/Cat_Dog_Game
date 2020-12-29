#include "Player.h"

player::player(std::string playername){
	Name = new std::string;
	Position = new float;
	Name = playername;
	Position=0.0f;//random number in a range
}
player::~player(){
	delete Name;
	delete Position;
}
float player::getPosition(){ return Position;}
void player::setPosition(float now) {if(!Position) Position = now;}
std::string player::getName() {return Name;}
void player::setName(std::string name){ if(!Name) Name = name;}
int player::getLife(){ return life; }
int player::getPower(){ return power; }
void player::setLife(int l){ life = l;}
void player::setPower(int p){ power=p;}
