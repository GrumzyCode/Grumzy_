#include <iostream>
#include <stdlib.h>
using namespace std;

void generate(unsigned int N, int* arr) {
unsigned int z;
for (unsigned int i = 0; i < N; i++) {
  arr[i] = rand() % 18;
}
for (int i = 0;i <= N - 2;i++) {
  int j = i;
  while ((j > -1) && (arr[j] > arr[j + 1])) {
    z = arr[j + 1];
    arr[j + 1] = arr[j];
    arr[j] = z;
    j--;
}
  }
    }

void pack(unsigned int N, int* arr, unsigned int* a) {
for (unsigned int i = 0; i < N;i++) {
  a[arr[i]]++;
  }
}

void unpack(int* arr, unsigned int* a) {
int k = 0;
for (unsigned short int i = 0; i < 18; i++) {
  while (a[i] != 0) {
    arr[k] = i;
    k++;
    a[i]--;
    }
  }
}

int main()
{
  srand(time(NULL));
  unsigned int N;
  int* arr;
  unsigned int a[18] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
  cout << "Enter N (amount of numbers >> 1000)" << endl;
  cin >> N;
  arr = new int[N];
  generate(N, arr);
  for (int i = 0; i < N; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  pack(N, arr, a);
  delete[] arr;

  cout << "{";
  for (unsigned short int i = 0; i < 18; i++) {
    cout << a[i] << "; ";
  }
  cout << "}" << endl;

  arr = new int[N];

  for (int i = 0; i < N;i++) {
    arr[i] = 0;
  }

  unpack(arr, a);

  for (unsigned int i = 0; i < N; i++) {
    cout << arr[i] << "; ";
  }

  delete[] arr;
}
