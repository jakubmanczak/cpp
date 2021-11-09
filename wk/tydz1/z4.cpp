#include <iostream>
#include <cmath>
using namespace std;

/*
  nie wiemy co to jest masa relatywistyczna ;)
  nie mieliśmy tego na fizyce, nikt inny nie wie
*/

int main(){
  int v, masaRzeczywista;
  long c = 299792458;

  cout << "podaj predkosc obiektu: ";
  cin >> v;
  cout << "podaj mase rzeczywista obiektu (w spoczynku): ";
  cin >> masaRzeczywista;

  cout << "\nrelatywistyczny wzrost masy wynosi: " << masaRzeczywista - (
    masaRzeczywista / sqrt(1 - (pow(v, 2) / pow(c, 2)))
  ) << endl;

  cout << "masa relatywistyczna wynosi: " << masaRzeczywista / sqrt(1 - (
    pow(v, 2) / pow(c, 2)
  )) << endl;

  cout << "pierwiastek ze wzoru masy relatywistycznej: " << sqrt(1 - (
    pow(v, 2) / pow(c, 2)
  )) << endl;
}