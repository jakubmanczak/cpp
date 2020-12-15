#include <iostream>

using namespace std;

int main()
{
    int a, s1=0, s2=0;
cout<<"Podaj dziesiec liczb calkowitych "<<endl;
    for(int i=1;i<=10;i++)
        {
            cin>>a;
            if(a<0)
                s1++;
            else
                s2++;
        }
        cout<<"Liczba podanych liczb ujemnych wynosi: " <<s1<<endl;
        cout<<"Liczba podanych liczb dodatnich wynosi: " <<s2<<endl;

    return 0;
}

