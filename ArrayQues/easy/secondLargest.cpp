#include <iostream>
using namespace std;
 
int SecondLargest(vector<int>arr){
    int n= arr.size();
    if (n==1)return -1;
    int largest = arr[0] ; 
    int secondLargest = INT_MIN;
    for (int i = 1; i< n ; i++){
        if (arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}

int main() {
 
    vector<int> arr = {1,2,4,7,7,5};
    cout<<SecondLargest(arr);
 
    return 0;
}