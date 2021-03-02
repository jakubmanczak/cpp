#include <iostream>
using namespace std;

int main()
{
  int count = 0, n;
  cout << "Podaj n rowne 62, 17 lub 31 (ostatnia liczba poczatkowa do sumy): ";
  cin >> n;

  if (n == 31 || n == 62 || n == 17)
  {
    for (int i = 0; i < n; i++)
    {
      count += i;
    }
    cout << count;
  }
  else
  {
    cout << "Podales niepoprawna liczbe.";
  }
  return 0;
}