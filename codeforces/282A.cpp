#include<iostream>
using namespace std;
int main(){
    int n = 0;
    cin>>n;
    int x = 0;
    for(int i = 0; i < n; i++){
        string op;
        cin>>op;
        if(op[1] == '+'){
            x++;
        } else {
            x--;
        }
    }
    cout<<x;
}