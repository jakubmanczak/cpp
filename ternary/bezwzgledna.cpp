#include <iostream>
using namespace std;

int main()
{
  int a;
  // cout << a < 0 ? -a : a;
  cout << "Podaj liczbe a: ";
  cin >> a;
  a < 0
      ? cout << -a
      : cout << a;
  return 0;
}