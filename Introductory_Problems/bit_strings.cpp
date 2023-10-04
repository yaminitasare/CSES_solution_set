#include<iostream>
#include<cmath>
long long int l = 1000000007;
using namespace std;
void hmm(int k,int m){
    if(k>=31){
    long long int y = pow(2,31);
    m = m*y % (l);
    hmm(k-31,m);
    }
    else{
        long long int y = pow(2,k);
        m = m *y % (l);
        cout<<m;
    }
}


// long long int power_mod(long long int n){
//     if(n == 0){
//         return 1;
//     }
//     return (2 * power_mod(n-1))%mod;
// }
int main(){
    long long int n;
    cin>>n;
     long long int p=1;
    hmm(n,p);
}