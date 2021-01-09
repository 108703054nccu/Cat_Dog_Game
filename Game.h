#ifndef GAME_H
#define GAME_H
#include <string>
#include "Dog.h"
#include "Cat.h"
#include "Throw_o.h"
enum class status{
	HIT_FRONT,
	HITED,
	HIT_BEHIND
};
enum class character{
	DOG,
	CAT,
	EMPTY
};
class game{
	public:
		game();
		~game();
		void StartGame();
		void ShowGame(status,bool,bool,character);
		bool IsHit(float,float,int);//target pos, O_throw pos, power, angle 
		void setDogPosition(float);
		void setCatPosition(float);
		float getDogPosition();
		float getCatPosition();
	private:
		dog DogPlayer;
		cat CatPlayer;
		stone StoneObject;
		fish FishObject;
};


#endif //GAME_H
