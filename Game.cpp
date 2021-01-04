#include "Game.h"
#include <iostream>
#include <string>
#include <unistd.h>
#define Map_Height 75
#define Map_Width 150 
game::game(){;}

game::~game(){;}

void game::ShowGame(int time1,int time2){
	std::string all;
	//notgetstone
	//cin which command get
	//if not get,sleep
	for(int i=0; i<Map_Height-1; i++){
		for(int j=0; j<Map_Width; j++){
			;//game Map
		}
		all+="\n";
	}
	for(int j=0; j<Map_Width; j++){
		all+="-";
	}
	all+="\n";
	std::cout<<all;
	system("clear");
	//getstone	
	for(int i=0; i<Map_Height-1; i++){
		for(int j=0; j<Map_Width; j++){
			;//game Map
		}
		all+="\n";
	}
	for(int j=0; j<Map_Width; j++){
		all+="-";
	}
	all+="\n";
	std::cout<<all;
	sleep(2);
	system("clear");
	//shot for loop
	for(int i=0; i < time1; i++){
		for(int i=0; i<Map_Height-1; i++){
			for(int j=0; j<Map_Width; j++){
				;//game Map
			}
			all+="\n";
		}
		for(int j=0; j<Map_Width; j++){
			all+="-";
		}
		all+="\n";
		std::cout<<all;
		sleep(1);
		system("clear");
	}
	//hit or not
	for(int i=0; i<Map_Height-1; i++){
		for(int j=0; j<Map_Width; j++){
			;//game Map
		}
		all+="\n";
	}
	for(int j=0; j<Map_Width; j++){
		all+="-";
	}
	all+="\n";
	std::cout<<all;
	system("clear");
	//not getstone
	//computer show
	for(int i=0; i<Map_Height-1; i++){
		for(int j=0; j<Map_Width; j++){
			;//game Map
		}
		all+="\n";
	}
	for(int j=0; j<Map_Width; j++){
		all+="-";
	}
	all+="\n";
	std::cout<<all;
	system("clear");
	//getstone
	for(int i=0; i<Map_Height-1; i++){
		for(int j=0; j<Map_Width; j++){
			;//game Map
		}
		all+="\n";
	}
	for(int j=0; j<Map_Width; j++){
		all+="-";
	}
	all+="\n";
	std::cout<<all;
	sleep(2);
	system("clear");
	//shot for loop
	for(int i=0; i < time2; i++){
		for(int i=0; i<Map_Height-1; i++){
			for(int j=0; j<Map_Width; j++){
				;//game Map
			}
			all+="\n";
		}
		for(int j=0; j<Map_Width; j++){
			all+="-";
		}
		all+="\n";
		std::cout<<all;
		sleep(1);
		system("clear");
	}
	//hit or not
	for(int i=0; i<Map_Height-1; i++){
		for(int j=0; j<Map_Width; j++){
			;//game Map
		}
		all+="\n";
	}
	for(int j=0; j<Map_Width; j++){
		all+="-";
	}
	all+="\n";
	std::cout<<all;
	system("clear");
	return ;
}
