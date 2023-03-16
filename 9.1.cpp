#include <bits/stdc++.h>
using namespace std;
int main(){
char test[] = "Hello World!";

cout<<"Len of string is: "<<strlen(test)<<endl<<endl; // The first
char moretext[] = "Nice to meet you!";

strcat(test, moretext); // Second
cout<<test<<endl<<endl;

char badtest[] = "Hello Wurld!"; //Third
char goodtest[] = "Hello World!";
char shorttest[] = "Hello!";
cout<<"If 1 and 2 strings are not same:"<<strcmp(test,badtest)<<endl;
cout<<"If 1 and 2 strings are same:"<<strcmp(test,goodtest)<<endl;
cout<<"If 1 if shorter then 2 string:"<<strcmp(test,shorttest)<<endl<<endl;

return 0;
}
