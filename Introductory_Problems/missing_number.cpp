#include<iostream>
using namespace std;
bool number(int arr[],int n){
    bool hmm[n+1] = {false};

    for(int i = 0;i<(n-1);i++){
        hmm[arr[i]] = true;
    }

    for(int i = 1;i<(n+1);i++){
        if(hmm[i] == false){
            cout<<i;
        }
    }
    return NULL;
}

int main(){
    int n;
    cin>>n;
    int a[n-1];
    for(int i = 0;i<n-1 ; i++){
        cin>>a[i];
    }
    number(a,n);
}