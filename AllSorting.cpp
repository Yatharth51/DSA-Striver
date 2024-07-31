#include <iostream>
using namespace std;
 

void selectionSort(vector<int> &arr){
    for ( int i = 0 ; i< arr.size()-1; i++){
        int mini = i;
        for (int j = i+1 ; j< arr.size();j++){
            if (arr[j]<arr[mini]){
                mini = j;
            }
        }
        if (mini!=i)swap(arr[mini],arr[i]);
    }
}

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for (int i = n-1 ; i>=1 ; i--){
        for (int j= 0 ; j<=i-1 ; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void insertionSort(vector<int> &arr){
    int n = arr.size();
    for (int i = 1 ;i< n; i++){
        for (int j = i ; j>0 ; j--){
            if (arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
}

void merge(vector<int> &arr,int left,int mid,int right){
    vector<int> temp(right-left+1);
    int leftindex = left;
    int rightindex= mid+1;
    int k = 0 ;
    while (leftindex<=mid && rightindex<=right){
        if (arr[leftindex]<=arr[rightindex]){
            temp[k]=arr[leftindex];
            k++;
            leftindex++;
        }
        else{
            temp[k]=arr[rightindex];
            k++;
            rightindex++;
        }
    }
    while (leftindex<=mid){
        temp[k]=arr[leftindex];
        k++;
        leftindex++;
    }
    while (rightindex<=right){
        temp[k]=arr[rightindex];
        k++;
        rightindex++;
    }
    leftindex= left;
    k = 0 ;
    while (leftindex<=right){
        arr[leftindex]=temp[k];
        leftindex++;
        k++;
    }
}


void mergeSort(vector<int> &arr,int left,int right){
    if (left>=right)return;
    int mid = left+(right-left)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);

}

int partition1(vector<int> &arr,int left,int right){
    int pivot = arr[left];
    int i = left;
    int j = right;
    while (i<j){
        while (arr[i]<=pivot && i<=right-1){
            i++;
        }
        while (arr[j]>pivot && j>=left+1){
            j--;
        }
        if (i<j){
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[left],arr[j]);
    return j;

}

void qs(vector<int> &arr,int left,int right){
    if (left<right){
        int partition = partition1(arr,left, right);
        qs(arr,left,partition-1);
        qs(arr,partition+1,right);

    }

}


void print(vector<int> &arr){
    for (int i = 0 ; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    vector<int> nums1 = {10,2,90,-2,10,1,1,0,5,90,2};

    print(nums1);
    qs(nums1,0,nums1.size()-1);
    print(nums1);

    return 0;
}