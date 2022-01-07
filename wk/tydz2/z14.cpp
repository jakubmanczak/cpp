#include <iostream>
using namespace std;

int main(){
  int num;

  cout << "Podaj liczbe: ";
  cin >> num;

  if(num < 0){
    cout << "Liczba jest ujemna";
  }else if (num == 0){
    cout << "Silnia: 1";
  }else{
    int wynik = 1;
    for(int i = 1; i <= num; i++){
      wynik *= i;
    }
    cout << "Silnia: " << wynik;
  }
  return 0;
}