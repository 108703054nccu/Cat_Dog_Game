#include "Cat.h"

cat::cat():player(){
	O_PositionX = 0;
	O_PositionY = 0;
}

cat::~cat(){;}

void cat::ShowPic(int Height,int Width,bool ishit){
	Color::Modifier bgdef(Color::BG_DEFAULT);
	Color::Modifier bgwhite(Color::BG_WHITE);
	Color::Modifier bgred(Color::BG_RED);
	Color::Modifier bgblack(Color::BG_BLACK);
	Color::Modifier bgpurple(Color::BG_PURPLE);
	if(Cat[ishit][Height][Width] == '*')std::cout<<bgwhite<<" "<<bgdef;
	else if(Cat[ishit][Height][Width] == '1')std::cout<<bgblack<<" "<<bgdef;
	else if(Cat[ishit][Height][Width] == 'x')std::cout<<bgred<<" "<<bgdef;
	else std::cout<<bgpurple<<" "<<bgdef;
}
