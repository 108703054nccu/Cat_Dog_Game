#include "Dog.h"
#include <iostream>
dog::dog(std::string name):player(){
		O_PointX = 0;
		O_PointY = 0;
		Dog_Pic[7] ={ \
"     ........     \n", 
"    .        .    \n", 
"   .. o    o ..   \n", 
"  ...        ...  \n", 
"   ..    o   ..   \n", 
"    .   ---  .    \n", 
"     ........     \n"
		};
}
dog::~dog(){;}

void dog::ShowPic(int Height,int Width){
	for(int i =0; i<Height ;i++)
		std::cout<<Dog_Pic[i];
}

