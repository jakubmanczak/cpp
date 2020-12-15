#include <iostream>
using namespace std;

// wyświetlanie n-wyrazowego ciągu liczb całkowitych postaci (-3, 6, -12, 24, -48...)

int main(){
    int x = -3, n;
    cout << "Podaj n: ";
    cin >> n;

    while(n > 0){
        cout << x << endl;
        x *= (-2);
        n--;
    }
    return 0;
}