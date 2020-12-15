#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x, wynik;
  cout << "Podaj liczbe: ";
  cin >> x;
  if (x == 2)
  {
    wynik = abs(x - 4);
    cout << "Liczba to: " << wynik;
    return 0;
  }
  else
  {
    x < 2
        ? wynik = (3 * x * x) + (2 * x)
        : wynik = 3 * sqrt(x) + 7;
    cout << "Liczba to: " << wynik;
  }
}