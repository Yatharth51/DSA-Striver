#include <iostream>
using namespace std;
//brute O(n2);
int maxSum(vector<int> nums){
   int sum;
    int maxs=INT_MIN;
    if (nums.size()==1)return nums[0];
    for (int i = 0 ; i< nums.size(); i++){
        sum=0;
        for (int j = i ; j< nums.size();j++){
            sum+=nums[j];
            maxs = max(maxs,sum);
        }
        maxs = max(maxs,sum);
    }
    return maxs;
}

//optimal using kadane's algorithm;
int maxSum1(vector<int> nums){
   int n = nums.size();
   if (n==1)return nums[0];
   int maxsum = INT_MIN;
   int sum = 0 ;int start,end;
   for (int i = 0 ; i< n ; i++){
     if (sum<0){
        start = i;
        sum=0;
    }
    sum+=nums[i];
    if (sum>maxsum){
        maxsum=sum;
        end = i;
    }
   }
   for (int i = start ; i<=end; i++){
        cout<<nums[i]<<" ";
   }
   cout<<endl;
   return maxsum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSum1(nums);
 
    return 0;
}
