all: unit spellcaster soldier wolf wizard fireball imain istate wolfState humanState ispell  spellManager 
	g++ *.o -o main.exe

unit: IUnit.cpp
	g++ -c IUnit.cpp -o IUnit.o

spellcaster: ISpellCaster.cpp
	g++ -c ISpellCaster.cpp -o ISpellCaster.o

soldier: Soldier.cpp
	g++ -c Soldier.cpp -o Soldier.o

wolf: Werewolf.cpp
	g++ -c Werewolf.cpp -o Werewolf.o

wizard: Wizard.cpp
	g++ -c Wizard.cpp -o Wizard.o

imain: main.cpp
	g++ -c main.cpp -o main.o

istate: IState.cpp
	g++ -c IState.cpp -o IState.o

wolfState: WerewolfState.cpp
	g++ -c WerewolfState.cpp -o WerewolfState.o

humanState: HumanState.cpp
	g++ -c HumanState.cpp -o HumanState.o 

ispell: ISpell.cpp
	g++ -c ISpell.cpp -o ISpell.o 

spellManager: SpellManager.cpp
	g++ -c SpellManager.cpp -o SpellManager.o 

fireball: FireballSpell.cpp
	g++ -c FireballSpell.cpp -o FireballSpell.o

clean:
	rm -rf *.o *.exe