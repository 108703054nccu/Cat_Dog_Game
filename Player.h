#ifndef PLAYER_H
#define PLAYER_H
#include <string>
class player{
	public:
	 	player(std::string &name);
		~player();
		void setPosition(float);
		float getPosition() ;
		void setName(std::string);
		std::string getName() const;
		int getLife();
		int getPower();
		void setLife(int);
		void setPower(int);
	private:
		float *Position;
		std::string *Name;
		int life;
		int power;	
};
#endif	//PLAYER_H
