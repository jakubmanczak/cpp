#include <iostream>

int main()
{
  int i = 0, counter = 0, n, sum = 0;
  std::cout << "Podaj n: ";
  std::cin >> n;

  while (true)
  {
    int a = i / 10;
    int b = i % 10;
    if ((a + b) % 2 == 0)
    {
      std::cout << i << std::endl;
      sum += i;
      counter++;
    }

    if (counter == n)
      break;

    i++;
  }

  std::cout << "\nWynik to: " << sum;

  return 0;
}