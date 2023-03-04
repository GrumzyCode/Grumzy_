#include <iostream>
using namespace std;

int main()
{
    cout << "Dynamic with index:" << endl;
    int* arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i * i;
    }
    for (int i = 0; i < 10; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    delete[] arr;
}
