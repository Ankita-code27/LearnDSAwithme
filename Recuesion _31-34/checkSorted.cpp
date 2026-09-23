#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int size){
    if(size==0||size==1)
    return true;

    if(arr[0]>arr[1])
    return false;
    
    return sorted(arr+1,size-1);
    }

int main(){
    int arr[5]={3,4,5,3,1};
    int size=5;
    if(sorted(arr,size))
    cout<<"The elements are sorted";
    else
    cout<<"The elements are not Sorted";

    return 0;
}