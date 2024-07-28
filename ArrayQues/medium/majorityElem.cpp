#include <iostream>
using namespace std;
 //better approach using hashing
int maj(vector<int> nums){
    unordered_map<int,int> mp;
    int n = nums.size();
    int freq = n/2;
    for (int i = 0  ; i< n ; i++){
        mp[nums[i]]++;
    }
    for (auto i : mp){
        if (i.second>n/2){
            return i.first;
        }
    }
    return -1;
}

//optimal approach using moores voting algorithm

int maj1(vector<int> nums){
    
}

int main() {
 
    vector<int> nums= {2,2,1,1,1,2,2};

    cout<<maj(nums);
    return 0;
}