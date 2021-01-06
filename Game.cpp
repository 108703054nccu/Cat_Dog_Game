#include "Game.h"
#include <iostream>
#include <string>
#include <unistd.h>
#define Map_Height 30
#define Distance 90 
game::game(){;}

game::~game(){;}

void game::ShowGame(int time1,int time2,status s){
	//notgetstone
	//cin which command get
	//if not get,sleep
	for(int i=0; i<Map_Height; i++){
		for(int j=0; j<DogWidth; j++){
			if(i>Map_Height-DogHeight){
				DogPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		for(int j=0; j<Distance; j++){
			if(i>Map_Height-CatHeight){
				std::cout<<" ";
			}
		}
		for(int j=0; j<CatWidth; j++){
			if(i>Map_Height-CatHeight){
				CatPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		std::cout<<std::endl;
	}
	sleep(2);
	system("clear");
	//getstone	
	for(int i=0; i<Map_Height; i++){
		for(int j=0; j<DogWidth; j++){
			if(i>Map_Height-DogHeight){
				DogPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		for(int j=0; j<Distance; j++){
			if(i>Map_Height-CatHeight){
				std::cout<<" ";
			}
		}
		for(int j=0; j<CatWidth; j++){
			if(i>Map_Height-CatHeight){
				CatPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		std::cout<<std::endl;
	}	
	sleep(2);
	system("clear");
	//shot for loop
	for(int i=0; i < time1; i++){
		for(int i=0; i<Map_Height; i++){
			for(int j=0; j<DogWidth; j++){
				if(i>Map_Height-DogHeight){
					DogPlayer.ShowPic(i-DogHeight,j,0);
				}
			}
			for(int j=0; j<Distance; j++){
				if(i>Map_Height-CatHeight){
					std::cout<<" ";
				}
			}
			for(int j=0; j<CatWidth; j++){
				if(i>Map_Height-CatHeight){
					CatPlayer.ShowPic(i-DogHeight,j,0);
				}
			}
			std::cout<<std::endl;
		}

		sleep(1);
		system("clear");
	}
	//hit or not
	for(int i=0; i<Map_Height; i++){
		for(int j=0; j<DogWidth; j++){
			if(i>Map_Height-DogHeight){
				DogPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		for(int j=0; j<Distance; j++){
			if(i>Map_Height-CatHeight){
				std::cout<<" ";
			}
		}
		for(int j=0; j<CatWidth; j++){
			if(i>Map_Height-CatHeight){
				CatPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		std::cout<<std::endl;
	}
	sleep(1);
	system("clear");
	//not getstone
	//computer show
	for(int i=0; i<Map_Height; i++){
		for(int j=0; j<DogWidth; j++){
			if(i>Map_Height-DogHeight){
				DogPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		for(int j=0; j<Distance; j++){
			if(i>Map_Height-CatHeight){
				std::cout<<" ";
			}
		}
		for(int j=0; j<CatWidth; j++){
			if(i>Map_Height-CatHeight){
				CatPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		std::cout<<std::endl;
	}

	system("clear");
	//getstone
	for(int i=0; i<Map_Height; i++){
		for(int j=0; j<DogWidth; j++){
			if(i>Map_Height-DogHeight){
				DogPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		for(int j=0; j<Distance; j++){
			if(i>Map_Height-CatHeight){
				std::cout<<" ";
			}
		}
		for(int j=0; j<CatWidth; j++){
			if(i>Map_Height-CatHeight){
				CatPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		std::cout<<std::endl;
	}

	sleep(2);
	system("clear");
	//shot for loop
	for(int i=0; i < time2; i++){
		for(int i=0; i<Map_Height; i++){
			for(int j=0; j<DogWidth; j++){
				if(i>Map_Height-DogHeight){
					DogPlayer.ShowPic(i-DogHeight,j,0);
				}
			}
			for(int j=0; j<Distance; j++){
				if(i>Map_Height-CatHeight){
					std::cout<<" ";
				}
			}
			for(int j=0; j<CatWidth; j++){
				if(i>Map_Height-CatHeight){
					CatPlayer.ShowPic(i-DogHeight,j,0);
				}
			}
			std::cout<<std::endl;
		}

		sleep(1);
		system("clear");
	}
	//hit or not
	for(int i=0; i<Map_Height; i++){
		for(int j=0; j<DogWidth; j++){
			if(i>Map_Height-DogHeight){
				DogPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		for(int j=0; j<Distance; j++){
			if(i>Map_Height-CatHeight){
				std::cout<<" ";
			}
		}
		for(int j=0; j<CatWidth; j++){
			if(i>Map_Height-CatHeight){
				CatPlayer.ShowPic(i-DogHeight,j,0);
			}
		}
		std::cout<<std::endl;
	}
	sleep(1);
	system("clear");
	return ;
}
