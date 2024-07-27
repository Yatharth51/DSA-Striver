#include <iostream>
using namespace std;
 
 vector<int> temp;

void finUni(vector<int> &nums1,vector<int> &nums2){
    int n= nums1.size(), m = nums2.size();
    int i =0 , j= 0;
    int k = 0;
    while (i<n && j<m){
        if (nums1[i]<nums2[j] && temp[k-1]!=nums1[i]){
            temp.push_back(nums1[i]);
            i++;
            k++;
        }
        else if (nums1[i]>nums2[j] && temp[k-1]!=nums2[j]){
            temp.push_back(nums2[j]);
            j++;
            k++;
        }
        else if (nums1[i]==nums2[j] && temp[k-1]!=nums1[i]){
            temp.push_back(nums1[i]);
            i++;j++;k++;
        }
    }
    while (i<n){
        if (temp[k-1]!=nums1[i]){
            temp.push_back(nums1[i]);
            i++;
            k++;
        }
    }
    while (j<m){
        if (temp[k-1]!=nums2[j]){
            temp.push_back(nums2[j]);
            j++;
            k++;
        }
    }
}


void print(vector<int> &arr){
    for (int i = 0 ; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {1,2,3,4,5};
    finUni(nums1,nums2);
    print(temp);

    return 0;
}