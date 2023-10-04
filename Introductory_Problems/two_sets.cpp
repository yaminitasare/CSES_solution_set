#include<iostream>
using namespace std;

void hmm(int k){
    if(k%4 == 1 or k%4 == 2){
    cout<<"NO";    
    }
    else{
        cout<<"YES"<<endl;
        if(k%2 == 0){
            cout<<k/2<<endl;
            for(int i = 1;i<k/2;){
                cout<<i<<" ";
                i = i+2;
            }
            for(int j = k/2 + 2; j<=k;){
                cout<<j<<" ";
                j = j+2;
            }

            cout<<endl<<k/2<<endl;
            for(int i = 2; i<= k/2;){
                cout<<i<<" ";
                i = i+2;
            }
            for(int j = k/2 + 1; j<=k;){
                cout<<j<<" ";
                j = j+2;
            }
        }
        else{
            cout<<(k+1)/2<<endl;
            cout<<1<<" ";
            cout<<2<<" ";
            for(int i = 4;i<=(k+1)/2;){
                cout<<i<<" ";
                i = i+2;
            }
            for(int j = (k+1)/2 + 3; j<=k;){
                cout<<j<<" ";
                j = j+2;
            }
            
            cout<<endl<<k/2<<endl;
            cout<<3<<" ";
            for(int i = 5; i<= (k+3)/2;){
                cout<<i<<" ";
                i = i+2;
            }
            for(int j = (k+3)/2 + 1; j<k;){
                cout<<j<<" ";
                j = j+2;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    hmm(n);
}