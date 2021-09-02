#include <iostream>
using namespace std;

/*
  Zapisać program, który wyznacza sumę cyfr dowolnej liczby całkowitej n
  wprowadzonej z klawiatury.
*/

int main()
{
  int n, sumaCyfr = 0;
  cout << "Podaj n: ";
  cin >> n;
  while (n)
  {
    sumaCyfr += n % 10;
    n = n / 10;
  }
  cout << "Suma cyfr to: " << sumaCyfr;
}