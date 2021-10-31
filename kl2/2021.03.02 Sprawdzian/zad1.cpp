#include <iostream>
using namespace std;

int main()
{
  for (int i = 48; i >= 2; i--)
  {
    if (i % 7 == 0)
    {
      cout << i << " ";
    }
  }
}