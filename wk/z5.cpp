#include <iostream>
using namespace std;

int main(){
  int wiek1,wiek2;

  cout << "podaj wiek osoby1: ";
  cin >> wiek1;
  cout << "podaj wiek osoby2: ";
  cin >> wiek2;

  if(wiek1 > wiek2){
    cout << "osoba nr.1 jest starsza";
  }else if(wiek1 < wiek2){
    cout << "osoba nr.2 jest starsza";
  }else{
    cout << "obie osoby maja rowny wiek";
  }
  if(wiek1 > 100 && wiek2 > 100){
    cout << "\nobie osoby maja ponad 100 lat";
    cout << "\to calkiem sporo lat";
  }
  
  return 0;
}