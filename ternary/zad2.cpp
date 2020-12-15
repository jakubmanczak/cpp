#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

// liczba = p + (double)rand() / RAND_MAX * (q - p);
// liczba = p + rand()%(q-p+1)

int main()
{
  float liczba;
  srand(time(NULL));
  liczba = -112 + rand() % (275 - 112 + 1);
  liczba = std::abs(liczba);
  cout << liczba;
  return 0;
}