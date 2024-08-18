#include <iostream>
using namespace std;
 // bhayankar brute
double findMedianSortedArraysBrute(vector<int>& nums1, vector<int>& nums2) {
    vector<int> merged;
    int i = 0, j=0;
    while (i<nums1.size() && j< nums2.size()){
        if (nums1[i]<nums2[i]){
            merged.push_back(nums1[i]);
            i++;
        }
        else if (nums2[j]<nums1[i]){
            merged.push_back(nums2[j]);
            j++;
        }
        else{
            merged.push_back(nums1[i]);
            merged.push_back(nums2[j]);
            i++;
            j++;
        }
    }

    while (i<nums1.size()){
        merged.push_back(nums1[i]);
        i++;
    }
    while (j<nums2.size()){
        merged.push_back(nums2[j]);
        j++;
    }
    double median;
    if (merged.size()%2==0){
        int mid = merged.size()/2;
        int prevmid = mid-1;
        median = double(merged[mid]+merged[prevmid])/2;
    }
    else{
        int mid = merged.size()/2;
        median = merged[mid];
    }
    for (auto i : merged){
        cout<<i<<" ";
    }
    cout<<endl;
    return median;

}

//optimal

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    if (n1>n2)return findMedianSortedArrays(nums2,nums1);
    int n = n1+n2;
    int left = (n1+n2+1)/2;
    int low=0,high=n1;
    while (low<=high){
        int mid1 = (low+high)/2;
        int mid2 = left-mid1;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1<n1)r1 = nums1[mid1];
        if (mid2<n2) r2 = nums2[mid2];
        if (mid1-1>=0) l1 = nums1[mid1-1];
        if (mid2-1>=0) l2 = nums2[mid2-1];
        if (l1<=r2 && l2<=r1){
            if (n%2==0){
                return (double)(max(l1, l2) + min(r1, r2)) / 2.0;
            }
            else return max(l1,l2);
        }
        else if (l1>r2)return high = mid1-1;
        else low = mid1+1;
    }
    return 0;

}



int main() {
 
    vector<int> nums1 = {2,3,4};
    vector<int> nums2 = {1,3};
    cout<<findMedianSortedArrays(nums1,nums2);
 
    return 0;
}