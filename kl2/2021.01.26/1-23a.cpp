#include <iostream>
using namespace std;

int main()
{
  char typPetli;
  int ilosc;

  // Zmienne specyficzne dla zadania
  int a = -2, i = 0;

  cout << "Jaka forme petli wybierasz?\nWpisz 'f' dla for\nWpisz 'w' dla while\nWpisz 'd' dla do-while\nTwoj wybor: ";
  cin >> typPetli;
  cout << "Ile razy powinna zadzialac petla? Wpisz liczbe: ";
  cin >> ilosc;

  switch (typPetli)
  {
  case 'f':
    for (int iDwa = 0; iDwa < ilosc; iDwa++)
    {
      cout << a << endl;
      a *= -1;
      if (a < 0)
      {
        a -= 3;
      }
      else
      {
        a += 3;
      }
    }
    break;
  case 'w':
    while (i < ilosc)
    {
      cout << a << endl;
      a *= -1;
      i++;
      if (a < 0)
      {
        a -= 3;
      }
      else
      {
        a += 3;
      }
    }
    break;
  case 'd':
    do
    {
      cout << a << endl;
      a *= -1;
      i++;
      if (a < 0)
      {
        a -= 3;
      }
      else
      {
        a += 3;
      }
    } while (i < ilosc);
    break;
  default:
    cout << "Nie ma takiego rodzaju petli.";
    break;
  }
}