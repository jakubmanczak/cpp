#include <iostream>

using namespace std;

int main()
{
  unsigned int n, liczba, suma = 0, s = 0;
  cout << "Podaj n ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    liczba = i;
    while (liczba != 0)
    {
      suma += liczba % 10;
      liczba /= 10;
    }
    if (suma == 10)
    {
      cout << i << " ";
      s += i;
    }
    suma = 0;
  }
  cout << "\nSuma tych liczb to: " << s;
  return 0;
}
