#include "Throw_o.h"

throw_o::throw_o(){
	Weight = 0;
	PositionX = 0;
	PositionY = 0;
}

throw_o::~throw_o(){;}

void throw_o::setWeight(int w){
	Weight = w;
}

void throw_o::setPosition(int x,int y){
	PositionX = x;
	PositionY = y;
	return;
}

int throw_o::getWeight(){
	return Weight;
}

int throw_o::getPositionX(){
	return PositionX;
}

int throw_o::getPositionY(){
	return PositionY;
}

stone::stone(){
	O_PointX = 0;
	O_PointY = 0;
}

stone::~stone(){;}

stone::ShowPic(int width,int height,bool ishit){
	
}
