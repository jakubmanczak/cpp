#include <iostream>
using namespace std;

int main()
{
  int x, y, x2;
  cout << "Podaj x: ";
  cin >> x;
  cout << "Podaj y: ";
  cin >> y;

  x2 = x;

  if (x > 1 && y > 1 && x < y)
  {
    cout << "Ciag to:";
    do
    {
      cout << " " << x;
      x *= x2;
    } while (x < y);
  }
}