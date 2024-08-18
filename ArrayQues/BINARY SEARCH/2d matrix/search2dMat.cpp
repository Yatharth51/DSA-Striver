#include <iostream>
using namespace std;
 
bool bs(vector<int>& matrix, int target){
    int low = 0 ,high = matrix.size()-1;
    while (low<=high){
        int mid = low + (high-low)/2;
        if (target==matrix[mid]){
            return true;
        }
        else if (target>matrix[mid])low = mid+1;
        else high = mid-1;
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target){
    for (int i = 0 ; i< matrix.size(); i++){
        bool ans = bs(matrix[i],target);
        if (ans) return true;
    }
    return false;
}

int main() {
 
 
 
    return 0;
}