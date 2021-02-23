#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Podaj liczbe: ";
    cin>>n;

    cout<<"Czynniki pierwsze: ";

    int k=2;
    while(n>1){
        // cout << "k: "<< k <<endl;
        while(n%k==0){
            cout<<k<<", ";
            n/=k;
        }
        ++k;
    }

    return 0;
}
