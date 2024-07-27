#include <iostream>
using namespace std;
 
void moveZeroes(vector <int> &nums){
    int j = -1;
    int n = nums.size();
    for(int i = 0 ; i< n ; i++){
        if (nums[i]==0){
            j=i;
            break;
        }
    }
    for (int i = j+1; i< n ; i++){
        if (nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
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
 
    vector<int> nums = {0,1,0,3,12};
    printArr(nums);
    moveZeroes(nums);
    printArr(nums);
 
    return 0;
}