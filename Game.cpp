#include "Game.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <string>
#include "Color_m.h"
#include "BackGround.h"
#define Distance 70
#define oPosition 20

game::game(){
	DogPlayer.setOPosition(oPosition,Map_Height-DogHeight);
	CatPlayer.setOPosition(oPosition+Distance+DogWidth, Map_Height-CatHeight);
	StoneObject.setOPosition(oPosition+DogWidth,Map_Height-DogHeight-StoneHeight);
	FishObject.setOPosition(oPosition+DogWidth+Distance-FishWidth,Map_Height-CatHeight-FishHeight);
	DogPlayer.setLife(20);
	CatPlayer.setLife(20);
}

game::~game(){;}

void game::ShowGame( bool isget, bool isshot, bool isup, character c){
	Color::Modifier bgpurple(Color::BG_PURPLE);
	Color::Modifier bgdef(Color::BG_DEFAULT);
	if(!isget){
		for(int y = 0; y<Map_Height; y++){
			for(int x = 0; x<Map_Width; x++){
				if(x>=DogPlayer.getOPositionX() && \
						x<DogPlayer.getOPositionX()+DogWidth && \
						y>=DogPlayer.getOPositionY() && \
							y<DogPlayer.getOPositionY()+DogHeight){
						DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
								x-DogPlayer.getOPositionX(), 0);
					}
				else if(x>=CatPlayer.getOPositionX() && \
						x<CatPlayer.getOPositionX()+CatWidth && \
					y>=CatPlayer.getOPositionY() && \
							y<CatPlayer.getOPositionY()+CatHeight){
						CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
								x-CatPlayer.getOPositionX(), 0);
					}
				else std::cout<<bgpurple<<GamePic[y][x]<<bgdef;
			}
			std::cout<<std::endl;
		}
		return ;
	}
	if(!isshot){
		if(c == character::DOG){
			for(int y = 0; y<Map_Height; y++){
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth && \
							y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), 0);
					}
					else if(x>=StoneObject.getOPositionX() && \
							x<StoneObject.getOPositionX()+StoneWidth && \
							y>=StoneObject.getOPositionY() && \
								y<StoneObject.getOPositionY()+StoneHeight){
							StoneObject.ShowPic(y-StoneObject.getOPositionY(), \
									x-StoneObject.getOPositionX(), 0);
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth &&\
							y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), 0);
					}
					else std::cout<<bgpurple<<GamePic[y][x]<<bgdef;
				}
				std::cout<<std::endl;
			}
			return ;
		}
		if(c == character::CAT){	
			for(int y = 0; y<Map_Height; y++){
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth && \
							y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), 0);
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth  && \
						y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), 0);
					}
					else if(x>=FishObject.getOPositionX() && \
							x<FishObject.getOPositionX()+FishWidth && \
							y>=FishObject.getOPositionY() && \
								y<FishObject.getOPositionY()+FishHeight){
							FishObject.ShowPic(y-FishObject.getOPositionY(), \
									x-FishObject.getOPositionX(), 0);
					}
					else std::cout<<bgpurple<<GamePic[y][x]<<bgdef;
				}
				std::cout<<std::endl;
			}
			return ;
		}
	}
	if(isup){
		if(c == character::DOG){	
			StoneObject.setOPosition(StoneObject.getOPositionX()+2,\
					StoneObject.getOPositionY()-1);
			for(int y = 0; y<Map_Height; y++){
				std::cout<<"|";
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth && \
							y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), 0);
					}
					else if(x>=StoneObject.getOPositionX() && \
							x<StoneObject.getOPositionX()+StoneWidth && \
							y>=StoneObject.getOPositionY() && \
								y<StoneObject.getOPositionY()+StoneHeight){
							StoneObject.ShowPic(y-StoneObject.getOPositionY(),\
									x-StoneObject.getOPositionX(), 0);
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth && \
							y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), 0);
					}
					else std::cout<<bgpurple<<GamePic[y][x]<<bgdef;
				}
				std::cout<<std::endl;
			}	
			return ;
		}
		if(c == character::CAT){
			FishObject.setOPosition(FishObject.getOPositionX()-2,\
					FishObject.getOPositionY()-1);	
			for(int y = 0; y<Map_Height; y++){
				std::cout<<"|";
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth && \
							y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), 0);
					}
					else if(x>=FishObject.getOPositionX() && \
							x<FishObject.getOPositionX()+FishWidth && \
							y>=FishObject.getOPositionY() && \
								y<FishObject.getOPositionY()+FishHeight ){
							FishObject.ShowPic(y-FishObject.getOPositionY(),\
									x-FishObject.getOPositionX(), 0);
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth && \
							y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), 0);
					}
					else std::cout<<bgpurple<<GamePic[y][x]<<bgdef;
				}
				std::cout<<std::endl;
			}
			return ;
		}
	}
	else{
		bool changeCharacter = false;
		bool changeThrow_o = false;
		if(c == character::DOG){
			if(StoneObject.getOPositionX()+StoneWidth == CatPlayer.getOPositionX()){
				if(StoneObject.getOPositionY()+StoneHeight >= CatPlayer.getOPositionY() && \
						StoneObject.getOPositionY()+StoneHeight<Map_Height){
					changeCharacter = true;
					changeThrow_o = true;
				}
			}
			if(StoneObject.getOPositionY()+StoneHeight >= Map_Height ){
				changeThrow_o = true;
			}
			else if(StoneObject.getOPositionX()+StoneWidth >= Map_Width){
				changeThrow_o = true;
			}
			else{
				StoneObject.setOPosition(StoneObject.getOPositionX()+2,\
						StoneObject.getOPositionY()+1);
			}
			for(int y = 0; y<Map_Height; y++){
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth && \
							y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), 0);
					}
					else if(x>=StoneObject.getOPositionX() && \
							x<StoneObject.getOPositionX()+StoneWidth && \
							y>=StoneObject.getOPositionY() && \
								y<StoneObject.getOPositionY()+StoneHeight ){
							StoneObject.ShowPic(y-StoneObject.getOPositionY(),\
									x-StoneObject.getOPositionX(), changeThrow_o);
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth && \
							y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), changeCharacter);
					}
					else std::cout<<bgpurple<<GamePic[y][x]<<bgdef;
				}
				std::cout<<std::endl;
			}	
			changeCharacter = false;
			changeThrow_o = false;
			return ;
		}
		if(c == character::CAT){
			bool changeCharacter = false;
			bool changeThrow_o = false;
			if(FishObject.getOPositionX() == DogPlayer.getOPositionX()+DogWidth){
				if(FishObject.getOPositionY()+FishHeight >= DogPlayer.getOPositionY() && \
						FishObject.getOPositionY()+FishHeight<Map_Height){
					changeCharacter = true;
					changeThrow_o = true;
				}
			}
			if(FishObject.getOPositionY()+FishHeight >= Map_Height){
				changeThrow_o = true;
			}
			else{
				FishObject.setOPosition(FishObject.getOPositionX()-2,\
						FishObject.getOPositionY()+1);
			}
			for(int y = 0; y<Map_Height; y++){
				for(int x = 0; x<Map_Width; x++){
					if(x>=FishObject.getOPositionX() && \
							x<FishObject.getOPositionX()+FishWidth && \
							y>=FishObject.getOPositionY() && \
								y<FishObject.getOPositionY()+FishHeight ){
							FishObject.ShowPic(y-FishObject.getOPositionY(),\
									x-FishObject.getOPositionX(), changeThrow_o);
					}

					else if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth && \
							y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), changeCharacter);
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth && \
							y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), 0);
					}
					else std::cout<<bgpurple<<GamePic[y][x]<<bgdef;
				}
				std::cout<<std::endl;
			}
			changeCharacter = false;
			changeCharacter = false;
			return ;
		}

	}
}

