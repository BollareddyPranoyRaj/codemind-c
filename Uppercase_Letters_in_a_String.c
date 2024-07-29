#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    int n=S.length();
    int c=0;
    for(int i=0;i<n;i++){
        if(isupper(S[i])){
            c++;
        }
    }
    cout<<c<<endl;
}