#include <iostream>
using namespace std;

int main(){
    int a, s1 = 0, s2 = 0, i = 1;
    cout << "Podaj 10 liczb calkowitych: " << endl;
    while(i <= 10){
        cin >> a;
        a < 0 ? s1++ : s2++;
        i++;
    }
    cout << "Liczba podanych liczb ujemnych wynosi: " << s1 << endl;
    cout << "Liczba podanych liczb nieujemnych wynosi: " << s2 << endl;
    return 0;
}
