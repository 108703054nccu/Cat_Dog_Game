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
const int FishPip = 2;
const int FishHeight = 5;
const int FishWidth = 10;
static char Fish[FishPip][FishHeight][FishWidth+1] = {{
	"       *  ",
	"    ******",
	"  *****   ",
	" *****    ",
	" ***      "	
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
		void setOPosition(int,int);
		int getWeight();
		int getOPositionX();
		int getOPositionY();
	private:
		int Weight;
		int OPositionX;
		int OPositionY;	
};
class stone:public throw_o{
	public:
		stone();
		~stone();
		void ShowPic(int,int,bool);
	private:
};
class fish:public throw_o{
	public:
		fish();
		~fish();
		void ShowPic(int,int,bool);
	private:
};
#endif // THROW_O_H
