#include "Game.h"
#include <iostream>
#include <string>
#include <unistd.h>
#define Map_Height 80
#define Distance 100
game::game(){;}

game::~game(){;}

void game::ShowGame(int time1,int time2,status s){
	//notgetstone
	//cin which command get
	//if not get,sleep
	for(int i=0; i<Map_Height; i++){
		if(i>Map_Height-DogHeight){
			for(int j=0; j<DogWidth+1; j++){
				DogPlayer.ShowPic(i-(Map_Height-DogHeight),j,0);
			}
			for(int j=0; j<Distance; j++){
				std::cout<<" ";
			}
			for(int j=0; j<CatWidth+1; j++){
				CatPlayer.ShowPic(i-(Map_Height-CatHeight),j,0);
			}
		}
		else { for(int j=0; j<Distance+DogWidth*2+2;j++)std::cout<<" ";}
		std::cout<<std::endl;
	}
	sleep(5);
	system("clear");
	//getcommand
	//getstone	
	for(int i=0; i<Map_Height; i++){
		if(i>Map_Height-DogHeight){
			for(int j=0; j<DogWidth; j++){
				DogPlayer.ShowPic(i-(Map_Height-DogHeight),j,0);
			}
			for(int j=0; j<Distance; j++){
				std::cout<<" ";
			}
			for(int j=0; j<CatWidth; j++){
				CatPlayer.ShowPic(i-(Map_Height-DogHeight),j,0);
			}
		}
		else {
			for(int j=0;j<Distance+DogWidth*2+2;j++){
				if(i<Map_Height-DogHeight && i>=Map_Height-DogHeight-StoneHeight && j>=DogWidth && j<DogWidth+StoneWidth){
					Stone_o.ShowPic(i-(Map_Height-DogHeight-StoneHeight),j-DogWidth,0);
				}
				else std::cout<<" ";
			}
		}
		std::cout<<std::endl;
	}	
	sleep(2);
	system("clear");
	//ishit, status
	int store;
	for(int t = 0;t<time1;t++){
		for(int i=0; i<Map_Height; i++){
			if(i>Map_Height-DogHeight){
				for(int j=0; j<DogWidth; j++){
					DogPlayer.ShowPic(i-(Map_Height-DogHeight),j,0);
				}
				for(int j=0; j<Distance; j++){
					std::cout<<" ";
				}
				for(int j=0; j<CatWidth; j++){
					CatPlayer.ShowPic(i-(Map_Height-DogHeight),j,0);
				}
			}
			else {
				for(int j=0;j<Distance+DogWidth*2+2;j++){
					if(t<time1/2){
						if(i<Map_Height-DogHeight-t&& i>=Map_Height-DogHeight-StoneHeight-t&&\
							       	j>=DogWidth+t*2&& j<DogWidth+StoneWidth+t*2){
							Stone_o.ShowPic(i-(Map_Height-DogHeight-StoneHeight)+t,j-DogWidth-t*2,0);
							store = t;
						}
						else std::cout<<" ";
					}
					else{
						if(i<Map_Height-DogHeight-time1/2+(t-time1/2)&& i>=Map_Height-DogHeight-StoneHeight-time1/2+(t-time1/2)\
							       	&& j>=DogWidth+t*2&& j<DogWidth+StoneWidth+t*2){
							Stone_o.ShowPic(i-(Map_Height-DogHeight-StoneHeight-time1/2+(t-time1/2)),j-DogWidth-t*2,0);
						}
						else std::cout<<" ";
					}
				}
			}
			std::cout<<std::endl;
		}	
		sleep(1);
		system("clear");
	}
	return ;
}
