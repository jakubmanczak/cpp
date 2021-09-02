#include <iostream>
using namespace std;

// obliczanie sumy n-wyrazowego ciagu liczb calkowitych postaci (-10, -4, 2, 8, 14, 20...)

int main(){
    int x, i = 0, suma = 0;
    cout << "Podaj x: ";
    cin >> x;

    while(i < x){
        suma += 6;
        i++;
    }

    cout << "Suma " << x << "-wyrazowego ciagu to: " << suma;
    return 0;
}