#ifndef THROW_O_H
#define THROW_O_H
#include "Color_m.h"
#include "Throw_oPic.h"
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
		char getAPixel(int,int,bool);
	private:
};
class fish:public throw_o{
	public:
		fish();
		~fish();
		void ShowPic(int,int,bool);
		char getAPixel(int,int,bool);
	private:
};
#endif // THROW_O_H
