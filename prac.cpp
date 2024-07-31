#include <iostream>
using namespace std;

int remdups(vector<int> &nums){
    int n = nums.size();
    int i = 0;
    int j = i+1;
    while(j<n){
        int curelem = i;
        while (nums[j]==nums[curelem]){
            j++;
        }
        if (j<n && nums[j]!=nums[curelem]){
            i++;
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return i+1;

}

void printnums(vector<int> nums,int n){
    for (int i = 0 ; i<n ; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    vector<int> nums = {1,1};
    printnums(nums,nums.size());
    cout<<remdups(nums)<<endl;
    int n = remdups(nums);
    printnums(nums,n);
    return 0;
}