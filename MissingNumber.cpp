#include<iostream>
using namespace std;

int MissingNumber(int arr[], int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum+=arr[i];
    }
    int element = (n*(n+1))/2;
    int ans = element - sum;
    return ans;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans = MissingNumber(arr,n);
    cout<<ans<<endl;
}