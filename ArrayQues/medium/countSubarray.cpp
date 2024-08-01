#include <iostream>
using namespace std;
 
void count(vector<int> nums,int k){
    int sum = nums[0];
    int n = nums.size();
    int cnt=0;
    int left=0,right=0;
    while (right<n){
        while (sum>k && left<=right){
            sum-=nums[left];
            left++;
        }
        if(sum==k){
            cnt++;
        }
        right++;
        sum+=nums[right];
        
    }
    cout<<cnt;

}

int main() {
    vector<int> nums= {1,2,3};
    int k = 3;
    count(nums,k);

 
 
    return 0;
}