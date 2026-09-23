#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(string s,int i,int j){
    if(i>j){
        return true;
    }
    if(s[i]!=s[j])
    return false;

    return isPallindrome(s,i+1,j-1);
    
}

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    if (isPallindrome(s,0,s.length()-1))
    cout<<"It is Pallindrome.";
    else
    cout<<"It is not Pallindrome.";

    return 0;
}