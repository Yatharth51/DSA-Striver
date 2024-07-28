#include <iostream>
using namespace std;


//brute force

void sort(vector<int> &arr){
    int temp[3]={0};
    int n = arr.size();
    for (int i = 0 ; i< n ; i++){
        temp[arr[i]]++;
    }
    int k = 0;
    for (int i = 0 ; i< 3 ; i++){
        while (temp[i]!=0){
            arr[k]=i;
            k++;
            temp[i]--;
        }
    }

}

//optimal approach  DUTCH NATIONAL FLAG ALGORITHM
void sortO(vector<int> &nums){
    int n = nums.size();
    int low = 0 ;
    int mid = 0 ; 
    int high = n-1;
    while (mid<=high){
        if (nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid]==1){
            mid++;
        }
        else if (nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

void printArr(vector<int> arr){
    for (int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    
    vector<int> arr = {2,0,1};
    printArr(arr);
    sortO(arr);
    printArr(arr);
    
 
    return 0;
}