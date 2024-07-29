#include<iostream>
using namespace std;
bool ispalin(string st1){
     int l=0;
     int r =st1.length()-1;
     while(l<r){
         if(st1[l]!=st1[r]){
             return false;
         }
       l++;
       r--;
     }
     return true;
}
int main(){
    string st1;
    cin>>st1;
    if(ispalin(st1)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
}