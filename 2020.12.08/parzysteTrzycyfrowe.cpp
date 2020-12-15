#include <iostream>
using namespace std;

int main()
{
  cout << "Rosnaco" << endl;
  for (int i = 100; i < 1000; i += 2)
  {
    cout << i << " ";
  }
  cout << "\nMalejaco" << endl;
  for (int i = 999; i > 99; i -= 1)
  {
    if (i % 2 == 0)
    {
      cout << i << " ";
    }
  }
}