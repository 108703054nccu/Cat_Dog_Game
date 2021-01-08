#ifndef THROW_O_H
#define THROW_O_H
#include "Color_m.h"
const int StonePip = 2;
const int StoneHeight = 5;
const int StoneWidth = 10;
static char Stone[StonePip][StoneHeight][StoneWidth+1] = {{
	"  ******  ",
	"**********",
	"**********",
	"**********",
	"  ******  "	
},{
	"   *   * *",
	"*     *   ",
	"  *   *  *",
	"    *     ",
	"*    *   *"	
}};
class throw_o{
	public:
		throw_o();
		~throw_o();
		void setWeight(int);
		void setPosition(int,int);
		int getWeight();
		int getPositionX();
		int getPositionY();
	private:
		int Weight;
		int PositionX;
		int PositionY;	
};
class stone:public throw_o{
	public:
		stone();
		~stone();
		void ShowPic(int,int,bool);
	private:
		int O_PointX;
		int O_PointY;
};
#endif // THROW_O_H
