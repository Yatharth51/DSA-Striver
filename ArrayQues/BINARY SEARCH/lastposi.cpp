#include <iostream>
using namespace std;
 

int lowerb(vector<int>& nums, int target){
    int n = nums.size();
    
    int low = 0 ;
    int high = n-1;
    if (n==0)return -1;
    int lowerb=-1;
    while (low<=high){
        int mid = low +(high-low)/2;
        if (nums[mid]>=target){
            lowerb = mid;
            high=mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return lowerb;
}

int first(vector<int> &nums, int target){
        int low = 0 ; int high = nums.size()-1;
        int first =-1;
        while (low<=high){
            int mid = low +(high-low)/2;
            if (nums[mid]==target){
                first = mid;
                high = mid-1;
            }
            else if (target>nums[mid]) low = mid+1;
            else high = mid-1;
        }
        return first;
    }

int last(vector<int> &nums, int target){
        int low = 0 ; int high = nums.size()-1;
        int last =-1;
        while (low<=high){
            int mid = low +(high-low)/2;
            if (nums[mid]==target){
                last = mid;
                low=mid+1;
            }
            else if (target>nums[mid]) low = mid+1;
            else high = mid-1;
        }
        return last;
    }

int main() {
    vector<int> nums = {2,2,8,8,8,8};
    // vector<int> ans= first(nums,2);
    // for(int i =0 ; i< 2 ; i++){
    //     cout<<ans[i]<<" ";
    // }
    cout<<first(nums,8)<<last(nums,8);
 
    return 0;
}