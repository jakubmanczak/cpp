#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Podaj liczbe w systemie dziesietnym: ";
  cin >> n;
  cout << "Zamiana na postac binarna (od tylu): ";
  while (n > 0)
  {
    cout << n % 2;
    n /= 2;
  }
}