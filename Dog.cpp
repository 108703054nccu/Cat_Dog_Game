#include "Dog.h"
#include <iostream>
dog::dog():player(){
	O_PointX = 0;
	O_PointY = 0;     
}
dog::~dog(){;}

void dog::ShowPic(int Height,int Width,bool ishit){
	Color::Modifier bgdef(Color::BG_DEFAULT);
	Color::Modifier bgwhite(Color::BG_WHITE);
	Color::Modifier bgred(Color::BG_RED);
	Color::Modifier bgblack(Color::BG_BLACK);
	Color::Modifier bgpurple(Color::BG_PURPLE);
	if(Dog[ishit][Height][Width] == '*')std::cout<<bgwhite<<" "<<bgdef;
	else if(Dog[ishit][Height][Width] == 'a')std::cout<<bgblack<<" "<<bgdef;
	else if(Dog[ishit][Height][Width] == 'x')std::cout<<bgred<<" "<<bgdef;
	else std::cout<<bgpurple<<" "<<bgdef;
}
