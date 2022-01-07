#include <iostream>
using namespace std;

int main(){
  string log = "correctlogin";
  string psw = "correctpassword";

  while(true){
    string iLog,iPsw;
    cout << "Enter your login: ";
    cin >> iLog;
    cout << "Enter your password: ";
    cin >> iPsw;

    if(iLog == log && iPsw == psw){
      cout << "Correct credentials";
      return 0;
    }
    cout << "Incorrect credentials" << endl;
  }
}