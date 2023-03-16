#include <bits/stdc++.h>
using namespace std;
int main(){
string slova[20];
int a;
cin>>a;
for(int i=0;i<a;i++){
    cin>>slova[i];
}
for (int i=0;i<a;i+=2)
    cout<<slova[i]<<" ";
}
