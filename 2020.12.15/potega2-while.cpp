#include <iostream>
using namespace std;

int main(){
    int n, potega = 1, i = 0;
    cout << "Podaj n: ";
    cin >> n;
    while(i < n){
        cout << "2 do potegi " << i << " wynosi " << potega << endl;
        potega*=2;
        i++;
    }
    return 0;
}