#include <iostream>
using namespace std;

int main(){
  unsigned int n;
  double x = 0, y = 3, z = 1;

  cout << "Podaj n: ";
  cin >> n;

  if(n != 0){
    while(n){
      x += 2 * y / z;
      y += 2;
      x--;
      z++;
    }
    cout << "Wynik to: " << x;
  }else{
    cout << "Zle dane!";
  }
  return 0;
}