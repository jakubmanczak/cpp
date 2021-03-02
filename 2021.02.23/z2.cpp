#include <iostream>
using namespace std;

int main()
{
  int n, x = 0;

  cout << "Podaj n: ";
  cin >> n;

  for (int i = n; i > 0; i--)
  {
    if (n % 100 == 17 || n % 100 == 31 || n % 100 == 62)
    {
      x += n;
    }
    n--;
  }

  cout << x;
  return 0;
}
