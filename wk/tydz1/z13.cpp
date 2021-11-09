#include <iostream>
using namespace std;

int main(){
  int a,b,c, maxNum;

  cout << "podaj a: ";
  cin >> a;
  cout << "podaj b: ";
  cin >> b;
  cout << "podaj c: ";
  cin >> c;
  
  maxNum = max(a, max(b,c));

  if(maxNum == a){
    b*b + c*c == a*a ? cout << "\nliczba stanowi trojke pitagorejska" : cout << "\nto nie jest trojka pitagorejska.";
  }else if(maxNum == b){
    a*a + c*c == b*b ? cout << "\nliczba stanowi trojke pitagorejska" : cout << "\nto nie jest trojka pitagorejska.";
  }else if(maxNum == c){
    a*a + b*b == c*c ? cout << "\nliczba stanowi trojke pitagorejska" : cout << "\nto nie jest trojka pitagorejska.";
  }
  
  return 0;
}