#ifndef CAT_H
#define CAT_H
#include "Player.h"
#include "PlayerPic.h"
class cat:public player{
	public:
		cat();
		~cat();
		char getAPixel(int,int,bool);
	private:
		int O_PositionX;
		int O_PositionY;
		std::string Cat_Pic;
};
#endif //CAT_H
