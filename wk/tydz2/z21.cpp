#include <iostream>
using namespace std;

int main(){
  int triesleft = 3;
  string username = "admin";
  string password = "securepassword";
  string u,p;

  while(triesleft){
    cout << "podaj nazwę użytkownika: ";
    cin >> u;
    cout << "podaj hasło użytkownika " << username << ": ";
    cin >> p;

    if(u == username && p == password){
      cout << "gratulacje użytkowniku";
      return 0;
    }
    triesleft -= 1;
  }
  cout << "troche ci prób zabrakło kolego";
  return 1;
}