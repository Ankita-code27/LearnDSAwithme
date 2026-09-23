#include <bits/stdc++.h>
using namespace std;

int power(int a,int b){
    if(a==0)
    return 0;
    if(b==0)
    return 1;

    int ans=power(a,b/2);
    if(b%2 == 0)
    return ans*ans;
    else
    return a*(ans*ans); 
}

int main(){
    int a,b;
    cout <<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    cout<<"Result : "<<power(a,b);

    return 0;
}