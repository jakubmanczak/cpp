#include <iostream>
using namespace std;

int main(){
  char op;
  int a,b;

  cout << "podaj operator arytmetyczny (+, -, /, *, %): ";
  cin >> op;
  cout << "podaj a: ";
  cin >> a;
  cout << "podaj b: ";
  cin >> b;

  if(op == 0x2B){ // +
    cout << "wynikiem dzialania jest: " << a + b;
  }else if(op == 0x2D){ // -
    cout << "wynikiem dzialania jest: " << a - b;
  }else if(op == 0x2F){ // /
    cout << "wynikiem dzialania jest: " << a / b;
  }else if(op == 0x2A){ // *
    cout << "wynikiem dzialania jest: " << a * b;
  }else if(op == 0x25){ // %
    cout << "wynikiem dzialania jest: " << a % b;
  }else{
    cout << "zly operator";
  }
  return 0;
}