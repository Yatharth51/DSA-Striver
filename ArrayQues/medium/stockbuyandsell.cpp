#include <iostream>
using namespace std;
 
int maxp(vector<int> nums){
    int maxp = 0;
    int buy = 0 ; int sell = nums.size()-1;
    while (buy<sell){
        int profit= nums[sell]-nums[buy];
        maxp = max(maxp,profit);
        buy++;
        sell--;
    }
    return maxp;
}

int main() {
    
 vector<int> nums={7,6,4,3,1};
 cout<<maxp(nums);
 
    return 0;
}