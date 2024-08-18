#include <iostream>
using namespace std;
 
/*

Input: arr[][] = [[0, 1, 1, 1],
                   [0, 0, 1, 1],
               [1, 1, 1, 1],
               [0, 0, 0, 0]]
Output: 2
Explanation: Row 2 contains 4 1's.
*/

int firstOcc(vector<int> &arr){
    int low = 0 , high = arr.size()-1;
    int ans = arr.size();
    while (low<=high){
        int mid = low + (high-low)/2;
        if (arr[mid]>=1){
            high = mid-1;
            ans = mid;
        }
        else low = mid+1;
    }
    return ans;
}

 int rowWithMax1s(vector<vector<int> > &arr) {
    int cnt = 0;
    int max_cnt = 0;
    int index = -1;
    int rows = arr.size(), cols = arr[0].size();
    for (int i = 0 ; i<rows ; i++){
        cnt = cols - firstOcc(arr[i]);
        if (cnt>max_cnt){
            max_cnt = cnt;
            index = i;
        }
    }
    return index;
}



int main() {
 
    vector<vector<int> > arr={{0},
                              {0}};
    cout<<rowWithMax1s(arr);
 
    return 0;
}