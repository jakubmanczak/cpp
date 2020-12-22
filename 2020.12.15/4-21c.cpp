#include <iostream>
using namespace std;

int main(){
  unsigned int x, y, w;

  cout << "Podaj x: ";
  cin >> x;

  y = x - 1;

  double w = 4 / (double)x;
  if(x != 0){
    while(y){
      w *= (3 + (double)y) / (double)x;
      y--;
    }
    cout << "Wynik to: " << w;
  }else{
    cout << "Zle dane!";
  }
  return 0;
}