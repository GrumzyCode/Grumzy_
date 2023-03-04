#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    int Arr[10];
    for (int i = 0; i < 10; i++)
    {
        *(Arr + i) = i * i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << setw(5) << *(Arr + i);
    }
    cout << endl;
    return 0;
}
