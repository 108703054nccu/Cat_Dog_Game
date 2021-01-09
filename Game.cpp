#include "Game.h"
#include <iostream>
#include <string>
#include <unistd.h>
#define Map_Height 60
#define Distance 60
#define oPosition 15
#define Map_Width oPosition+Distance+DogWidth+CatWidth
game::game(){
	DogPlayer.setOPosition(oPosition,Map_Height-DogHeight);
	CatPlayer.setOPosition(oPosition+Distance+DogWidth, Map_Height-CatHeight);
	StoneObject.setOPosition(oPosition+DogWidth,Map_Height-DogHeight-StoneHeight);
	FishObject.setOPosition(oPosition+DogWidth+Distance-FishWidth,Map_Height-CatHeight-FishHeight);
}

game::~game(){;}

void game::ShowGame( status s, bool isget, bool isshot, character c){
	int time1=19;
	if(!isget){
		for(int y = 0; y<Map_Height; y++){
			for(int x = 0; x<Map_Width; x++){
				if(x>=DogPlayer.getOPositionX() && x<DogPlayer.getOPositionX()+DogWidth){
					if(y>=DogPlayer.getOPositionY() && y<DogPlayer.getOPositionY()+DogHeight){
						DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), x-DogPlayer.getOPositionX(), 0);
					}
				}
				else if(x>=CatPlayer.getOPositionX()&& x<CatPlayer.getOPositionX()+CatWidth){
					if(y>=CatPlayer.getOPositionY() && y<CatPlayer.getOPositionY()+CatHeight){
						CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), x-CatPlayer.getOPositionX(), 0);
					}
				}
				else{
					std::cout<<" ";
				}
			}
			std::cout<<std::endl;
		}
		return ;
	}
	if(!isshot){
		if(c == character::DOG){
			for(int y = 0; y<Map_Height; y++){
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && x<DogPlayer.getOPositionX()+DogWidth){
						if(y>=DogPlayer.getOPositionY() && y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), x-DogPlayer.getOPositionX(), 0);
						}		
						else std::cout<<" ";
					}
					else if(x>=StoneObject.getOPositionX() && x<StoneObject.getOPositionX()+StoneWidth){
						if(y>=StoneObject.getOPositionY() && y<StoneObject.getOPositionY()+StoneHeight){
							StoneObject.ShowPic(y-StoneObject.getOPositionY(), x-StoneObject.getOPositionX(), 0);
						}		
						else std::cout<<" ";
					}
					else if(x>=CatPlayer.getOPositionX()&& x<CatPlayer.getOPositionX()+CatWidth){
						if(y>=CatPlayer.getOPositionY() && y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), x-CatPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";
					}
					else std::cout<<" ";
				}
				std::cout<<std::endl;
			}
			return ;
		}
		if(c == character::CAT){
			for(int y = 0; y<Map_Height; y++){
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && x<DogPlayer.getOPositionX()+DogWidth){
						if(y>=DogPlayer.getOPositionY() && y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), x-DogPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";
					}
					else if(x>=CatPlayer.getOPositionX()&& x<CatPlayer.getOPositionX()+CatWidth){
						if(y>=CatPlayer.getOPositionY() && y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), x-CatPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";

					}
					else if(x>=FishObject.getOPositionX() && x<FishObject.getOPositionX()+FishWidth){
						if(y>=FishObject.getOPositionY() && y<FishObject.getOPositionY()+FishHeight){
							FishObject.ShowPic(y-FishObject.getOPositionY(), x-FishObject.getOPositionX(), 0);
						}
						else std::cout<<" ";

					}
					else std::cout<<" ";
				}
				std::cout<<std::endl;
			}
			return ;
		}
	}
	else{
		if(c == character::DOG){
			switch(s){
				case status::HIT_FRONT:
				for(int i=0; i<time1; i++){
					for(int y = 0; y<Map_Height; y++){
						for(int x = 0; x<Map_Width; x++){
							if(x>=DogPlayer.getOPositionX() && x<DogPlayer.getOPositionX()+DogWidth){
								if(y>=DogPlayer.getOPositionY() && y<DogPlayer.getOPositionY()+DogHeight){
									DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), x-DogPlayer.getOPositionX(), 0);
								}		
								else std::cout<<" ";
							}
							else if(x>=StoneObject.getOPositionX()+i&& x<StoneObject.getOPositionX()+StoneWidth+i){
								if(y>=StoneObject.getOPositionY()-i&& y<StoneObject.getOPositionY()+StoneHeight-i){
									StoneObject.ShowPic(y-StoneObject.getOPositionY()+i, x-StoneObject.getOPositionX()-i, 0);
								}		
								else std::cout<<" ";
							}
							else if(x>=CatPlayer.getOPositionX()&& x<CatPlayer.getOPositionX()+CatWidth){
								if(y>=CatPlayer.getOPositionY() && y<CatPlayer.getOPositionY()+CatHeight){
									CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), x-CatPlayer.getOPositionX(), 0);
								}
								else std::cout<<" ";
							}
							else std::cout<<" ";
						}
						std::cout<<std::endl;
					}
					sleep(1);
					system("clear");
				}
					return ;
				case status::HIT_BEHIND:
					for(int y = 0; y<Map_Height; y++){
						for(int x = 0; x<Map_Width; x++){
							if(x>=DogPlayer.getOPositionX() && x<DogPlayer.getOPositionX()+DogWidth){
								if(y>=DogPlayer.getOPositionY() && y<DogPlayer.getOPositionY()+DogHeight){
									DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), x-DogPlayer.getOPositionX(), 0);
								}		
								else std::cout<<" ";
							}
							else if(x>=StoneObject.getOPositionX() && x<StoneObject.getOPositionX()+StoneWidth){
								if(y>=StoneObject.getOPositionY() && y<StoneObject.getOPositionY()+StoneHeight){
									StoneObject.ShowPic(y-StoneObject.getOPositionY(), x-StoneObject.getOPositionX(), 0);
								}		
								else std::cout<<" ";
							}
							else if(x>=CatPlayer.getOPositionX()&& x<CatPlayer.getOPositionX()+CatWidth){
								if(y>=CatPlayer.getOPositionY() && y<CatPlayer.getOPositionY()+CatHeight){
									CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), x-CatPlayer.getOPositionX(), 0);
								}
								else std::cout<<" ";
							}
							else std::cout<<" ";
						}
						std::cout<<std::endl;
					}
					return ;
			}
		}
		if(c == character::CAT){
			for(int y = 0; y<Map_Height; y++){
				for(int x = 0; x<Map_Width; x++){
					if(x>=DogPlayer.getOPositionX() && x<DogPlayer.getOPositionX()+DogWidth){
						if(y>=DogPlayer.getOPositionY() && y<DogPlayer.getOPositionY()+DogHeight){
							DogPlayer.ShowPic(y-DogPlayer.getOPositionY(), x-DogPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";
					}
					else if(x>=CatPlayer.getOPositionX()&& x<CatPlayer.getOPositionX()+CatWidth){
						if(y>=CatPlayer.getOPositionY() && y<CatPlayer.getOPositionY()+CatHeight){
							CatPlayer.ShowPic(y-CatPlayer.getOPositionY(), x-CatPlayer.getOPositionX(), 0);
						}
						else std::cout<<" ";

					}
					else if(x>=FishObject.getOPositionX() && x<FishObject.getOPositionX()+FishWidth){
						if(y>=FishObject.getOPositionY() && y<FishObject.getOPositionY()+FishHeight){
							FishObject.ShowPic(y-FishObject.getOPositionY(), x-FishObject.getOPositionX(), 0);
						}
						else std::cout<<" ";

					}
					else std::cout<<" ";
				}
				std::cout<<std::endl;
			}
			return ;
		}

	}
}
