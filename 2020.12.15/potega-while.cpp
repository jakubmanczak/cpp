#include <iostream>
using namespace std;

/* napisz program potega-while.cpp obliczajacy dowolna potege naturalna dowolnej
liczby naturalnej. a^0 = 1, 0^0 nie istnieje. */

int main(){
    int liczba, potega, wynik, i;

    cout << "Podaj liczbe naturalna: ";
    cin >> liczba;
    cout << "Podaj potege naturalna: ";
    cin >> potega;

    if(liczba == 0 && potega == 0){
        cout << "Zerowa potega zera nie istnieje.";
        return 1;
    }

    wynik = liczba;
    i = potega;

    while(i > 1){
        wynik *= liczba;
        i--;
    }
    
    cout << "Liczba " << liczba << " do potegi " << potega << " rowna sie " << wynik;
    return 0;
}