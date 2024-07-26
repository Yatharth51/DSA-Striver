#include <iostream>
using namespace std;
 

void merge(int* arr, int left,int mid, int right){
    vector<int> temp;
    int leftInd = left;
    int rightInd = mid+1;
    while (leftInd<=mid && rightInd<=right){
        if (arr[leftInd]<=arr[rightInd]){
            temp.push_back(arr[leftInd]);
            leftInd++;
        }
        else{
            temp.push_back(arr[rightInd]);
            rightInd++;
        }
    }

    while (leftInd<=mid){
        temp.push_back(arr[leftInd]);
        leftInd++;
    }
    while (rightInd<=right){
        temp.push_back(arr[rightInd]);
        rightInd++;
    }
    leftInd = left;
    int i = 0;
    while (leftInd<=right){
        arr[leftInd]=temp[i];
        leftInd++;
        i++;
    }
}


void mergeSort(int *arr, int left , int right){
    if (left>=right) return ;
    int mid = left + (right-left)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
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
    mergeSort(arr,0,n-1);
    printArr(arr,n);
 
    return 0;
}