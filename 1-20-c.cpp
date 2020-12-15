#include <iostream>
using namespace std;

int main()
{
  int z = -16, ilosc, suma = 0;

  cout << "Podaj n ";
  cin >> ilosc;

  for (int i = 0; i < ilosc; i++)
  {
    z += 6;
    suma += z;
    cout << z << endl;
  }
  cout << suma << endl;
  return 0;
}
