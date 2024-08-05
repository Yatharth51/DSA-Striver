#include <iostream>
using namespace std;
    
void func(vector<int> nums,int target){
    int low = 0 ; int high = nums.size()-1;
    int floor=-1,ceil=-1;
    if (target<nums[0]){
        ceil = nums[0];
        cout<<floor<<" "<<ceil<<endl;
        return;
    }
    else if (target>nums[high]){
        floor = nums[high];
        cout<<floor<<" "<<ceil<<endl;
        return;
    }
    while (low<=high){
        int mid = low + (high-low)/2;
        if (nums[mid]==target){
            floor=ceil=target;
            cout<<floor<<" "<<ceil<<endl;
            return;
        }
        else if (target>nums[mid] && target<nums[mid+1]){
            floor = nums[mid];
            ceil = nums[mid+1];
            cout<<floor<<" "<<ceil<<endl;
            return;
        }
        else if (target<nums[mid]&& target>nums[mid-1]){
            floor = nums[mid-1];
            ceil = nums[mid];
            cout<<floor<<" "<<ceil<<endl;
            return;
        }
        else if (target>nums[mid]){
            low=mid+1;
        }
        else high = mid-1;

    }
    cout<<floor<<" "<<ceil<<endl;
    return;
}


int main() {
    vector<int> nums = {3, 4, 4, 7, 8, 10};
    int target = 6; //output = 4,7
    // if target =2 ; output = -1,3
    //if target = 11 ; output = 10,-1
    
    func(nums,target);
 
    return 0;
}