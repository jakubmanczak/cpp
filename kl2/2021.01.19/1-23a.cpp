#include <iostream>
using namespace std;

/*
    Korzystając z pętli iteracyjnej do-while napisz programy w cpp
    do poniższego zadania:
      -2+5-8+11-14+...

    Wykonać tyle razy ile n.
*/

int main()
{
  int i = 0, n, a = 2, suma = 0;
  bool minus = true;
  cout << "Podaj n: ";
  cin >> n;
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
    suma += a;
    if (a < 0)
    {
      a *= -1;
    }
    a += 3;
    i++;
  } while (i < n);
  cout << "SUMA: " << suma;
}