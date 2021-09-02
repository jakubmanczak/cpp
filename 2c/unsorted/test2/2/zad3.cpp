#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand(time(NULL));
  double a = -25.3 + (double)rand() / RAND_MAX * (25.3 + 25.3);
  double b = -25.3 + (double)rand() / RAND_MAX * (25.3 + 25.3);
  double c = -25.3 + (double)rand() / RAND_MAX * (25.3 + 25.3);
  double d = -25.3 + (double)rand() / RAND_MAX * (25.3 + 25.3);

  double max = (a > b) ? (a > c) ? (a > d) ? a : d : (c > d) ? c : d : (b > c) ? (b > d) ? b : d : (c > d) ? c : d;

  cout << a << " " << b << " " << c << " " << d;
  cout << "\n Najwieksza jest liczba " << max;
}