#include<iostream>

using namespace std;
int main()
{
    int n = 0;
    int k = 0;
    cin>>n>>k;
    int count = k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = k; i < n; i++){
        if(arr[k-1]==arr[i]){
            count++;
        } else {
            break;
        }
    }
    cout<<count;

}