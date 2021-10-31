#include <iostream>
using namespace std;

/*
  Zapisać program, który wyznacza liczbę cyfr dowolnej liczby całkowitej
  n wprowadzonej z klawiatury.
*/

int main()
{
  int n, liczbaCyfr = 0;
  cout << "Podaj n: ";
  cin >> n;
  while (n)
  {
    liczbaCyfr += 1;
    n = n / 10;
  }
  cout << "Liczba cyfr to: " << liczbaCyfr;
}