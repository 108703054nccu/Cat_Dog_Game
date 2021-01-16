#ifndef DOG_H
#define DOG_H
#include <string>
#include "Player.h"
#include "PlayerPic.h"
class dog:public player{
	public:
		dog();
		~dog();
		void setO_PointX(int);
		void setO_PointY(int);
		char getAPixel(int,int,bool);
	private:
		int O_PointX;
		int O_PointY;
		std::string Dog_Pic;
};
#endif //DOG_H
