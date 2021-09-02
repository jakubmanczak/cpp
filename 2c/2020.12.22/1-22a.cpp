#include <iostream>
using namespace std;

/*
algorytm iteracyjny w postaci programu realizujacy
wypisywanie liczb naturalnych z przedzialu [2;16) // ???
podzielnych przez 3 w kolejnosci od najmniejszej
do najwiekszej.
*/

int main(){
  int a = 2;

  while(a < 17){
    a%3 == 0
      ? cout << " " << a << " "
      : cout << " " << "-" << " ";
    a++;
  }

  return 0;
}