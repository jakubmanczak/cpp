#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  // losowa od 4 do 20
  // przedszkole - od 4
  // podstawowka - od 7
  // szkola srednia - od 14
  srand(time(NULL));
  int los = 4 + rand() % (20 - 4 + 1);
  cout << "Osoba jest w wieku lat " << los << "." << endl;
  los > 7 ? (los > 14 ? cout << "chodzi do szkoly sredniej" : cout << "chodzi do podstawowki") : cout << "chodzi do przedszkola";
}