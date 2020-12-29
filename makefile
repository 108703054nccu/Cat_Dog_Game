game.out:main.o Game.o Dog.o Cat.o Player.o 
	g++ -o game.out main.o Dog.o Cat.o Player.o Game.o Throw_o.o 
main.o:main.cpp
	g++ -c main.cpp
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
clean: 
	rm -f main.o Game.o Player.o Dog.o Cat.o Throw_o.o game.out
