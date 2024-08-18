#include <iostream>
using namespace std;
 
// 10 20 30 40 k = 2;

int painterscnt(vector<int> arr , int k,int time){
    int n = arr.size();
    int sum = arr[0] ;
    int paintercount = 1;
    for (int i = 1 ; i < n  ;i++){
        if (sum+arr[i]<=time){
            sum+=arr[i];
        }
        else{
            sum=arr[i];
            paintercount++;
        }
    }
    return paintercount;
}

int painters(vector<int> arr , int k){
    int maxinArr =INT_MIN;
    int sum = 0 ;
    for (int i : arr){
        sum+= i;
        maxinArr = max(maxinArr,i);
    }
    for (int i = maxinArr ; i<=sum ; i++){
        int paintercnt = painterscnt(arr,k,i);
        if (paintercnt==k)return i;
    }
    return -1;
}

int main() {
    
    vector<int> arr = {10,20,30,40};
    cout<<painters(arr,2);
 
    return 0;
}