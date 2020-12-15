#include <iostream>
using namespace std;

// 7-wyrazowy ciąg liczb postaci (12, 8, 4, 0, -4, -8, -12) z WHILE

int main(){
    int x = 12, max = -16;
    while(x > max){
        cout << x << endl;
        x = x - 4;
    }
    return 0;
}