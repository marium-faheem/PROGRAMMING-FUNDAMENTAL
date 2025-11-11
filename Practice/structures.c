#include<stdio.h>
int main(){
	typedef struct pokemon{
		int hp;
		int speed;
		int attack;
		char tier; //S,A,B,C,D
		char name[15];
	}pokemon;
	
    pokemon pikachu;
	pikachu.attack=60;
	pikachu.hp=50;
	pikachu.speed=100;
	pikachu.tier='A';
	
	printf("%d",pikachu.attack);
	
	pokemon charizard;
	charizard.attack=130;
	charizard.hp=80;
	charizard.speed=80;
	charizard.tier='S';
	
	pokemon mewto;
	mewto.attack=150;
	mewto.hp=120;
	mewto.speed=90;
	mewto.tier='B';
	
}