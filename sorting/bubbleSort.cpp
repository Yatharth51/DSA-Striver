#include <iostream>
using namespace std;
 
void bubbleSort(int *arr , int n){
    for (int i = n-1 ; i>=1 ; i--){
        int didswap = 0;
        for (int j = 0 ; j<= i-1 ; j++){
            if (arr[j]>arr[j+1]){
                didswap=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if (didswap==0) break;
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
    bubbleSort(arr,n);
    printArr(arr,n);
 
    return 0;
}