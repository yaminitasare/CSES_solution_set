#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int m , n;
    m = n = 1;
    char c ;
    cout<<c;
    for(int i = 1; i<s.length();i++){
        if(s[i] == c){
            n++;
        }
        if(s[i] != c){
            c = s[i];
            n=1;
        }
    m = max(m,n);
    }
    cout<<m;
}
