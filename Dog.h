#ifndef DOG_H
#define DOG_H
#include <string>
#include "Player.h"
const int DogPip = 2;
const int DogHeight = 10;
const int DogWidth = 20;
static char Dog[DogPip][DogHeight][DogWidth+1] ={{
	"    a**********a    ",
	"   a************a   ",
	"  aa************aa  ",
	" aaa*aa******aa*aaa ",
	"aaa *aa******aa* aaa",
	" a ************** a ",
	"  *******aa*******  ",
	"  ****************  ",
	"   **************   ",
	"    ************    "
},{	
	"    a**********a    ",
	"   a************a   ",
	"  aa************aa  ",
	" aaa************aaa ",
	"aaa **x******x** aaa",
	" a ************** a ",
	"  *******aa*******  ",
	"  ****************  ",
	"   **************   ",
	"    ************    "

}};

class dog:public player{
	public:
		dog();
		~dog();
		void setO_PointX(int);
		void setO_PointY(int);
		void ShowPic(int,int,bool);
	private:
		int O_PointX;
		int O_PointY;
		std::string Dog_Pic;
};
#endif //DOG_H
