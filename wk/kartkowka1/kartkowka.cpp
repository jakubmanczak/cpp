#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int prostokat1x[4];
  int prostokat1y[4];
  int prostokat2x[4];
  int prostokat2y[4];
  int prostokat3x[4];
  int prostokat3y[4];
  int pola[3];

  cout << "wierzcholki ida w kolejnosci: 0 = lewy dolny; 1 = prawy dolny; 2 = prawy gorny; 3 = lewy gorny" << endl;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
      cout << "Podaj wspolrzedna x " << j+1 << " wierzchołek " << i+1 << " prostokąta.";
      if(i == 0){ cin >> prostokat1x[j]; }
      else if(i == 1){ cin >> prostokat2x[j]; }
      else if(i == 2){ cin >> prostokat3x[j]; }
      cout << "Podaj wspolrzedna y " << j+1 << " wierzchołek " << i+1 << " prostokąta.";
      if(i == 0){ cin >> prostokat1y[j]; }
      else if(i == 1){ cin >> prostokat2y[j]; }
      else if(i == 2){ cin >> prostokat3y[j]; }
    }
  }

  int pole1 = ( abs(prostokat1x[0] - prostokat1x[1]) ) * ( abs(prostokat1y[3] - prostokat1y[0]) );
  int pole2 = ( abs(prostokat2x[0] - prostokat2x[1]) ) * ( abs(prostokat2y[3] - prostokat2y[0]) );
  int pole3 = ( abs(prostokat3x[0] - prostokat3x[1]) ) * ( abs(prostokat3y[3] - prostokat3y[0]) );

  cout << "pole1 wynosi " << pole1 << endl;
  cout << "pole2 wynosi " << pole2 << endl;
  cout << "pole3 wynosi " << pole3 << endl;

  return 0;
}