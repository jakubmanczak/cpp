#include <iostream>
using namespace std;

int main(){
  string users[] = {"root","admin","jakub","jamesbond","artur","mollin","heavyTF2","engineerGaming","1337hacker","whoknows"};
  string passwords[] = {".","zaq1@WSX","manczak","madeleine","warframe","celeste","pocketMedic","engineerGaming","goodPassword","iLikeTurtles"};

  string user,passwd;
  bool loginLoop = true;

  while(loginLoop){
    cout << "\n\nLOGIN// Enter your credentials." << endl;
    cout << "username: ";
    cin >> user;
    cout << "password: ";
    cin >> passwd;

    for (int i = 0; i < (sizeof(users)/sizeof(*users)); i++){
      if(user == users[i] && passwd == passwords[i]){
        cout << "LOGIN// Logged in successfully.";
        loginLoop = false;
      }
    }
    
    if(loginLoop){
      cout << "LOGIN// Incorrect credentials.";
    }
  }

  return 0;
}