#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int choice, input, convert = 0;
  while(true){
    cout << "Jeżeli chcesz zamienić liczbę binarną na dziesiętną, wpisz 0." << endl;
    cout << "Jeżeli chcesz zamienić liczbę dziesiętną na binarną, wpisz 1." << endl;
    cout << "Twój wybór: ";
    cin >> choice;
    if(choice == 0 || choice == 1){ break; }
    cout << "Jeszcze raz: " << endl;
  }

  cout << "Wpisz liczbę: ";
  cin >> input;

  if(!choice){ // bin na dec
    // 
  }else{ // dec na bin
    // 
  }
  cout << "Twój wynik to: " << convert;
}