#include <iostream>

void clear(){
	printf("\033c");
}

void log(const char* message){
	std::cout << message << std::endl;
}