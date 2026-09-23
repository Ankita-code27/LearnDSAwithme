#include <bits/stdc++.h>
using namespace std;

int sum(int *arr,int size){
    if(size==1)
    return arr[0];

    return arr[0]+sum(arr+1,size-1);
}

int main(){
    int arr[5]={2,4,5,6,8};
    int size=5;
    cout<<"Sum of the given array elements are : "<<sum(arr,size);
}