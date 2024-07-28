#include <iostream>
using namespace std;
 

// {5,10,20,15};

int findPeak(vector<int> arr){
    int n = arr.size();
    if(n==1)return arr[0];
    if (n==2) return max(arr[0],arr[1]);
    int left = 0;
    int mid = left+1;
    int right = mid+1;
    while (mid<n){
        if (mid==n && arr[mid]>arr[left]){
            return arr[mid];
        }
        if (arr[mid]>arr[right] && arr[mid]>arr[left]){
            return arr[mid];
        }
        else{
            left++,right++,mid++;
        }
    }
    return -1;
}

int main() {
    vector<int> arr={1,2,14,15,13,30,32};
    cout<<findPeak(arr);
    
 
    return 0;
}