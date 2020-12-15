#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  int num;
  time_t czas;
  time(&czas);

start:
  cout << "Wybierz numer. \n 0 = zakonczenie programu. \n 1-2 = uczniowie o wybranym numerze \n Numer: ";
  cin >> num;
  switch (num)
  {
  case 0:
    return 0;
    break;
  default:
    // PODAWANIE LICZBY
    if (num == 1 || num == 2)
    {
      cout << "Dobry numer" << endl;
    }
    else
    {
      cout << "Nie ma ucznia o takim numerze" << endl;
      goto start;
    }
    // PODAWANIE CZASU
    cout << "Jest teraz " << ctime(&czas) << endl;
    break;
  }
  cout << "---------------" << endl;
  goto start;
}