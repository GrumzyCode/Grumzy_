#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(){
int switch_to_stop=0; // I didn't fully understand the task, but I just did it my way
while (switch_to_stop!=1){ //Here u can get as many
    double x;
    cout<<"Write x value you want to see f(x) for: ";
    cin>>x;
    if (x==0){
        cout<<"Error no 0 allowed"<<endl;
        }
    else cout<<"f(x) = "<<sin(x)/x<<endl;
    cout<<"Want to stop? Press 1"<<endl;
    cout<<"Want to continue? Press 0"<<endl;
    cin>>switch_to_stop;
}
system("clear"); //To clear screen although this one works only on Linux
int MAX;
cout<<"Write MAX number you want S to go to: ";
cin>>MAX;
int a=0, b=1, s=0,n=1;
while (s+b<=MAX){ //A simple Fibonacci numbers generator
    s+=b;
    int c=b;
    b=b+a;
    a=c;
    n+=1;
}
s+=b; n+=1; // Because we need +1 extra step to make it more then MAX as it's intended in the task
cout<<s<<" "<<n;
}
