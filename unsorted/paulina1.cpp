#include <iostream>
using namespace std;

/*
    Zadanie 3 - Napisz program, który obliczy średnią z trzech liczb
    podanych przez uzytkownika. Możesz skorzystać tylko z dwóch zmiennych
    podanych w kodzie programu: float number, float result;
*/

int main(){
  
    float number, result = 0;

    cout << "Podaj pierwsza liczbe: ";
    cin >> number;
    result += number;

    cout << "Podaj druga liczbe: ";
    cin >> number;
    result += number;

    cout << "Podaj trzecia liczbe: ";
    cin >> number;
    result += number;

    result = result / 3;

    cout << "Twoja srednia wynosi: " + to_string(result);

}