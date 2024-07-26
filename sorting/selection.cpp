#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <set>
#include<map>

void Sel(int *arr,int n){
    for (int i = 0 ;i< n-1 ; i++){
        int min = i;
        for (int j = i+1 ; j<n ; j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        if (min!=i){
            swap(arr[i],arr[min]);
        }
    }
}

void min(int *arr, int ind, int n){
    int min = ind;
    for (int i = ind ; i<n ; i++){
        if (arr[i]<arr[min]){
            min=i;
        }
    }
    if (min!=ind) swap(arr[min],arr[ind]);
}


void recSel(int*arr, int ind , int n){
    if (ind>=n-1) return ;
    min(arr,ind,n);
    recSel(arr,ind+1,n);
}

void printArr(int *arr,int n){
    for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[]={20,20,10,2,90,100,8,1,1};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    printArr(arr,n);
    Sel(arr,n);
    printArr(arr,n);
    return 0;
}