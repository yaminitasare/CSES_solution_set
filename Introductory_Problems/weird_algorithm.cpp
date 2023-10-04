#include<iostream>
using namespace std;

void print_n(long long int n){
    cout<<n<<" ";
        if(n%2==0 && n!=1){
            
            print_n(n/2);
        }
        else if(n!=1 && n%2!=0){
            
            print_n(n*3 +1);
        }
    
}
int main(){
    long long int n;
    cin>>n;
    print_n(n);

}