#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float r, h;

  cout << "podaj promien podstawy walca: ";
  cin >> r;
  if(r < 0) { cout << "promien mniejszy od zera"; return 0; }

  cout << "podaj wysokosc walca: ";
  cin >> h;
  if(h<0) { cout << "wysokosc mniejsza od zera"; return 0; }

  cout << "pole powierzchni walca wynosi " << ( 2 * M_PI * r * r ) + ( 2 * M_PI * r * h ) << endl;
  cout << "objetosc walca wynosi " << M_PI * r * r  * h;

  return 0;
}