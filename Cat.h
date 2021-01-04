#ifndef CAT_H
#define CAT_H
//#include <string>
#include "Player.h"
class cat:public player{
	public:
		cat(std::string);
		~cat();
		void ShowPic(int,int);
	private:
		int P_Height;
		int P_Width;
		int O_PositionX;
		int O_PositionY;
		std::string Cat_Pic;
};
#endif //CAT_H
