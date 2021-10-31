#include <iostream>
using namespace std;

int main(){
  int waga;
  float wzrost, bmi;

  cout << "podaj swoja wage (w kg): ";
  cin >> waga;
  cout << "podaj swoj wzrost (w cm): ";
  cin >> wzrost;

  bmi = (waga / ((wzrost/100)*(wzrost/100)));

  cout << "twoje bmi wynosi: " << bmi << endl;
  if(bmi < 18.5){
    cout << "jestes za chudy";
  }else if(bmi > 25){
    cout << "jestes za gruby";
  }

  return 0;
}