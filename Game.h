#ifndef GAME_H
#define GAME_H
#include "Dog.h"
#include "Cat.h"
class game{
	public:
		void StartGame();
		void ShowGame(float,float,float,bool);
		bool IsHit(float,float,int);
		void setDogPosition(float);
		void setCatPosition(float);
		float getDogPosition();
		float getCatPosition();
	private:
		dog DogPlayer;
		cat CatPlayer;
};


#endif //GAME_H
