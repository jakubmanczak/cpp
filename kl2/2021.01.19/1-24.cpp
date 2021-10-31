#include <iostream>
using namespace std;

int main()
{
  int s = 1, a, i = 0;
  do
  {
    cout << "Podaj liczbe calkowita: ";
    cin >> a;
    if (a != 0)
    {
      s *= a;
      i++;
    }
  } while (s <= 10000);
  cout << "Liczba wprowadzonych wartosci: " << i << endl;
  cout << "Iloczyn wprowadzonych wartosci: " << s << endl;
}