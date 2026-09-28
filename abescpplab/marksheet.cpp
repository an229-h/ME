#include<iostream>
using namespace std;

int main(void){
    cout<<"MARKSHEET PROGRAM\n";
    string name = "John Doe\n";
    cout<<name;
    int p,c,m,b,e;
    cout<<"Enter Subjects as PCMBE\n";
    cin>>p>>c>>m>>b>>e;
    float total = p+c+m+b+e;
    cout<<"Total = "<<total<<"/500\n";
    cout<<"PCM average = "<<(p+c+m)/3.0<<endl;
    cout<<"Percentage = "<<total/5.0<<endl;



}