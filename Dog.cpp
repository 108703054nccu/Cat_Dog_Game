#include "Dog.h"
#include <iostream>
dog::dog():player(){
	O_PointX = 0;
	O_PointY = 0;     
}
dog::~dog(){;}

void dog::ShowPic(int Height,int Width,bool ishit){
	Color::Modifier bg_def(Color::BG_DEFAULT);
	Color::Modifier bg_white(Color::BG_WHITE);
	Color::Modifier bg_red(Color::BG_RED);
	Color::Modifier bg_black(Color::BG_BLACK);
	if(Dog[ishit][Height][Width] == '*')std::cout<<bg_white<<" "<<bg_def;
	else if(Dog[ishit][Height][Width] == 'a')std::cout<<bg_black<<" "<<bg_def;
	else std::cout<<" ";
}
