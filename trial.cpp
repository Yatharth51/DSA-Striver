#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <set>


void print(int n,int num){
    if (n>num){
        return ;
    }
    print(n+1 ,num);
    cout<<n<<" ";
}

bool comp(pair<int,int>p1, pair<int,int>p2){
    if (p1.first>p2.first){
        return false;
    }
    return true;
}

int main() {
    pair <int,int> p1[]={{5,2},{1,1},{3,1}};
    int n = 3;
    
    sort(p1,p1+n,comp);
    for (int i = 0 ; i< n ; i++){
        cout<<p1[i].first <<" "<<p1[i].second<<endl;
    }
    return 0;
}