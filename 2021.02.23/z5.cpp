#include <iostream>

int main()
{
  int n, sumNum = 0;
  std::cout << "Podaj n: ";
  std::cin >> n;

  int first = 1; //pierwszy dzielnik
  while (first <= n)
  {
    if (n % first == 0)
    {
      sumNum += first;
    }
    first++;
  }

  if (sumNum == (n + 1) && n >= 1)
    std::cout << "Liczba jest pierwsza";
  else
    std::cout << "Liczba nie jest pierwsza";

  return 0;
}