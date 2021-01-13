game.out:Game.o Dog.o Cat.o Player.o Throw_o.o Color_m.o BackGround.o PlayerPic.o Throw_oPic.o
	g++ main.cpp -o game.out Player.o Dog.o Cat.o Throw_o.o Game.o Color_m.o BackGround.o PlayerPic.o Throw_oPic.o
Game.o:Game.h Game.cpp
	g++ -c Game.cpp
Dog.o:Dog.h Dog.cpp
	g++ -c Dog.cpp
Cat.o:Cat.h Cat.cpp
	g++ -c Cat.cpp
Player.o:Player.h Player.cpp
	g++ -c Player.cpp
Throw_o.o:Throw_o.h Throw_o.cpp
	g++ -c Throw_o.cpp
Color_m.o:Color_m.h Color_m.cpp
	g++ -c Color_m.cpp
BackGround.o:BackGround.h BackGround.cpp
	g++ -c BackGround.cpp
PlayerPic.o:PlayerPic.h PlayerPic.cpp
	g++ -c PlayerPic.cpp
Throw_oPic.o:Throw_oPic.h Throw_oPic.cpp
	g++ -c Throw_oPic.cpp
clean: 
	rm -f Throw_oPic.o BackGround.o PlayerPic.o Color_m.o Game.o Player.o Dog.o Cat.o Throw_o.o game.out
