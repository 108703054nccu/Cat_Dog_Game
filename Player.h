#ifndef PLAYER_H
#define PLAYER_H
#include <string>
class player{
	public:
	 	player();
		~player();

		void setPosition(float);
		void setName(std::string);
		void setLife(int);
		void setPower(int);
		float getPosition();
		int getLife();
		int getPower;
		std::string getName();
	private:
		float Position;
		std::string Name;
		int Life;
		int Power;
		int O_throw;	
};
#endif	//PLAYER_H
