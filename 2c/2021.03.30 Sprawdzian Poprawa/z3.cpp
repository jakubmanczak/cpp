#include <iostream>
using namespace std;

int main()
{
  int n, liczba, pierwiastek, zmienna, check = 0;

  cout << "Podaj n: ";
  cin >> n;

  for (liczba = 2; liczba < pierwiastek; liczba++)
  {
    if (n % liczba == 0)
    {
      check++;
    }
  }
  if (check == 0)
  {
    cout << "a";
  }
}