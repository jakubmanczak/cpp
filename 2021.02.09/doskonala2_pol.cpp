#include <iostream>
using namespace std;

/*
  Sprawdź, czy podana przez użytkownika całkowita liczba n/2 jest doskonała.
  Liczba doskonała to taka liczba naturalna, której suma jej dzielników właściwych
  (bez niej samej) jest jej równa. Taką liczbą jest na przykład 6 i 28:
      6 = 1 + 2 + 3
      28 = 28 = 1 + 2 + 4 + 7 + 14
*/

int main()
{
  int n, z = 0;
  cout << "Podaj n: ";
  cin >> n;
  n = n / 2;

  cout << "Dzielniki wlasciwe: ";
  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
      z += i;
    }
  }
  cout << "\nSuma wynosi: " << z << endl;
  if (n == z)
  {
    cout << "Liczba doskonala";
  }
  else
  {
    cout << "Liczba niedoskonala";
  }
}