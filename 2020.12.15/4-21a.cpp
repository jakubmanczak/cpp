#include <iostream>
using namespace std;

int main(){
  unsigned int n;
  double a = 0;

  cout << "Podaj n: ";
  cin >> n;

  if(n != 0){
    while(n){
      a += n;
      n--;
    } 
    cout << "Wynik to " << (2.0 * (double) n) / a;
  }else{
    cout << "Zle dane";
  }
  return 0;
}