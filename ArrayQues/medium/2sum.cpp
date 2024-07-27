#include <iostream>
using namespace std;
 
void exists(vector<int> arr, int target){
    int n = arr.size();
    int left = 0, right = n-1;
    sort(arr.begin(),arr.end());
    while (left<right){
        int sum = arr[left]+arr[right];
        if (sum==target){
            cout<<"YES";
            return;
        }
        else if (sum>target){
            sum-=arr[right];
            right--;
        }
        else{
            sum-=arr[left];
            left++;
        }
    }
    cout<<"NO";
}

int main() {
 
    vector<int> arr ={2,6,5,8,11};
    int target = 15;
    exists(arr,target);
    int arr2[2];
    return 0;
}