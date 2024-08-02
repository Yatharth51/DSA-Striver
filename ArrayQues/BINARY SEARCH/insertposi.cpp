#include <iostream>
using namespace std;
 
int searchp(vector<int> nums,int target){
    int low = 0, high = nums.size()-1;
    if (target<nums[0]){
        return 0;
    }
    else if (target>nums[high]){
        return high+1;
    }
    while (low<=high){
        int mid = low +(high-low)/2;
        if (nums[mid]==target){
            return mid;
        }
        else if (target>nums[mid] && target<nums[mid+1]){
            return mid+1;
        }
        else if(target<nums[mid] && target>nums[mid-1]){
            return mid;
        }
        else if (target<nums[mid]){
            high=mid-1;
        }
        else if(target>nums[mid]){
            low = mid+1;
        }
    }
    return -1;
}

int main() {
 
    vector<int> arr = {1,3,5,6};
    int target = 7;
    cout<<searchp(arr,target);
 
    return 0;
}