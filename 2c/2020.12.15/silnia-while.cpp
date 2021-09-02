#include <iostream>
using namespace std;

// napisz program silnia-while.cpp obliczajacy silnie podanej liczby

int main(){
    int n, wynik = 1, i = 1;
    cout << "Podaj liczbe n: ";
    cin >> n;

    if(n == 0){
        wynik = 1;
        cout << "Silnia wynosi: " << wynik;
        return 0;
    }

    while(i <= n){
        wynik *= i;
        i++;
    }
    
    cout << "Silnia wynosi: " << wynik;
    return 0;
}