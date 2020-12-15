#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Podaj liczbe naturalna: ";
  cin >> a;
  a >= 1
      ? cout << "Silnia wynosi: " << b << a * (a + 1) / 2
      : cout << "Liczba jest zbyt mala";
  return 0;
}