#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  int num;
  time_t czas;
  time(&czas);

  int oceny[] = {5,4};

  start:
    cout << "Wybierz numer.\n  0 = zakonczenie programu. \n  1-2 = uczniowie o wybranym numerze \nNumer: ";
    cin >> num;
    switch (num)
    {
    case 0:
      return 0;
      break;
    default:
    cout << "---------------------------" << endl;
    cout << "---------------------------" << endl;
    cout << "--------SPRAWDZANIE--------" << endl;
    cout << "---------------------------" << endl;
    cout << "---------------------------" << endl;
      // PODAWANIE LICZBY
      if (num == 1 || num == 2)
      {
        cout << "Uczen o tym numerze dostal ostatnio ocene "<< oceny[num-1] << endl;
      }
      else
     {
        cout << "Nie ma ucznia o takim numerze" << endl;
        goto start;
      }
      // PODAWANIE CZASU
      cout << "Jest teraz " << ctime(&czas);
      break;
    }
  cout << "---------------" << endl;
  goto start;
}