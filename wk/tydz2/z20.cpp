#include <iostream>
using namespace std;

int main(){
  string pytanie,odp1,odp2,odp3;
  int c1 = 0, c2 = 0, c3 = 0;
  cout << "// Zadaj pytanie ankietowe: ";
  getline(cin, pytanie);
  cout << "/ Podaj pierwszą możliwą odpowiedz: ";
  getline(cin, odp1);
  cout << "/ Podaj drugą możliwą odpowiedz: ";
  getline(cin, odp2);
  cout << "/ Podaj trzecią możliwą odpowiedz: ";
  getline(cin, odp3);

  while(true){
    int odp;
    cout << "\n\n\n\n///// Ankieta: " << pytanie << "\n" << endl;
    cout << "/// Odpowiedź 1: " << odp1 << endl;
    cout << "( Aktualnie " << c1 << " głosów )\n" << endl;
    cout << "/// Odpowiedź 2: " << odp2 << endl;
    cout << "( Aktualnie " << c2 << " głosów )\n" << endl;
    cout << "/// Odpowiedź 3: " << odp3 << endl;
    cout << "( Aktualnie " << c3 << " głosów )\n" << endl;
    cout << "/ Wybierz odpowiedź wpisując numer 1, 2, 3 lub 0 by zakończyć ankietowanie." << endl;
    cout << "/ Twoja odpowiedź: ",
    cin >> odp;
    if(odp == 0){
      break;
    }else if(odp == 1){
      c1 += 1;
    }else if(odp == 2){
      c2 += 1;
    }else if(odp == 3){
      c3 += 1;
    }else{
      cout << "\nNie ma takiej opcji. Jeszcze raz: " << endl;
    }
  }

  cout << "\n\n\n\n\n\n\n\n///// Wyniki ankiety: " << endl;
  cout << "/// Odpowiedź 1: " << c1 << " głosów" << endl;
  cout << "/// Odpowiedź 2: " << c2 << " głosów" << endl;
  cout << "/// Odpowiedź 3: " << c3 << " głosów" << endl << endl;

  int sumaglosow = c1 + c2 + c3;
  int c1proc = c1 * 100 / sumaglosow;
  int c2proc = c2 * 100 / sumaglosow;
  int c3proc = c3 * 100 / sumaglosow;

  cout << "///// \"" << pytanie << "\"" << endl;

  cout << "/// Opcja 1:" << odp1 << endl; cout << "/// #";
  for(int i = 0; i < c1proc / 4; i++){ cout << "#"; }
  cout << "\n";
  cout << "/// Opcja 2:" << odp2 << endl; cout << "/// #";
  for(int i = 0; i < c2proc / 4; i++){ cout << "#"; }
  cout << "\n";
  cout << "/// Opcja 3:" << odp3 << endl; cout << "/// #";
  for(int i = 0; i < c3proc / 4; i++){ cout << "#"; }
  cout << "\n";

  return 0;
}