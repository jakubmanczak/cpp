#include <iostream>
using namespace std;

/*
  Napisz program obliczający sumę liczb naturalnych z
  określonego przez użytkownika przedziału <x;y>
*/

int main()
{
  int x, y, sumaLiczb = 0;

  cout << "Podaj x dla przedzialu: ";
  cin >> x;
  cout << "Podaj y dla przedzialu: ";
  cin >> y;

  for (int i = x; i <= y; i++)
  {
    sumaLiczb += i;
  }

  cout << "Suma liczb przedzialu " << x << " do " << y << " to: " << sumaLiczb;
}