#include <iostream>
using namespace std;
 #include <set>

vector<int> uni(vector<int> arr1, vector<int> arr2){
    vector<int> ans ;
        int i = 0 ;
        int n = arr1.size();
        int m = arr2.size();
        int j = 0;
        while (i<n && j<m){
            if ( ans.size()==0  || (arr1[i]<arr2[j] && ans.back()!=arr1[i]) ){
                ans.push_back(arr1[i]);
                i++;
            }
            else if (ans.size()==0  || (arr1[i]>arr2[j] && ans.back()!=arr2[j])  ){
                ans.push_back(arr2[j]);
                j++;
            }
            else if(ans.size()==0  || (arr1[i]==arr2[j] && ans.back()!=arr1[i]) ){
                ans.push_back(arr2[j]);
                i++;
                j++;
            }
        }
        
        while (i<n){
            if (ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
                i++;
            }
        }
        while (j<m){
            if (ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
                j++;
            }
        }
        
        return ans;
}

void printArr(vector<int> arr){
    for (int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> arr2 = {2,3,4,4,5,11,12};
    vector<int>fin = uni(arr1,arr2);
    printArr(fin);
 
 
    return 0;
}