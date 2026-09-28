#include <iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int valid = 0;
    for(int i = 0; i < n; i++){
        int a,b,c;
        int count = 0;
        cin>>a>>b>>c;
        if(a){
            count++;
        }
        if(b){
            count++;
        }
        if(c){
            count++;
        }

        if(count>1){
            valid++;
        }
    }

    cout<<valid;
}