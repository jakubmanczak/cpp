#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = -12; i <= 12; i += 4)
    {
        if (i == 0)
            continue;
        {
            cout << i << endl;
        }
    }
    return 0;
}
