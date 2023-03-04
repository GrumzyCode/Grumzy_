#include <iostream>
using namespace std;

int main()
{
    cout << "Static with pointers:" << endl;
    int arr[10];
    int* p = arr;
    for (int i = 0; i < 10; i++) {
        *(p + i) = i * i;
    }
    for (int i = 0;i < 10;i++) {
        cout << "arr[" << i << "] = " << *(p + i) << endl;
    }
}
