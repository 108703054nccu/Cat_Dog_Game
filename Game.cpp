#include "Game.h"
#include <iostream>
#include <string>
#include <unistd.h>
#define Map_Height 40
#define Distance 70
#define oPosition 20
#define Map_Width oPosition+Distance+DogWidth+CatWidth+oPosition
game::game(){
	DogPlayer.setOPosition(oPosition,Map_Height-DogHeight);
	CatPlayer.setOPosition(oPosition+Distance+DogWidth, Map_Height-CatHeight);
	StoneObject.setOPosition(oPosition+DogWidth,Map_Height-DogHeight-StoneHeight);
	FishObject.setOPosition(oPosition+DogWidth+Distance-FishWidth,Map_Height-CatHeight-FishHeight);
}

game::~game(){;}

void game::ShowGame( bool isget, bool isshot, bool isup, character c){
	if(!isget){
		for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
		std::cout<<std::endl;
		for(int y = 0; y<Map_Height; y++){
			std::cout<<"|";
			for(int x = 0; x<Map_Width; x++){
				if(x>=DogPlayer.getOPositionX() && \
						x<DogPlayer.getOPositionX()+DogWidth){
					if(y>=DogPlayer.getOPositionY() && \
							y<DogPlayer.getOPositionY()+DogHeight){
						DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
								x-DogPlayer.getOPositionX(), 0);
					}
					else std::cout<<" ";
				}
				else if(x>=CatPlayer.getOPositionX() && \
						x<CatPlayer.getOPositionX()+CatWidth){
					if(y>=CatPlayer.getOPositionY() && \
							y<CatPlayer.getOPositionY()+CatHeight){
						CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
								x-CatPlayer.getOPositionX(), 0);
					}
					else std::cout<<" ";
				}
				else{
					std::cout<<" ";
				}
			}
			std::cout<<"|";
			std::cout<<std::endl;
		}
		for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
		std::cout<<std::endl;
		return ;
	}
	if(!isshot){
		if(c == character::DOG){
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			for(int y = 0; y<Map_Height; y++){
				std::cout<<"|";
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth){
						if(y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), 0);
						}		
						else std::cout<<" ";
					}
					else if(x>=StoneObject.getOPositionX() && \
							x<StoneObject.getOPositionX()+StoneWidth){
						if(y>=StoneObject.getOPositionY() && \
								y<StoneObject.getOPositionY()+StoneHeight){
							StoneObject.ShowPic(y-StoneObject.getOPositionY(), \
									x-StoneObject.getOPositionX(), 0);
						}		
						else std::cout<<" ";
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth){
						if(y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";
					}
					else std::cout<<" ";
				}
				std::cout<<"|";
				std::cout<<std::endl;
			}
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			return ;
		}
		if(c == character::CAT){	
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			for(int y = 0; y<Map_Height; y++){
				std::cout<<"|";
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth){
						if(y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth){
						if(y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";

					}
					else if(x>=FishObject.getOPositionX() && \
							x<FishObject.getOPositionX()+FishWidth){
						if(y>=FishObject.getOPositionY() && \
								y<FishObject.getOPositionY()+FishHeight){
							FishObject.ShowPic(y-FishObject.getOPositionY(), \
									x-FishObject.getOPositionX(), 0);
						}
						else std::cout<<" ";

					}
					else std::cout<<" ";
				}
				std::cout<<"|";
				std::cout<<std::endl;
			}
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			return ;
		}
	}
	if(isup){
		if(c == character::DOG){	
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			StoneObject.setOPosition(StoneObject.getOPositionX()+2,\
					StoneObject.getOPositionY()-1);
			for(int y = 0; y<Map_Height; y++){
				std::cout<<"|";
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth){
						if(y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), 0);
						}		
						else std::cout<<" ";
					}
					else if(x>=StoneObject.getOPositionX() && \
							x<StoneObject.getOPositionX()+StoneWidth){
						if(y>=StoneObject.getOPositionY() && \
								y<StoneObject.getOPositionY()+StoneHeight){
							StoneObject.ShowPic(y-StoneObject.getOPositionY(),\
									x-StoneObject.getOPositionX(), 0);
						}
						else std::cout<<" ";
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth){
						if(y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";
					}
					else std::cout<<" ";
				}
				std::cout<<"|";
				std::cout<<std::endl;
			}	
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			return ;
		}
		if(c == character::CAT){
			FishObject.setOPosition(FishObject.getOPositionX()-2,\
					FishObject.getOPositionY()-1);	
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			for(int y = 0; y<Map_Height; y++){
				std::cout<<"|";
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth){
						if(y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), 0);
						}		
						else std::cout<<" ";
					}
					else if(x>=FishObject.getOPositionX() && \
							x<FishObject.getOPositionX()+FishWidth){
						if(y>=FishObject.getOPositionY() && \
								y<FishObject.getOPositionY()+FishHeight ){
							FishObject.ShowPic(y-FishObject.getOPositionY(),\
									x-FishObject.getOPositionX(), 0);
						}
						else std::cout<<" ";
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth){
						if(y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";
					}
					else std::cout<<" ";
				}
				std::cout<<"|";
				std::cout<<std::endl;
			}
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
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
			else if(StoneObject.getOPositionY()+StoneHeight >= Map_Height){
				changeThrow_o = true;
			}
			else{
				StoneObject.setOPosition(StoneObject.getOPositionX()+2,\
						StoneObject.getOPositionY()+1);
			}
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			for(int y = 0; y<Map_Height; y++){
				std::cout<<"|";
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth){
						if(y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), 0);
						}		
						else std::cout<<" ";
					}
					else if(x>=StoneObject.getOPositionX() && \
							x<StoneObject.getOPositionX()+StoneWidth){
						if(y>=StoneObject.getOPositionY() && \
								y<StoneObject.getOPositionY()+StoneHeight &&\
								y+StoneHeight<Map_Height){
							StoneObject.ShowPic(y-StoneObject.getOPositionY(),\
									x-StoneObject.getOPositionX(), changeThrow_o);
						}
						else std::cout<<" ";
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth){
						if(y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), changeCharacter);
						}
						else std::cout<<" ";
					}
					else std::cout<<" ";
				}
				std::cout<<"|";
				std::cout<<std::endl;
			}	
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			changeCharacter = false;
			changeThrow_o = false;
			return ;
		}
		if(c == character::CAT){
			bool changeCharacter = false;
			bool changeThrow_o = false;
			if(FishObject.getOPositionX()+FishWidth == DogPlayer.getOPositionX()){
				if(FishObject.getOPositionY()+FishHeight >= DogPlayer.getOPositionY() && \
						FishObject.getOPositionY()+FishHeight<Map_Height){
					changeCharacter = true;
					changeThrow_o = true;
				}
			}
			else if(FishObject.getOPositionY()+FishHeight >= Map_Height){
				changeThrow_o = true;
			}
			else{
				FishObject.setOPosition(FishObject.getOPositionX()-2,\
						FishObject.getOPositionY()+1);
			}
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			for(int y = 0; y<Map_Height; y++){
				std::cout<<"|";
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && \
							x<DogPlayer.getOPositionX()+DogWidth){
						if(y>=DogPlayer.getOPositionY() && \
								y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), \
									x-DogPlayer.getOPositionX(), changeCharacter);
						}		
						else std::cout<<" ";
					}
					else if(x>=FishObject.getOPositionX() && \
							x<FishObject.getOPositionX()+FishWidth){
						if(y>=FishObject.getOPositionY() && \
								y<FishObject.getOPositionY()+FishHeight &&\
								y+FishHeight<Map_Height){
							FishObject.ShowPic(y-FishObject.getOPositionY(),\
									x-FishObject.getOPositionX(), changeThrow_o);
						}		
						else std::cout<<" ";
					}
					else if(x>=CatPlayer.getOPositionX() && \
							x<CatPlayer.getOPositionX()+CatWidth){
						if(y>=CatPlayer.getOPositionY() && \
								y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), \
									x-CatPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";
					}
					else std::cout<<" ";
				}
				std::cout<<"|";
				std::cout<<std::endl;
			}
			for(int j = 0; j<Map_Width+2; j++)std::cout<<"-";
			std::cout<<std::endl;
			changeCharacter = false;
			changeCharacter = false;
			return ;
		}

	}
}

int game::RunGame(){
	//Get Blood
	//Show Blood
	ShowGame(0,0,0,character::EMPTY);
	std::cout<<"1. Attack "<<"2.        "<<"3. Quit   "<<std::endl;
	std::cout<<"Please Enter Which you want to do:";
	int choice;
	std::cin>>choice;
	int power;
	switch(choice){
		case 1:
			std::cout<<"Enter your power:";
			std::cin>>power;
			std::cout<<power<<std::endl;
			system("clear");
			return 0;
		case 2:
			system("clear");
			return 0;
		case 3:
			return 1;
	}
}

void game::StartGame(){
	system("clear");
	//INPUT START PIC
	system("clear");
	bool isend =false;
	while(!isend){
		isend = RunGame();
	}
	system("clear");
	//OUTPUT END PIC
	return ;
}
