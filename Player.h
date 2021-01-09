#ifndef PLAYER_H
#define PLAYER_H
#include "Color_m.h"
#include <string>
#include <iostream>
class player{
	public:
	 	player();
		~player();
		void setPosition(float);
		void setOPosition(int,int);
		void setName(std::string);
		void setLife(int);
		void setPower(int);
		float getPosition();
		int getLife();
		int getPower();
		int getOPositionX();
		int getOPositionY();
		std::string getName();
	private:
		float Position;
		int OPositionX;
		int OPositionY;
		std::string Name;
		int Life;
		int Power;	
};
#endif	//PLAYER_H
