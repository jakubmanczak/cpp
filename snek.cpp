#include <iostream>

void clear(){
	printf("\033c");
}
struct point{
	int x;
	int y;
};

struct snake{
	point head;
	point previous[64];
	int bodylength = 0;
};

struct screen{
	char table[16][64];
	char fillchar = ' ';
	char bodychar = '.';
	char headchar = 'O';
	char scruchar = 'S';
	void fill(){
		for(int i = 0; i < 16; i++){
			for(int j = 0; j < 64; j++){
				table[i][j] = fillchar;
			}
		}
	}
	void print(){
		// the frame
		for(int i = 0; i < 68; i++){
			std::cout << "=";
		}
		std::cout << std::endl;
		// the game (and a bit of the frame, but a tiny one)
		for(int i = 0; i < 16; i++){
			std::cout << "||";
			for(int j = 0; j < 64; j++){
				std::cout << table[i][j];
			}
			std::cout << "||";
			std::cout << std::endl;
		}
		// the frame
		for(int i = 0; i < 68; i++){
			std::cout << "=";
		}
		std::cout << std::endl;
		std::cout << "||";
		for(int i = 0; i < 28; i++){
			std::cout << " ";
		}
		std::cout << "The Snek";
		for(int i = 0; i < 28; i++){
			std::cout << " ";
		}
		std::cout << "||";
		std::cout << std::endl;
		for(int i = 0; i < 68; i++){
			std::cout << "=";
		}
		std::cout << std::endl;
	}
};

int generateRandomNumber(int low, int high){
	return rand()%((high - low) + 1) + low;
}

struct message{
	char content[32];
	int uptime;
};

int main(){
	clear();

	screen def;

	int score = 0;

	point sneki; // snek initial
	sneki.x = 8; sneki.y = 3;
	snake snek; snek.head = sneki;

	point scoreup;
	srand(time(NULL));
	scoreup.x = generateRandomNumber(0, 63);
	scoreup.y = generateRandomNumber(0, 15);

	char input;
	// char inputmessage[16] = "";
	while(true){

		if(
			snek.head.x < 0 || snek.head.y < 0 ||
			snek.head.x > 63 || snek.head.y > 15
		){
			for(int i = 0; i < 68; i++){
				std::cout << "-";
			}
			std::cout << std::endl;
			std::cout << "\nThe snek has hit the wall and perished. Because of You." << std::endl;
			std::cout << "It has eaten " << score << " piece" << (score == 1 ? "" : "s") << " of fruit in its miserable life." << std::endl;
			std::cout << "\nDo you feel good with what you've done?" << std::endl;
			// std::cout << "Your final score: " << score << std::endl; 
			break;
		}
	
		clear();
		def.fill();
		def.table[snek.head.y][snek.head.x] = def.headchar;

		if( snek.head.x == scoreup.x && snek.head.y == scoreup.y ){
			score += 1;
			snek.bodylength += 1;
			scoreup.x = generateRandomNumber(0, 63);
			scoreup.y = generateRandomNumber(0, 15);
		}

		def.table[scoreup.y][scoreup.x] = def.scruchar;

		def.print();
		std::cout << "Score: " << score << ". " << "Use the WASD keys to move around. Input: ";// << std::endl;
		// std::cout << inputmessage << std::endl;
		// inputmessage = "";

		// debug couts
		// std::cout << "\nLength: " << snek.bodylength << std::endl;
		
		std::cin >> input;
		switch(input){
			case 'w':
				snek.head.y -= 1;
				break;
			case 's':
				snek.head.y += 1;
				break;
			case 'a':
				snek.head.x -= 1;
				break;
			case 'd':
				snek.head.x += 1;
				break;
			default:
				// inputmessage = "Bad input.";
				break;
		}
	}
}