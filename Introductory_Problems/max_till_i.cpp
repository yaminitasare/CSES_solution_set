#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int t=a[0];
    for(int j = 1;j<=n;j++){
        cout<<t<<" ";
        t= max(t,a[j]);
    }
}