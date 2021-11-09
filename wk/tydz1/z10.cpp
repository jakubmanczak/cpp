#include <iostream>
using namespace std;

int main(){
  string user1 = "admin", passw1 = "zaq1@WSX";
  string user,passw;

  cout << "LOGIN// Enter your credentials." << endl;
  cout << "username: ";
  cin >> user;
  cout << "password: ";
  cin >> passw;

  user == user1 && passw == passw1
    ? cout << "LOGIN// Logged in successfully."
    : cout << "LOGIN// Incorrect credentials.";

  return 0;
}