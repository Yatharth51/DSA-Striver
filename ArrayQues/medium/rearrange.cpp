#include <iostream>
using namespace std;

vector<int> temp;

void rearr(vector<int> &nums){
    vector<int> temp(nums.size());
    int pos = 0,neg = 1;

    for (int i = 0 ; i< nums.size(); i++){
        if (nums[i]>0){
            temp[pos]=nums[i];
            pos+=2;
        }
        else if (nums[i]<0){
            temp[neg]=nums[i];
            neg+=2;
        }
    }
    for (int i = 0 ; i< nums.size(); i++){
        nums[i]=temp[i];
    }
}

void print(vector<int> &arr){
    for (int i = 0 ; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
 
    vector<int> nums= {1,2,-3,-1,-2,3};
    print(nums)
    ;
    nums.pop_back();
    print(nums);
 
    return 0;
}