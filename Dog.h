#ifndef DOG_H
#define DOG_H
#include <string>
#include "Player.h"
class dog:public player{
	public:
		dog(std::string);
		~dog();
		void ShowDog();
		void setO_PointX(int);
		void setO_PointY(int);
		void ShowPic(int,int);
		int getBorderX();
		int getBorderY();
	private:
		int P_Height;
		int P_Width;
		int O_PointX;
		int O_PointY;
		std::string Dog_Pic[7][];
};
#endif //DOG_H
