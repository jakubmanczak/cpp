#include <iostream>
using namespace std;

struct point{
	int x;
	int y;
};

int main(){
	printf("\n");

	point array[8];
	array[0].x = 1; array[0].y = 1;
	array[1].x = 2; array[1].y = 2;
	array[2].x = 3; array[2].y = 3;
	array[3].x = 4; array[3].y = 5;
	array[4].x = 5; array[4].y = 8;
	array[5].x = 6; array[5].y = 13;
	array[6].x = 7; array[6].y = 21;
	array[7].x = 8; array[7].y = 34;
	
	point index;

	while(true){
		cout << "CURRENT ARRAY" << endl;
		for(int i = 0; i < 8; i++){
			cout << "[" << array[i].x << ";" << array[i].y << "] ";
		}
		cout << "\n\nPlease enter a new point to push into the array." << endl;
		cout << "Alternatively, press Ctrl+C to quit." << endl;
		cout << "New \"Index 0\" x: "; cin >> index.x;
		cout << "New \"Index 0\" y: "; cin >> index.y;

		for(int i = 7; i > 0; i--){
			array[i].x = array[i-1].x;
			array[i].y = array[i-1].y;
		}
		array[0].x = index.x; array[0].y = index.y;
	}
	
	return 0;
}