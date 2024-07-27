#include <iostream>
using namespace std;
 

void rightRotate(vector<int> &arr,int k){
    vector<int> temp(arr.size());
    for (int i = 0 ; i< arr.size(); i++){
        temp[(i+k)%arr.size()]= arr[i];
    }
    for (int i = 0 ; i< arr.size(); i++){
        arr[i]=temp[i];
    }
}

void leftRotate(vector<int> &arr,int k){
    vector<int> temp(arr.size());
    for (int i = 0 ; i< arr.size(); i++){
        if ((i-k)<0){
            temp[arr.size()+i-k]=arr[i];
        }
        else{
            temp[i-k]=arr[i];
        }
    }
    for (int i = 0 ; i< arr.size(); i++){
        arr[i]=temp[i];
    }
}



void print(vector<int> &arr){
    for (int i = 0 ; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    vector<int> arr = {3,7,8,9,10,11};
    print(arr); 
    leftRotate(arr,3);
    print(arr);

    return 0;
}