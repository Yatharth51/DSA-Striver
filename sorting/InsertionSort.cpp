#include <iostream>
using namespace std;
 
void insertionSort(int *arr, int n){
    for (int i = 0 ; i<= n-1 ; i++){
        int j = i ; 
        while (j>0 && arr[j-1]>arr[j]) {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
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
    insertionSort(arr,n);
    printArr(arr,n);
 
 
    return 0;
}