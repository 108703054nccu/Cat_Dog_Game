#include "Throw_o.h"

throw_o::throw_o(){
	Weight = 0;
	OPositionX = 0;
	OPositionY = 0;
}

throw_o::~throw_o(){;}

void throw_o::setWeight(int w){
	Weight = w;
}


void throw_o::setOPosition(int x,int y){
	OPositionX = x;
	OPositionY = y;
	return;
}

int throw_o::getWeight(){
	return Weight;
}

int throw_o::getOPositionX(){
	return OPositionX;
}

int throw_o::getOPositionY(){
	return OPositionY;
}

stone::stone(){;}

stone::~stone(){;}

void stone::ShowPic(int height,int width,bool ishit){
	Color::Modifier bgwhite(Color::BG_WHITE);
	Color::Modifier bgdef(Color::BG_DEFAULT);
	Color::Modifier bgpurple(Color::BG_PURPLE);
	if(Stone[ishit][height][width] == '*')std::cout<<bgwhite<<" "<<bgdef;
	else std::cout<<bgpurple<<" "<<bgdef;
}

char stone::getAPixel(int height,int width,bool ishit){
	return Stone[ishit][height][width]; 
}
fish::fish(){;}

fish::~fish(){;}

void fish::ShowPic(int height, int width, bool ishit){
	Color::Modifier bgwhite(Color::BG_WHITE);
	Color::Modifier bgdef(Color::BG_DEFAULT);
	Color::Modifier bgpurple(Color::BG_PURPLE);
	if(Fish[ishit][height][width] == '*')std::cout<<bgwhite<<" "<<bgdef;
	else std::cout<<bgpurple<<" "<<bgdef;
}

char fish::getAPixel(int height, int width, bool ishit){
	return Fish[ishit][height][width]; 
}

