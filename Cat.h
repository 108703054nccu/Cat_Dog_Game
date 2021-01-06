#ifndef CAT_H
#define CAT_H
//#include <string>
#include "Player.h"
const int CatPip = 2;
const int CatHeight = 10;
const int CatWidth = 20;
static char Cat[CatPip][CatHeight][CatWidth+1] ={{
        "    *           *   ",
        "   *1*         *1*  ",
        "  *111*********111* ",
        " ****************** ",
        " ***11********11*** ",
        " ***11********11*** ",
        " ****************** ",
        "  *******aa*******  ",
        "   **************   ",
        "      ********      "
},{
        "    *           *   ",
        "   *1*         *1*  ",
        "  *111*********111* ",
        " ****************** ",
        " ****************** ",
        " ***x*********x**** ",
        " ****************** ",
        "  *******aa*******  ",
        "   **************   ",
        "      ********      "
}};
class cat:public player{
	public:
		cat();
		~cat();
		void ShowPic(int,int,bool);
	private:
		int P_Height;
		int P_Width;
		int O_PositionX;
		int O_PositionY;
		std::string Cat_Pic;
};
#endif //CAT_H
