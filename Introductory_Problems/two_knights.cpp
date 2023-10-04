#include<iostream>
using namespace std;

void count(long long int n){
    if(n == 1 ){
        cout<<0<<endl;
        return;
    }
    if(n>1){
        count(n-1);
        cout<<(n*n*(n*n -1)/2 - (n-1)*(n-2)*2*2)<<endl;
    }

}
int main(){
    long long int n;
    cin>>n;
    count(n);
}