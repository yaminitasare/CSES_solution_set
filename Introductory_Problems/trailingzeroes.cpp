#include<iostream>
using namespace std;
void num_zeroes(int k,int m){
if(k>0){
    int y = k;
    while(y%5==0){
        m++;
        y = y/5;
    }
    num_zeroes(k-5,m);
}
else{
    cout<<m;
}
}
int main(){
    long long int n;
    cin>>n;
    int m = 0;
    int p = n - n%5;
    num_zeroes(p,m);
}
