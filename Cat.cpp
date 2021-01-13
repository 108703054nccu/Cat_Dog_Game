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
	Color::Modifier bg_purple(Color::BG_PURPLE);
	if(Cat[ishit][Height][Width] == '*')std::cout<<bg_white<<" "<<bg_def;
	else if(Cat[ishit][Height][Width] == '1')std::cout<<bg_black<<" "<<bg_def;
	else if(Cat[ishit][Height][Width] == 'x')std::cout<<bg_white<<"x"<<bg_def;
	else std::cout<<bg_purple<<" "<<bg_def;
}
