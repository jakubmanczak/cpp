#include <iostream>
#include <cmath>
using namespace std;

/*
  nie wiem co to jest masa relatywistyczna
  nie mieliśmy tego na fizyce
*/

int main(){
  int v, masaRzeczywista;
  long c = 299792458;


  cout << "podaj predkosc obiektu: ";
  cin >> v;
  cout << "podaj mase rzeczywista obiektu (w spoczynku): ";
  cin >> masaRzeczywista;

  cout << "relatywistyczny wzrost masy wynosi " << (
    masaRzeczywista - (
      masaRzeczywista / (
        sqrt(1 - (
          (v*v) / (c*c)
        ))
      )
    )
  );

  cout << "\nmasa relatywistyczna wynosi " << masaRzeczywista / sqrt(1 - (
    (v*v) / (c*c)
  ));
}