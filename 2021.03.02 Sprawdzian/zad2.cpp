#include <iostream>
using namespace std;

/*
      0,2 + (-0,5) + 0,8 + (-1,1) + 1,4 ...
      -------------------------------------
      32 * 16 * 8 * 4 * 2 * ...
*/

int main()
{
  int n;
  double l = 0.2, m = 64, m2 = 1, w;
  cout << "Podaj n: ";
  cin >> n;
  if (n > 0)
  {
    do
    {
      if (l > 0)
      {
        l *= -1;
        l -= 0.3;
      }
      else
      {
        l *= -1;
        l += 0.3;
      }
      m /= 2;
      m2 *= m;
      n--;
    } while (n);
    w = l / m;
    cout << "Wynik wynosi: " << w << endl;
  }
  else
  {
    cout << "n musi byc wieksze od zera.";
  }
}