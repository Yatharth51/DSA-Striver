#include <iostream>
using namespace std;
 
// 10 20 30 40 k = 2;
int maxSum(vector<int> arr , int k){
    int lsum = 0 ,rsum;
    int maxs=INT_MIN, mins=INT_MAX;
    for (int i = 0 ; i< arr.size(); i++){
        lsum+=arr[i];
        rsum = 0;
        for (int j = i+1; j<arr.size(); j++){
            rsum+=arr[j];
        }
        maxs = max(lsum,rsum);
        mins = min(mins,maxs);
    }
    return mins;
}

int main() {
    
    vector<int> arr = {10,20,30,40};
    cout<<maxSum(arr,2);
 
    return 0;
}