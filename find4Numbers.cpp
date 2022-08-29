#include<iostream>
using namespace std;

bool find4Numbers(int arr[] , int n , int X){

    sort(arr,arr+n);
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            int l = j + 1;
            int r = n - 1;
            while( l < r ){
                int sum = arr[i]+arr[j]+arr[l]+arr[r];

                if(sum == X){
                    return true;
                }
                if(sum > X){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
    }
    return false;
}

int main()
{
    int n,X;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>X;
    bool ans = find4Numbers(arr,n,X);
    cout<<ans<<endl;

}