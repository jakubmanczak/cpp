#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = -3; i; i = i * (-2))
    {
        cout << i << endl;
    }
    return 0;
}
