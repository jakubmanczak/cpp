#include <iostream>
#include "manczak.cpp"

struct point{int x; int y;};

struct snake{
	point head; int length;
	char headchar = '0';
	char bodychar = 'o';
};

struct screen{
	char table[16][64];
	char fc;
	void fill(){
		for(int i = 0; i < 16; i++){
			for(int j = 0; j < 64; j++){
				table[i][j] = fc;
			}
		}
	}
	void print(){
		for(int i = 0; i < 16; i++){
			for(int j = 0; j < 64; j++){
				std::cout << table[i][j];
			}
			std::cout << std::endl;
		}
	}
};

int main(){
	clear();

	screen def; def.fc = '.';

	point sneki; sneki.x = 1; sneki.y = 1;
	snake snek; snek.head = sneki;
	
	
	char input[1];
	while(true){
		switch(input[0]){
			case 'w': snek.head.y -= 1; break;
			case 's': snek.head.y += 1; break;
			case 'a': snek.head.x -= 1; break;
			case 'd': snek.head.x += 1; break;
			default: printf("dumbass!!");
		}
		std::cout << " snekhead pos: " << snek.head.x << " " << snek.head.y;
		if(
			snek.head.x < 0 ||
			snek.head.y < 0 ||
			snek.head.x > 63 ||
			snek.head.y > 15
		){
			break;
		}
		
		clear();

		def.fill();
		def.table[snek.head.y][snek.head.x] = snek.headchar;

		printf("\n"); def.print();
		std::cin >> input;
	}

	std::cout << "Press ENTER to close.";
	std::cin.get();
	return 0;
}