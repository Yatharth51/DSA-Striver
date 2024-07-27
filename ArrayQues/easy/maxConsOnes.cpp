#include <iostream>
using namespace std;
 
int maxOnes(vector<int> arr){
    int outloop=0;
    int n = arr.size();
    for (int i = 0 ; i< n ; i++){
        int inloop=0;
        if (arr[i]==1){
            inloop++;
            for (int j = i+1 ; j< n ; j++){
            if (arr[j]!=1){
                break;
            }
            else inloop++;
            }
        }
        if (inloop>outloop)outloop = inloop;
    }
    return outloop;

}

void printArr(vector<int> arr){
    for (int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
 
    vector<int> nums = {1, 0, 1, 1, 0, 1} ;
    cout<<maxOnes(nums);
 
    return 0;
}