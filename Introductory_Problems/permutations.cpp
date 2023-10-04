#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
     int t = 1;
    if(n<4 && n!=1){
        cout<<"NO SOLUTION";
    }
   
    else{
        for(int i = 0;i<n;i++){
            if(i%2 != 0){
                a[i] = (i+1)/2;
            }
            else{
                if(n%2 == 0){
                    a[i] = n/2 + t;
                    t++;
                }
                else{
                    a[i] = (n+1)/2 + t - 1;
                    t++;
                }
            }
        }
        
    for(int j = 0;j<n;j++){
        cout<<a[j]<<" ";
    }
    }

}