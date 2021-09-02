#include <iostream>
using namespace std;

/*
  Napisz program, którego zadaniem jest wczytywanie z klawiatury
  20 liczb całkowitych oraz wypisanie informacji ile podanych
  zostało liczb parzystych oraz liczb nieparzystych.
*/

int main()
{
  int a, p = 0, n = 0;

  for (int i = 0; i < 20; i++)
  {
    cout << "Podaj liczbe a po raz " << i + 1 << ": ";
    cin >> a;
    a % 2 == 0
        ? p++
        : n++;
  }
  cout << "Liczb parzystych jest: " << p << endl;
  cout << "Liczb nieparzystych jest: " << n;
}