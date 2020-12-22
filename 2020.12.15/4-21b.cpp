#include <iostream>
using namespace std;

int main(){
  unsigned int n;
  double a = 0;

  cout << "Podaj n: ";
  cin >> n;

  if(n != 0){
    while(n){
      a += (1 / (2 * (double)n));
      n--;
    }
    cout << "Wynik to " << a;
  }else{
    cout << "Zle dane.";
  }
  return 0;
}