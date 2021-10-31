#include <iostream>
using namespace std;

int main()
{
  int i = 0, x = 1, y = 0, z = 0;
  while (x <= 9)
  {
    while (y <= 9)
    {
      while (z <= 9)
      {
        if (x != y && x != z && y != z)
        {
          cout << x << y << z << " ";
          i++;
        }
        z++;
      }
      z = 0;
      y++;
    }
    y = 0;
    x++;
  }
  cout << "\nLiczb trzycyfrowych o niepowtarzajacych sie cyfrach jest: " << i;
}