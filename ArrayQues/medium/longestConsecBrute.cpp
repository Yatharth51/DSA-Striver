#include <iostream>
using namespace std;
#include <unordered_set>
 //brute force by me
int longest(vector<int> nums){
    sort(nums.begin(),nums.end());
    int maxcnt = 0;
    int cnt;
    int i = 0;
    int n = nums.size();
    if (n==1)return 1;
    while (i<n-1){
        cnt=1;
        while (nums[i+1]==nums[i]+1){
            cnt++;
            i++;
        }
        i++;
        maxcnt=max(cnt,maxcnt);
    }
    
    return maxcnt;
}

//optimal

int longest1(vector<int> nums){
    int n = nums.size();
    unordered_set<int> st;
    for (int i= 0 ; i< n ; i++){
        st.insert(nums[i]);
    }
    int longest = 1;
    for (auto it : st){
        if (st.find(it-1)==st.end()){
            int cnt = 1;
            int x= it;
            while (st.find(x+1)!=st.end()){
                cnt++;
            }
            longest = max(longest,cnt);
        }
        
    }
    return longest;
}
int main() {
    
    vector<int> nums = {3,8,5,7,6};
    cout<<longest1(nums);
 
 
    return 0;
}