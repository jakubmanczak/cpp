#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Podaj 3 liczby calkowite: ";
  cin >> a >> b >> c;
  cout << "Najmniejsza liczb jest: " << (a < b && a < c ? a : (b < c ? b : c));
  return 0;
}