status isHIT(int power, int distance){

	int gap = (power * power / 2 ) - distance;
	
	if(gap < -10){
		return status::HIT_FRONT;
	}
	else if(gap < 10){
		return status::HITED;
	}
	else{
		return status::HIT_BEHIND;
	}
}
static int distance;
static int timeup_front = 5;
static int timedown_front =16;
static int timeup_ed = 13;
static int timedown_ed = 18;
static int timeup_behind = 30;
static int timedown_behind = 20;
int game::RunGame(){
	Color::Modifier bgred(Color::BG_RED);
	Color::Modifier bgblue(Color::BG_BLUE);
	Color::Modifier bgblack(Color::BG_BLACK);
	Color::Modifier bgwhite(Color::BG_WHITE);
	Color::Modifier bgdef(Color::BG_DEFAULT);
	srand( time (NULL));
	if(DogPlayer.getLife()>0 && CatPlayer.getLife()>0){
		StoneObject.setOPosition(oPosition+DogWidth, Map_Height - DogHeight - StoneHeight);
		FishObject.setOPosition(oPosition+DogWidth+Distance-FishWidth, Map_Height -CatHeight-FishHeight);
		std::cout<<std::endl<<std::endl;
		std::cout<<"                   "; 
		for(int i = 0; i<DogPlayer.getLife(); i++)std::cout<<bgred<<" "<<bgdef;
		std::cout<<"                                                                          ";
		for(int i = 0; i<CatPlayer.getLife(); i++)std::cout<<bgred<<" "<<bgdef;
		std::cout<<std::endl<<std::endl;
		ShowGame(0,0,0,character::EMPTY);
		std::cout<<\
			"                      1. Attack                                 2. Back the main page                                3. Quit                          "\
			<<std::endl<<std::endl<<std::endl<<std::endl;
		std::cout<<\
			"                                                         Please Enter Which you want to do:";
		int choice;
		std::cin>>choice;
		std::cout<<std::endl<<std::endl<<std::endl;
		int power;
		int RobotP=0;
		switch(choice){
			case 1:
				std::cout<<\
					"                                                                 Enter your power:";
				std::cin>>power;
				system("clear");
				ShowGame(1,0,0,character::DOG);
				sleep(3);
				system("clear");
				switch(isHIT(power,distance)){
					case status::HIT_FRONT:
						for(int i = 0; i<timeup_front; i++){ 
							ShowGame(1,1,1,character::DOG);
							sleep(1);
							system("clear");
						}
						for(int i = 0; i<timedown_front-1; i++){
							ShowGame(1,1,0,character::DOG);
							sleep(1);
							system("clear");
						}
						ShowGame(1,1,0,character::DOG);
						sleep(3);
						system("clear");
						break;
					case status::HITED:
						for(int i = 0; i<timeup_ed; i++){ 
							ShowGame(1,1,1,character::DOG);
							sleep(1);
							system("clear");
						}
						for(int i = 0; i<timedown_ed-1; i++){
							ShowGame(1,1,0,character::DOG);
							sleep(1);
							system("clear");
						}
						ShowGame(1,1,0,character::DOG);
						sleep(3);
						system("clear");
						distance = rand()%300 +100;
						CatPlayer.setLife(CatPlayer.getLife()-5);
						break;
					case status::HIT_BEHIND:
						for(int i = 0; i<timeup_behind; i++){ 
							ShowGame(1,1,1,character::DOG);
							sleep(1);
							system("clear");
						}
						for(int i = 0; i<timedown_behind-1; i++){
							ShowGame(1,1,0,character::DOG);
							sleep(1);
							system("clear");
						}
						ShowGame(1,1,0,character::DOG);
						sleep(3);
						system("clear");
						break;
				}
				srand( time(NULL));
				RobotP = rand()%30+10;
				ShowGame(1,0,0,character::CAT);
				sleep(3);
				system("clear");
				switch(isHIT(RobotP,distance)){
					case status::HIT_FRONT:
						for(int i = 0; i<timeup_front; i++){ 
							ShowGame(1,1,1,character::CAT);
							sleep(1);
							system("clear");
						}
						for(int i = 0; i<timedown_front-1; i++){
							ShowGame(1,1,0,character::CAT);
							sleep(1);
							system("clear");
						}	
						ShowGame(1,1,0,character::CAT);
						sleep(3);
						system("clear");
						break;
					case status::HITED:
						for(int i = 0; i<timeup_ed; i++){ 
							ShowGame(1,1,1,character::CAT);
							sleep(1);
							system("clear");
						}
						for(int i = 0; i<timedown_ed-1; i++){
							ShowGame(1,1,0,character::CAT);
							sleep(1);
							system("clear");
						}
						ShowGame(1,1,0,character::CAT);
						sleep(3);
						system("clear");
						distance = rand() %300+100; 
						DogPlayer.setLife(DogPlayer.getLife()-5);
						break;
					case status::HIT_BEHIND:
						for(int i = 0; i<timeup_behind; i++){ 
							ShowGame(1,1,1,character::CAT);
							sleep(1);
							system("clear");
						}
						for(int i = 0; i<timedown_behind; i++){
							ShowGame(1,1,0,character::CAT);
							sleep(1);
							system("clear");
						}
						break;
				}
				system("clear");
				break;
			case 2:
				std::cout<<"w";
				system("clear");
				return -1;
				std::cout<<"oh!";
				break;
			case 3:
				return 0;
				break;
		}
	}
	else if(CatPlayer.getLife()>0){
		for(int i = 0; i<Map_Height; i++){
			for(int j = 0; j<Map_Width; j++){
				if(LostPic[i][j] == '*') std::cout<<bgred<<" "<<bgdef;
				else std::cout<<" ";
			}
			std::cout<<std::endl;
		}
		sleep(2);
		return 0;
	}
	else {
		for(int i = 0; i<Map_Height; i++){
			for(int j = 0; j<Map_Width; j++){
				if(WinPic[i][j] == '*') std::cout<<bgblue<<" "<<bgdef;
				else std::cout<<" ";
			}
			std::cout<<std::endl;
		}
		sleep(2);
		return 0;
	}
	return 1;
}

