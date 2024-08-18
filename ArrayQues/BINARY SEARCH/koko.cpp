#include <iostream>
using namespace std;

//brute

// int func(vector<int> arr,int bananasPerHour){
//     int reqtime = 0;
//     for (int i = 0 ; i< arr.size(); i++){
//         reqtime+=ceil((double)arr[i]/(double)bananasPerHour);
//     }
//     return reqtime;
// }

// int koko(vector<int> arr,int h){
//     int time = 0 ;int max1 = INT_MIN;
//     for (int i = 0 ; i< arr.size() ; i++){
//         max1 = max(max1,arr[i]);
//     }
//     for (int i = 1; i<= max1 ; i++){
//         int reqTime = func(arr,i);
//         if (reqTime<=h)return i;
//     }
//     return -1;
// }

//optimal


class Solution {
public:
    int maxi(vector<int> arr){
        int maxi = INT_MIN;
        for (int i = 0 ;i < arr.size() ; i++){
            maxi = max(maxi,arr[i]);
        }
        return maxi;
    }

    int func(vector<int> arr,int bananasPerHour){
    int reqtime = 0;
    for (int i = 0 ; i< arr.size(); i++){
        reqtime+=ceil((double)arr[i]/(double)bananasPerHour);
    }
    return reqtime;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxim = maxi(piles);
        int low = 1 , high = maxim;
        while (low<=high){
            int mid = low + (high-low)/2;
            int midn = func(piles,mid);
            if (midn<=h){
                high=mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};




int main() {
 
 
    vector<int> arr = {7, 15, 6, 3};
    int h = 8;
    
    return 0;
}