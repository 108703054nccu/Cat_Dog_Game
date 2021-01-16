#include "Cat.h"

cat::cat():player(){
	O_PositionX = 0;
	O_PositionY = 0;
}

cat::~cat(){;}

char cat::getAPixel(int Height,int Width,bool ishit){
	return Cat[ishit][Height][Width]; 
}
