#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float uWorkingNumber = 0;
  float uOperationNumber = 0;
  char uOperation;

  cout << "KALKULATOR KONSOLOWY CPP / @jakubmanczak" << endl;
  cout << "----------------" << endl;
  cout << "operacje:" << endl;
  cout << "+ (dodawanie)" << endl;
  cout << "- (usuwanie)" << endl;
  cout << "* (mnożenie)" << endl;
  cout << "/ (dzielenie)" << endl;
  cout << "^ (potęgowanie)" << endl;
  cout << "s (pierwiastkowanie)" << endl;
  cout << "q (wyjście z programu)" << endl;

  while(true){
    cout << "----------------" << endl;
    cout << uWorkingNumber << endl;
    cout << "----------------" << endl;
    cout << "Możliwe operacje: +, -, *, /, ^, s, q" << endl;
    cout << "Wybierz operację: "; cin >> uOperation;
    if(uOperation == 'q') break;
    // maybe use string instead and split it into operator and operationNum ?
    if(uOperation != 's'){
      cout << "Podaj liczbę do zastosowania w operacji: "; cin >> uOperationNumber;
    }
    switch (uOperation)
    {
    case '+': uWorkingNumber = uWorkingNumber + uOperationNumber; break;
    case '-': uWorkingNumber = uWorkingNumber - uOperationNumber; break;
    case '*': uWorkingNumber = uWorkingNumber * uOperationNumber; break;
    case '/': uWorkingNumber = uWorkingNumber / uOperationNumber; break;
    case '^': uWorkingNumber = pow(uWorkingNumber, uOperationNumber); break;
    case 's': uWorkingNumber = sqrt(uWorkingNumber); break;
    default:
      cout << "Nie ma takiej operacji." << endl;
      break;
    }
  }
  return 0;
}