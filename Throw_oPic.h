#ifndef THROW_OPIC_H
#define THROW_OPIC_H
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
#endif //THROW_OPIC_H
