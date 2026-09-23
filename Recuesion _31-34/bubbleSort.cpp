#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector <int> &arr,int size){
    if(size<=1)
    return;

    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    bubbleSort(arr,size-1);
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector<int>arr(size);
    cout<<"Enter the elements to be sorted "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,size);

    cout<<"\n The sorted elements are\n "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}