void game::StartGame(){
	Color::Modifier bgwhite(Color::BG_WHITE);
	Color::Modifier bgdef(Color::BG_DEFAULT);
	Color::Modifier bgblack(Color::BG_BLACK);
	Color::Modifier bgblue(Color::BG_BLUE);
	Color::Modifier bgred(Color::BG_RED);
	Color::Modifier fgwhite(Color::FG_WHITE);
	Color::Modifier fgdef(Color::FG_DEFAULT);
	std::string e;
	getline(std::cin,e);
	system("clear");
	distance = rand()%300 +100;
	for(int i = 0; i<Map_Height; i++){
		for(int j = 0; j<Map_Width; j++){
			if(StartPic[i][j] == '*') std::cout<<bgwhite<<" "<<bgdef;
			else if(StartPic[i][j] == '1') std::cout<<bgblack<<" "<<bgdef;
			else if(StartPic[i][j] == ' ') std::cout<<bgblue<<" "<<bgdef;
			else if(StartPic[i][j] == '#') std::cout<<bgred<<" "<<bgdef;
			else std::cout<<StartPic[i][j];
		}
		std::cout<<std::endl;
	}
	getline(std::cin,e);
	system("clear");
	for(int i = 0; i<Map_Height; i++){
		for(int j = 0; j<Map_Width; j++){
			if(WarningPic[i][j] == '*') std::cout<<bgred<<" "<<bgdef;
			else if(WarningPic[i][j] == ' ') std::cout<<bgblack<<" "<<bgdef;
			else std::cout<<bgblack<<fgwhite<<WarningPic[i][j]<<fgdef<<bgdef;
		}
		std::cout<<std::endl;
	}
	getline(std::cin,e);
	system("clear");

	int isend ;
	while(isend != 0){
		isend = RunGame();
		///std::cout << isend;
		if(isend == -1)StartGame();
	}
	return ;
}
