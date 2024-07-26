#include <iostream>
using namespace std;

void printArr(int *arr,int n){
    for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition1(int* arr, int left,int right){
    int pivot = left;
    int i = left, j= right;
    while (i<j){
        while (arr[i]<=arr[pivot] && i<=right-1){
        i++;
        }
        while (arr[j]>arr[pivot] && j>=left+1){
        j--;
        }
        if (i<j) swap(arr[i],arr[j]);
    }
    swap(arr[pivot],arr[j]);
    // j comes at the last position of the left sub array
    return j;

}

void qs(int* arr, int left, int right){
    if (left<right){
        int partition = partition1(arr,left,right);
        qs(arr,left,partition-1);
        qs(arr,partition+1,right);
    }
}


int main() {
 
    int arr[]={20,20,10,2,90,100,8,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    printArr(arr,n);
    qs(arr,0,n-1);
    printArr(arr,n);
 
    return 0;
}