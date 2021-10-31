#include <iostream>
using namespace std;

/*
    Korzystając z pętli iteracyjnej do-while napisz programy w cpp
    do poniższego zadania:
      4*(-8)*12*(-16)*20

    Wykonać tyle razy ile n.
*/

int main()
{
  int i = 0, n, a = 4, iloczyn = 1;
  bool minus = false;
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
    iloczyn *= a;
    if (a < 0)
    {
      a *= -1;
    }
    a += 4;
    i++;
  } while (i < n);
  cout << "SUMA: " << iloczyn;
}