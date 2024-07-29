#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    int c=0;
    int n=S.length();
    for(int i=0;i<n;i++){
        if(S[i]>=97 && S[i]<=122){
            c++;
        }
    }
    cout<<c<<endl;
}