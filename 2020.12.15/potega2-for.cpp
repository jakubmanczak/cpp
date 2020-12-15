#include <iostream>
using namespace std;

int main(){
    int n, potega = 1;
    cout << "Podaj n: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "2 do potegi " << i << " wynosi" << potega << endl;
        potega*=2;
    }
    return 0;
}