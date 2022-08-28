#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n , int key){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>key;
    int ans = linearSearch(arr,n,key);
    cout<<ans<<endl;
}