#include <iostream>
using namespace std;

bool isPossible(vector<int> &stalls,int k,int dist){
    int cowCount = 1;
    int lastIndex=0;
    for (int i = 1 ; i<stalls.size(); i++){
        if (stalls[i]-stalls[lastIndex] >=dist){
            lastIndex=i;
            cowCount++;
        }
    }
    if (cowCount>=k)return true;
    return false;
}

// brute force
// int solve(int n, int k, vector<int> &stalls) {
//     int index ;
//     sort(stalls.begin(),stalls.end());
//     for (int i = 1 ;i<=stalls[stalls.size()-1]-stalls[0] ; i++){
//         if (isPossible(stalls,k,i)){
//             index = i;
//         }
//         else return index;
//     }
//     return -1;
// } 

//optimal approach
int solve(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(),stalls.end());
    int min = stalls[0],max = stalls[n-1];
    int low = 1,high = max-min;
    while (low<=high){
        int mid  = low + (high-low)/2;
        if (isPossible(stalls,k,mid)){
            low = mid+1;
        }
        else high = mid-1;
    }
    return high;
} 

int main() {
 
    vector<int> stalls = {1 ,2 ,4 ,8 ,9};
    int k = 3;
    int n = stalls.size();
    cout<<solve (n,k,stalls);
 
    return 0;
}


