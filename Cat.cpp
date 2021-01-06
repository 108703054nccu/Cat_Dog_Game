#include "Cat.h"

cat::cat():player(){
	O_PositionX = 0;
	O_PositionY = 0;
}

cat::~cat(){;}

void cat::ShowPic(int Height,int Width,bool ishit){
	Color::Modifier bg_def(Color::BG_DEFAULT);
	Color::Modifier bg_white(Color::BG_WHITE);
	Color::Modifier bg_red(Color::BG_RED);
	Color::Modifier bg_black(Color::BG_BLACK);
	if(Cat[0][Height][Width] == '*')std::cout<<bg_white<<" "<<bg_def;
	else if(Cat[0][Height][Width] == '1')std::cout<<bg_black<<" "<<bg_def;
	else std::cout<<" ";
}
