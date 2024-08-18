#include <iostream>
using namespace std;
 
int stdcnt(int arr[],int n,long long pages){
    int studentcount =1 ; int pagecount = arr[0];
    for (int i = 1 ; i<n ; i++){
        if (pagecount+arr[i]<=pages){
            pagecount+=arr[i];
        }
        else{
            pagecount=arr[i];
            studentcount++;
        }
    }
    return studentcount;
}

//brute
long long findPages(int n, int arr[], int m) {
        if (m>n) return -1;
        int max1 = INT_MIN;
        int sum= 0; int studentCount;
        for (int i = 0 ; i< n ; i++){
            sum+=arr[i];
            max1 = max(max1,arr[i]);
        }
        for (long long pages = max1 ; pages<=sum ; pages++){
            studentCount = stdcnt(arr,n,pages);
            if (studentCount==m)return pages;
        }
        return -1;
}

//optimal
long long findPagesOP(int n, int arr[], int m) {
        if (m>n) return -1;
        int max1 = INT_MIN;
        int sum= 0; int studentCount;
        for (int i = 0 ; i< n ; i++){
            sum+=arr[i];
            max1 = max(max1,arr[i]);
        }
        int low = max1; int high = sum;
        while (low<=high){
            long long mid  =low +(high-low)/2;
            studentCount= stdcnt(arr,n,mid);
            if (studentCount<=m){
                high=mid-1; 
            }
            else low = mid+1;
        }
        return low;
}


int main() {
 
    int arr[]={15 ,10 ,19 ,10 ,5 ,18 ,7};
    int n= 7, m = 5;
    cout<<findPagesOP(n,arr,m);
    return 0;
}