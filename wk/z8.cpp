#include <iostream>
using namespace std;

int main(){
  int rok;

  cout << "podaj rok: ";
  cin >> rok;

  (rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0
    ? cout << "rok jest przestepny"
    : cout << "rok nie jest przestepny";
  
  return 0;
}