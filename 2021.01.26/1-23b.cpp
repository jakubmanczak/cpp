#include <iostream>
using namespace std;

int main()
{
  char typPetli;
  int ilosc;

  // Zmienne specyficzne dla zadania
  int a = 4, i = 0, n, iloczyn = 1;
  bool minus = false;

  cout << "Jaka forme petli wybierasz?\nWpisz 'f' dla for\nWpisz 'w' dla while\nWpisz 'd' dla do-while\nTwoj wybor: ";
  cin >> typPetli;
  cout << "Ile razy powinna zadzialac petla? Wpisz liczbe: ";
  cin >> ilosc;

  switch (typPetli)
  {
  case 'f':
    for (int iDwa = 0; iDwa < ilosc; iDwa++)
    {
      if (minus == true)
      {
        a *= -1;
        minus = false;
      }
      else
      {
        minus = true;
      }
      cout << a << endl;
      i++;
      iloczyn *= a;
      if (a < 0)
      {
        a *= -1;
      }
      a += 4;
    }
    cout << "SUMA: " << iloczyn;
    break;
  case 'w':
    while (i < ilosc)
    {
      if (minus == true)
      {
        a *= -1;
        minus = false;
      }
      else
      {
        minus = true;
      }
      cout << a << endl;
      i++;
      iloczyn *= a;
      if (a < 0)
      {
        a *= -1;
      }
      a += 4;
    }
    cout << "SUMA: " << iloczyn;
    break;
  case 'd':
    do
    {
      if (minus == true)
      {
        a *= -1;
        minus = false;
      }
      else
      {
        minus = true;
      }
      cout << a << endl;
      iloczyn *= a;
      if (a < 0)
      {
        a *= -1;
      }
      a += 4;
      i++;
    } while (i < ilosc);
    cout << "SUMA: " << iloczyn;
    break;
  default:
    cout << "Nie ma takiego rodzaju petli.";
    break;
  }
}