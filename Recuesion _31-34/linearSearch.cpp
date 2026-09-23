#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr,int size,int k){
   if(size==0)
   return false;

   if(arr[0]==k)
   return true;

   return linearSearch(arr+1,size-1,k);
}

int main(){
    int k=0;
    int arr[5]={3,5,6,7,8};
    int size=5;

    if(linearSearch(arr,size,k))
    cout<<"The element is Present. ";
    else
    cout<<"The element is not Present.";

    return 0;
}