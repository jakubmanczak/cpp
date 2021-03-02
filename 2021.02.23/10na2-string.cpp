#include <iostream>
using namespace std;

int main()
{
  int n;
  string s;
  cout << "Podaj liczbe w systemie dziesietnym: ";
  cin >> n;
  cout << "Zamiana na postac binarna (od tylu): ";
  while (n)
  {
    s += (n % 2 ? "1" : "0");
    n /= 2;
  }
  cout << s;
}