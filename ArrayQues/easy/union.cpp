#include <iostream>
using namespace std;
 #include <set>

vector<int> uni(vector<int> arr1, vector<int> arr2){
    set<int> st;
    vector<int>fin;
    for (int i = 0 ; i<arr1.size(); i++){
        st.insert(arr1[i]);
    }
    for (int i = 0 ; i<arr2.size(); i++){
        st.insert(arr2[i]);
    }
    for (auto i : st){
        fin.push_back(i);
    }
    return fin;
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