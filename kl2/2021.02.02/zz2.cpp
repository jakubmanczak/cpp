#include<iostream>
using namespace std;

int main()
{
    int n, m, c=1;

    cout<<"Podaj liczbe: ";
    cin>>n;

    cout<<"Czynniki pierwsze: ";

    int k=2;
    while(n>1){
        //cout << "k: "<< k <<endl;
        while(n%k==0){

            while((n/k)%k==0){
                c++;
                n/=k;
                //cout << "k: "<< k << " c: "<< c <<endl;
                }
                if (c>1){
                    cout<<k<<"^"<< c <<", ";
                }else {
                    cout<<k<<", ";
                }
            n/=k;
        }
        c=1;
        ++k;
    }

    return 0;
}
