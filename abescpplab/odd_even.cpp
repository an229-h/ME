#include<iostream>
using namespace std;
int main(void){
    int a;
    cout<<"Enter Number to Check Even Odd\nNumber: ";
    cin>>a;

    (a%2)?cout<<a<<" is odd.\n":cout<<a<<" is even.\n";
    return 0;
}