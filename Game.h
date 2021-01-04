#ifndef GAME_H
#define GAME_H
#include <string>
#include "Dog.h"
#include "Cat.h"
class game{
	public:
		game();
		~game();
		void StartGame();
		void ShowGame(int , int);
		bool IsHit(float,float,int);//target pos, O_throw pos, power, angle 
		void setDogPosition(float);
		void setCatPosition(float);
		float getDogPosition();
		float getCatPosition();
	private:
		//dog DogPlayer;
		//cat CatPlayer;
};


#endif //GAME_H
