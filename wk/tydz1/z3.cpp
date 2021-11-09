#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float a, b, c, delta, x1, x2;

  cout << "podaj wspolczynnik a: ";
  cin >> a;
  cout << "podaj wspolczynnik b: ";
  cin >> b;
  cout << "podaj wspolczynnik c: ";
  cin >> c;

  cout << "twoje rownanie: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

  if(a != 0){
    delta = b*b - 4*a*c;
    if(delta > 0){
      x1 = ( -b - sqrt(delta) ) / (2*a);
      x2 = ( -b + sqrt(delta) ) / (2*a);
      cout << "x1 = " << x1 << "; x2 = " << x2 << ";";
    }else if(delta == 0){
      x1 = ( -b ) / (2*a);
      cout << "x = " << x1 << ";";
    }else{
      cout << "rownanie nie ma rozwiazan.";
    }
  }else{
    cout << "x = " << (-c)/b << ";"; // wzor na rozwiazanie bx+c=0
  }

  return 0;
}