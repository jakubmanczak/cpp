#include <iostream>
using namespace std;

int main(){

  // tablica statyczna trzymająca liczbę oraz dzień miesiąca
  // int temp[] = {
  //   1,19,  2,17,  3,19,  4,20, 5,22,  6,25,  7,29,
  //   8,24,  9,24,  10,23,  11,21,  12,19,  13,18,  14,14,
  //   15,15,  16,16,  17,17,  18,18,  19,19,  20,20,  21,21,
  //   22,22,  23,23  24,24,  25,25,  26,26,  27,29,  28,29,
  //   29,21,  30,19
  // }
  // nieużywana, niepotrzebna, poniżej zastosowana tablica statyczna

  // int * tempDynamic = new int[30];
  // przykład tablicy dynamicznej, poniżej zastosowana tablica statyczna
  int temp[] = {19,17,19,20,22,25,29,24,24,23,21,19,18,14,15,16,17,18,19,20,21,22,23,24,25,26,29,29,21,19};

  int srednia, licznikUlamka = 0, licznik;

  for (int i = 0; i < 30; i++)
  {
    licznikUlamka += temp[i];
    if(temp[i] >= 20 && temp[i] <= 22){ licznik++; }
  }

  cout << "Srednia temperatur wynosi " << licznikUlamka/30 << endl;
  cout << "Liczba dni w ktorych temperatura byla w zakresie od 20 do 22 wynosi " << licznik;
  return 0;
}