#include <iostream>
using namespace std;

int main()
{
  long long int n, a = 0, b = 1, q;
  cout << "Podaj n: ";
  cin >> n;
  for (q = 2; q <= n; q++)
  {
    b += a;
    a = b - a;
  }
  cout << b << " ";
}