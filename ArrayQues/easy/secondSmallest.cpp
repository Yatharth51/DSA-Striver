#include <iostream>
using namespace std;
#include <map>

int secondSmallest(vector<int> arr){
    if (arr.size()==1) return -1;
    map<int,int> mp;
    for (int i = 0 ; i< arr.size() ; i++){
        mp[arr[i]]++;
    }
    if (mp.size()==1) return -1;
    int counter = 0;
    for (auto i = mp.begin() ; i!=mp.end(); i++ ){
        if (counter==1){      // for second larget counter == mp.size()-2;
            return i->first;
        }
        counter++;
    }
    return -1;
}

int main() {
 
    
    vector<int>arr = {12, 35, 1, 10, 34, 1};
    cout<< secondSmallest(arr);
    

 
    return 0;
}