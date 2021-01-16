#include "Dog.h"
#include <iostream>
dog::dog():player(){
	O_PointX = 0;
	O_PointY = 0;     
}
dog::~dog(){;}

char dog::getAPixel(int Height,int Width,bool ishit){
	return	 Dog[ishit][Height][Width] ;
}
