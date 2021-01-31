all: unit soldier wolf imain istate icontext wolfState humanState
	g++ *.o -o main.exe

unit: IUnit.cpp
	g++ -c IUnit.cpp -o IUnit.o

soldier: Soldier.cpp
	g++ -c Soldier.cpp -o Soldier.o

wolf: Werewolf.cpp
	g++ -c Werewolf.cpp -o Werewolf.o

imain: main.cpp
	g++ -c main.cpp -o main.o

icontext: IContext.cpp
	g++ -c IContext.cpp -o IContext.o

istate: IState.cpp
	g++ -c IState.cpp -o IState.o

wolfState: WerewolfState.cpp
	g++ -c WerewolfState.cpp -o WerewolfState.o

humanState: HumanState.cpp
	g++ -c HumanState.cpp -o HumanState.o 

clean:
	rm -rf *.o *.exe