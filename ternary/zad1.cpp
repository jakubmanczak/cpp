#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// liczba = p + (double)rand() / RAND_MAX * (q - p);
// liczba = p + rand()%(q-p+1)

int main()
{
  double liczba;
  srand(time(NULL));
  liczba = -112 + (double)rand() / RAND_MAX * (275 - 112);
  cout << (liczba > 0 ? liczba : -liczba);
  return 0;
}