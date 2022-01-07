#include <iostream>
using namespace std;

int main(){
  int n, dzielnik = 2;
  cout << "podaj liczbę naturalną: ";
  cin >> n;
  cout << "Czynniki pierwsze: ";
  while(n != 1){
    if(n % dzielnik == 0){
      n = n / dzielnik;
      cout << dzielnik << " ";
    }else{ dzielnik++; }
  }
  return 0;
}