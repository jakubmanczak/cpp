#include <iostream>
using namespace std;

int main(){
  int num;

  cout << "podaj num: ";
  cin >> num;

  if(num < 2){ cout << "to nie liczba pierwsza"; return 0; }
  for(int i = 2; i < num; i++){
    if(num % i == 0){ cout << "to nie liczba pierwsza"; return 0; }
  }
  cout << num << " to liczba pierwsza";
  return 0;
}