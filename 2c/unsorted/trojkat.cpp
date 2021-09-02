#include <iostream>
using namespace std;

// Każdy bok trójkąta ma długość mniejszą od sumy dwóch pozostałych boków.

int main()
{
  int a, b, c;
  cout << "Podaj boki trojkata: ";
  cin >> a >> b >> c;

  a < b + c &&b < a + c &&c < a + b
      ? cout << "Taki trojkat istnieje"
      : cout << "Taki trojkat nie istnieje";
}