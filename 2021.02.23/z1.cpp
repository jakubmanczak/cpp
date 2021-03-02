#include <iostream>
using namespace std;

int main()
{
  int n, x = 0;

  cout << "Podaj n: ";
  cin >> n;

  for (int i = n; i > 0; i--)
  {
    //cout << " " << n;
    if (n % 10 == 1 || n % 10 == 2 || n % 10 == 7)
    {
      x += n;
    }
    n--;
  }

  cout << " " << x;
  return 0;
}
