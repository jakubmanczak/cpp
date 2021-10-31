#include <iostream>
using namespace std;

/* napisz program alfabet-while.cpp wypisujacy na ekranie wszystkie duze
litery angielskiego alfabetu. w realizacji zadania wykorzystaj rzutowanie
liczby calkowitej int na znak char. przyda ci sie rowniez informacja ze
w tabeli kodow ascii wielkim literom alfabetu odpowiadaja liczby z zakresu
od 65 do 90 */

int main(){
    int i = 65;
    while(i < 91){
        cout << char(i) << " ";
        i++;
    }
    return 0;
}