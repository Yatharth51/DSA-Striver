#include <iostream>
using namespace std;
 
int longest(vector<int> arr,int target){
    int left = 0 ,right = 0 ; 
    int sum = arr[0] ; int n= arr.size();
    int maxlen=  0;
    while(right<n){
        while (sum>target && left<=right){
            sum-=arr[left];
            left--;
        }
        if (sum==target){
            maxlen = max(maxlen,right-left+1);
        }
        right ++;
        sum+=arr[right];
    }
    return maxlen;
}

int main() {
 
    vector <int> arr = {2,3,5,1,9};
    int target = 10;
    cout<<longest(arr,target);
 
    return 0;
}