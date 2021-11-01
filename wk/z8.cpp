#include <iostream>
using namespace std;

int main(){
  int rok;

  cout << "podaj rok: ";
  cin >> rok;

  if(
    ( rok % 4 == 0 && (rok % 100 != 0) ) ||
    rok % 400 == 0
  ){
    cout << "rok jest przestepny";
  }else{
    cout << "rok nie jest przestepny";
  }
  
  return 0;
}