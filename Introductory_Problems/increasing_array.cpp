#include<iostream>
using namespace std;

int hmm(long long int n,long long int arr[]){
    long long int m = 0;
    for(long long int i = 0;i<n-1; i++){
        if(arr[i]>arr[i+1]){
            while(arr[i+1]!=arr[i]){
                m++;
                arr[i+1]++;
            }
        }
    }
        cout<<m;

    return 0;
}

int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i = 0;i<n ; i++){
        cin>>a[i];
    }
    hmm(n,a);
}