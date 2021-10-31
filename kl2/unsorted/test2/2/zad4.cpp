#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand(time(NULL));
  int gramy = 0 + rand() % (100000 - 0 + 1);
  int kilo, deka, maxGramy;

  maxGramy = gramy;

  kilo = gramy / 1000;
  gramy = gramy % 1000;

  deka = gramy / 10;
  gramy = gramy % 10;

  cout << maxGramy << " to " << kilo << " kilogramow, " << deka << " dekagramow oraz " << gramy << " gramow";
}