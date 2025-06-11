#include <iostream>
using namespace std;
#include <unordered_set>
#include <vector>
#include <stack>
#include <unordered_map>

/*
in = "abbaca" in = "aabzzbza"   ut = "za"
out = "ca"
stack = ""

*/

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int i = 0;
    int n = nums.size();
    int swapped = 0;
    while (i < n)
    {
        if (nums[i] == nums[nums[i] - 1])
        {
            i++;
        }
        int temp = nums[i];
        nums[i] = nums[temp - 1];
        nums[temp - 1] = temp;
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (nums[i - 1] != i)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

string removeDups(string s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();  // remove the duplicate
        } else {
            st.push(c);
        }
    }

    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

/*
valid paranthesis
*/

bool isValid(string s) {
        unordered_map<char,char> mp = {{'(',')'},{'{','}'},{'[',']'}} ;
        stack<char>st ;
        for (char ch : s){
            if (!st.empty() && ((st.top()=='(' && ch==')')|| (st.top()=='[' && ch==']')||(st.top()=='{' && ch=='}') )) {
                st.pop();  
            }
            else{
                st.push(ch) ;
            }
        }
        if (st.empty())return true ;
        return false ;
}

/*
string = "aabbcccddeeac" => "a2b2c3d2e2a1c1"
*/

string func (string s)
{
    string ans = "" ;
    char prev = s[0] ;
    int count = 1 ;
    for (int i= 1 ; i< s.length(); i++){
        char current = s[i] ;
        if (current==prev){
            count++ ;
        }
        else{
            ans+=prev ;
            ans+=to_string(count) ;
            prev=current ;
            count = 1 ;
        }
    }
    ans+=prev ;
    ans+=to_string(count) ;
    return ans ;
}


int main()
{
    
    cout<<func("aabbcccddeeac") ;
    return 0;
}