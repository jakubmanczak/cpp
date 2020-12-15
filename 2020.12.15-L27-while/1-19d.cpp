#include <iostream>
using namespace std;

// 6-wyrazowy ciąg liczb postaci (12, 8, 4, -4, -8, -12) z WHILE

int main(){
    int x = 12, max = -16;
    while(x > max){
        if(x != 0)
            cout << x << endl;
        x = x - 4;
    }
    return 0;
}