#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float a, b, c, p;
  cout << "Podaj dlugosci bokow: ";
  cin >> a >> b >> c;

  p = (a + b + c) / 2;
  p *(p - a) * (p - b) * (p - c) >= 0
      ? cout << "Pole wynosi: " << sqrt(p * (p - a) * (p - b) * (p - c))
      : cout << "Trojkat nie istnieje";
  return 0;
}