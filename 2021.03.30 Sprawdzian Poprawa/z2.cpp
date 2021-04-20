#include <iostream>
using namespace std;

int main()
{
  double licznikSuma = 0, mianownikSuma = 1, licznik = 0.1, mianownik = 13, n;

  cout << "Podaj liczbe n: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    licznikSuma += licznik;
    mianownikSuma *= mianownik;
    licznik *= -2;
    mianownik -= 3;
  }

  cout << "Wynik wynosi: " << licznikSuma / mianownikSuma;
}