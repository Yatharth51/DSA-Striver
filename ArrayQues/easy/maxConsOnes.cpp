#include <iostream>
using namespace std;
 
int maxOnes(vector<int> nums){
    int outloop=0;
    int n = nums.size();
    for (int i = 0 ; i< n ; i++){
        int inloop=0;
        if (nums[i]==1){
            inloop++;
            for (int j = i+1 ; j< n ; j++){
            if (nums[j]!=1){
                break;
            }
            else inloop++;
            }
        }
        if (inloop>outloop)outloop = inloop;
    }
    return outloop;

}

void printnums(vector<int> nums){
    for (int i = 0 ; i<nums.size() ; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int main() {
 
    vector<int> nums = {1, 0, 1, 1, 0, 1} ;
    cout<<maxOnes(nums);
 
    return 0;
}